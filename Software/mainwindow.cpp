#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDateTime>
#include <QtGui>
#include <QtCore>
#include <QString>
#include <string>
#include "snooze.h"
#include <list>
#include <iostream>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QJsonDocument>
#include <QJsonObject>
#include "counter.h"

QString ipCity;
QString weatherURl;
QString iconID;
QString WorldrepOut;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timerObj = new QTimer(this);//Timer für aktuelle Zeit einstellen
    connect(timerObj, SIGNAL(timeout()),this,SLOT(myfunction()));//verbindet die timer-Object mit die Funktion
    timerObj->start();

    timerAlarm = new QTimer(this);//Timer für Alarm einstellen

    timertest = new QTimer(this);//timer für Snooze einstellen
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->removebutton->setEnabled(false);
    ui->testAlarmBtn->setEnabled(false);


    //Timer für Timer-Funktion initializieren und verbinden
    myTimer=new QTimer(this);
    connect(myTimer, SIGNAL(timeout()),this,SLOT(myTimerfunc()));

    //Counter initializieren und mit den Funktionen verbinden
    hours = new Counter(this,3600);
    minutes = new Counter(this,60);
    seconds = new Counter(this,1);
    connect(hours,SIGNAL(countChanges(int)), this, SLOT(hourScreenUpdate(int)));
    connect(minutes,SIGNAL(countChanges(int)), this, SLOT(minuteScreenUpdate(int)));
    connect(seconds,SIGNAL(countChanges(int)), this, SLOT(secondScreenUpdate(int)) );
    QTimer * timer_1=new QTimer(this);
    connect(timer_1, SIGNAL(timeout()),this,SLOT(showTime()));
    timer_1->start();

    //Weather info initialization
    //show weather info for the first time
    reqIP();

    //timer to request weather info every 1h
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(reqIP()));
    timer->start(3600000);

    //Update weather whenever the tab opened
    connect(ui->tabWidget, SIGNAL(currentChanged(int)), this, SLOT(onTabChanged(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//
void MainWindow::onTabChanged(int tabIndex) {
    if (tabIndex == 5) {
    on_berlin_clicked();
    }
    else if (tabIndex ==0){
        reqIP();
    }
}
//Logic für den Timer
void MainWindow::myTimerfunc()
{
    qDebug()<<"läuft..";

    static int Second=ui->spinBox_2->text().toInt();
    static int Minute=ui->spinBox->text().toInt();

    if(Second==0){

        Second=60;
        Minute--;

    }

    if(Minute==60){

        Minute=60;
    }

    Second--;

    Sec=Second;
    Min=Minute;

    ui->lcdmin->display(Minute);
    ui->lcdsecc->display(Second);
}

//startet den Timer mit 1 Sec Interval
void MainWindow::on_pushButtonalex_clicked()
{
    myTimer->start(1000);
}

//startet die Counter-Funktionen
void MainWindow::start(){
    hours->start();
    minutes->start();
    seconds->start();
}

//beendet die Counter-Funktionen
void MainWindow::terminate(){
    hours->terminate();
    minutes->terminate();
    seconds->terminate();
}

void MainWindow::on_startButton_clicked()
{
    start();
}

void MainWindow::on_stopButton_clicked()
{
    terminate();
}

void MainWindow::hourScreenUpdate(int i)
{
    ui->hourScreen_3->display(i);
}

void MainWindow::minuteScreenUpdate(int i)
{
    ui->minuteScreen_3->display(i);
}

void MainWindow::secondScreenUpdate(int i)
{
    ui->secondScreen_3->display(i);
}

//Methoden um die Zeit anzuzeigen.
void MainWindow::showTime()
{
    QTime timeberlin=QTime::currentTime();
    QString time_textberlin=timeberlin.toString("hh: mm: ss");

    int h=timeberlin.hour();
    int m=timeberlin.minute();
    int s=timeberlin.second();
    ui->lcdNumber_34->display(h+1);
    ui->lcdNumber_36->display(m);
    ui->lcdNumber_35->display(s);

    ui->lcdNumber_28->display(h);
    ui->lcdNumber_31->display(m);
    ui->lcdNumber_30->display(s);

    ui->lcdNumber_32->display(h-9);
    ui->lcdNumber_29->display(m);
    ui->lcdNumber_33->display(s);
}

//Funktion für aktuelle Zeit
void MainWindow::myfunction()
{
    QTime time = QTime::currentTime();
    QString time_string = time.toString("hh : mm : ss");
    QString time_string1 = time.toString("hh.mm");
    ui->label_2->setText(time_string);
}

//Zeit für Alarm in ListWidget hinzufügen
void MainWindow::on_addButton_clicked()
{
    QString abc;
    abc = ui->timeEdit->text();
    ui->listWidget->addItem(abc);
    ui->listWidget->setCurrentRow(1);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->removebutton->setEnabled(true);
    ui->testAlarmBtn->setEnabled(true);
}

//Item in ListWidget entfernen
void MainWindow::on_removebutton_clicked()
{
    timertest->stop();
    timerAlarm->stop();
    ui->listWidget->clear();
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->removebutton->setEnabled(false);
    ui->testAlarmBtn->setEnabled(false);
    ui->label_3->setText("Alarm ist darzeit deaktiviert");
}

//TestSnooze
void MainWindow::on_pushButton_3_clicked()
{   
    snooze();
}

//Snoozefenster wird angezeigt
void MainWindow::showsnooze()
{
    Snooze snooze;
    snooze.setModal(true);
    snooze.exec();
}

//Timer für snooze auf 5 mins gesetz
void MainWindow::snooze()
{
    connect(timertest, SIGNAL(timeout()), this, SLOT(showsnooze()));
    timertest->start(300000);//5mins
}

//überprüft ob die gewünschte Zeit für Alarm gleich wie die Aktuelle Zeit sind
void MainWindow::testalarm()
{
    QTime time = QTime::currentTime();
    QString timestring = time.toString("hh.mm");
    QListWidgetItem *savedtime = ui->listWidget->item(0);
    QString savedtimestring = savedtime->text();
    if(timestring == savedtimestring)
    {
        showsnooze();
        snooze();
        timerAlarm->stop();
    }
}

//snooze testen
void MainWindow::on_testAlarmBtn_clicked()
{
    showsnooze();
}

//die Timers werden gestoppt
void MainWindow::on_pushButton_4_clicked()
{
    timertest->stop();
    timerAlarm->stop();
    ui->label_3->setText("Alarm is currently deactivated");
}

//aktiviert das Alarm und ruft die Funktion-Testalarm
void MainWindow::on_pushButton_5_clicked()
{
    connect(timerAlarm, SIGNAL(timeout()), this, SLOT(testalarm()));
    timerAlarm->start(1000);
    ui->label_3->setText("Alarm ist aktiviert");
}

//request ip and location to http://ip-api.com
void MainWindow::reqIP(){
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::downloadIpFinished);
    const QUrl url =QUrl(ipUrl);
    QNetworkRequest request(url);
    man->get(request);
}

//download and read the API respond
void MainWindow::downloadIpFinished(QNetworkReply* reply){
    QString replyText = reply->readAll();
    QJsonDocument repDoc = QJsonDocument::fromJson(replyText.toUtf8());
    QJsonObject repObj = repDoc.object();
    ipCity = repObj.value(QString("city")).toString();
    ui->wetterText->setText(ipCity);

    //add city to the weather API request
    weatherURl = "http://api.openweathermap.org/data/2.5/weather?q="+ipCity+"&appid=beca7600f8bdadacae139b13ade2dbf7&units=metric";
    reqWeather();
}

//request the weather in location to api.openweathermap.org
void MainWindow::reqWeather(){
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::downloadWetter);
    const QUrl url =QUrl(weatherURl);
    QNetworkRequest request(url);
    man->get(request);
}

//download and read the weather API respond
void MainWindow::downloadWetter(QNetworkReply *reply){
    QString replyText = reply->readAll();
    QJsonDocument repDoc = QJsonDocument::fromJson(replyText.toUtf8());
    QJsonObject repObj = repDoc.object();
    QJsonValue repValue = repObj.value(QString("weather"));
    QJsonObject subValObj = repValue[0].toObject();
    QJsonValue subVal = subValObj.value(QString("main"));
    iconID = subValObj.value(QString("icon")).toString();
    QJsonValue mainVal = repObj.value(QString("main"));
    QJsonObject mainValObj = mainVal.toObject();
    QJsonValue tempVal = mainValObj.value(QString("temp"));
    QJsonValue tempFeelVal = mainValObj.value(QString("feels_like"));
    QString weatherOut = "Weather: "+ subVal.toString();
    QString tempStr ="\nTemp: "+ QString("%1").arg(tempFeelVal.toDouble())  + "°C";
    QString feelTempStr ="\nFeels like: "+ QString("%1").arg(tempVal.toDouble())  + "°C";
    QString repOut = ipCity + "\n" + weatherOut + tempStr+feelTempStr ;
    ui->wetterText->setText(repOut);

    reqIcon();
}

//request the weather icon
void MainWindow::reqIcon(){
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished, this, &MainWindow::downloadIcon);
    const QUrl url = QUrl("http://openweathermap.org/img/wn/" + iconID + "@2x.png"); //add weather condition code for icon
    QNetworkRequest request(url);
    man->get(request);
}

//download and read the icon from  respond http://openweathermap.org
void MainWindow::downloadIcon(QNetworkReply *reply){
    QPixmap icon;
    icon.loadFromData(reply->readAll());
    ui->iconLabel->setPixmap(icon);
    ui->iconLabel->setScaledContents(true);
}

void MainWindow::on_startButton_3_clicked()
{
    start();
}

void MainWindow::on_stopButton_3_clicked()
{
    terminate();
}

void MainWindow::on_pushButtonalex_5_clicked()
{
    ui->lcdmin->display(0);
    ui->lcdsecc->display(0);
    myTimer->stop();

}

//Request API for world/other cities weather
void MainWindow::reqWeltWeather(){
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::downloadWeltWetter);
    const QUrl url =QUrl(weatherURl);
    QNetworkRequest request(url);
    man->get(request);
}


//Read the API respond for world/other cities weather
void MainWindow::downloadWeltWetter(QNetworkReply *reply){
    QString replyText = reply->readAll();
    QJsonDocument repDoc = QJsonDocument::fromJson(replyText.toUtf8());
    QJsonObject repObj = repDoc.object();
    QJsonValue repValue = repObj.value(QString("weather"));
    QJsonObject subValObj = repValue[0].toObject();
    QJsonValue subVal = subValObj.value(QString("main"));
    iconID = subValObj.value(QString("icon")).toString();
    QJsonValue mainVal = repObj.value(QString("main"));
    QJsonObject mainValObj = mainVal.toObject();
    QJsonValue tempVal = mainValObj.value(QString("temp"));
    QJsonValue tempFeelVal = mainValObj.value(QString("feels_like"));
    QString weatherOut = "Weather: "+ subVal.toString();
    QString tempStr ="\nTemp: "+ QString("%1").arg(tempFeelVal.toDouble())  + "°C";
    QString feelTempStr ="\nFeels like: "+ QString("%1").arg(tempVal.toDouble())  + "°C";
    WorldrepOut = ipCity + "\n" + weatherOut + tempStr+feelTempStr ;
    ui->worldWeather->setText(WorldrepOut);

    reqWeltIcon();
}

//request the weather icon
void MainWindow::reqWeltIcon(){
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished, this, &MainWindow::downloadWeltIcon);
    const QUrl url = QUrl("http://openweathermap.org/img/wn/" + iconID + "@2x.png");
    QNetworkRequest request(url);
    man->get(request);
}

//download and read the icon from  respond http://openweathermap.org
void MainWindow::downloadWeltIcon(QNetworkReply *reply){
    QPixmap icon;
    icon.loadFromData(reply->readAll());
    ui->worldWeatherIcon->setPixmap(icon);
    ui->worldWeatherIcon->setScaledContents(true);
}


void MainWindow::on_jakarta_clicked()
{
    ipCity="Jakarta";
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::downloadWeltWetter);
    weatherURl = "http://api.openweathermap.org/data/2.5/weather?q=jakarta&appid=beca7600f8bdadacae139b13ade2dbf7&units=metric";
    const QUrl url =QUrl(weatherURl);
    QNetworkRequest request(url);
    man->get(request);
}

void MainWindow::on_berlin_clicked()
{
    ipCity="Berlin";
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::downloadWeltWetter);
    weatherURl = "http://api.openweathermap.org/data/2.5/weather?q=berlin&appid=beca7600f8bdadacae139b13ade2dbf7&units=metric";
    const QUrl url =QUrl(weatherURl);
    QNetworkRequest request(url);
    man->get(request);
}

void MainWindow::on_losangeles_clicked()
{
    ipCity="Los Angeles";
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::downloadWeltWetter);
    weatherURl = "http://api.openweathermap.org/data/2.5/weather?id=5368361&appid=beca7600f8bdadacae139b13ade2dbf7&units=metric";
    const QUrl url =QUrl(weatherURl);
    QNetworkRequest request(url);
    man->get(request);
}

void MainWindow::on_moskau_clicked()
{
    ipCity="Moskau";
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::downloadWeltWetter);
    weatherURl = "http://api.openweathermap.org/data/2.5/weather?q=moscow&appid=beca7600f8bdadacae139b13ade2dbf7&units=metric";
    const QUrl url =QUrl(weatherURl);
    QNetworkRequest request(url);
    man->get(request);
}

/*
              GNU LESSER GENERAL PUBLIC LICENSE
                  Version 3, 29 June 2007

Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>
Everyone is permitted to copy and distribute verbatim copies
of this license document, but changing it is not allowed.

This version of the GNU Lesser General Public License incorporates
the terms and conditions of version 3 of the GNU General Public
License, supplemented by the additional permissions listed below.

0. Additional Definitions.

As used herein, "this License" refers to version 3 of the GNU Lesser
General Public License, and the "GNU GPL" refers to version 3 of the GNU
General Public License.

"The Library" refers to a covered work governed by this License,
other than an Application or a Combined Work as defined below.

An "Application" is any work that makes use of an interface provided
by the Library, but which is not otherwise based on the Library.
Defining a subclass of a class defined by the Library is deemed a mode
of using an interface provided by the Library.

A "Combined Work" is a work produced by combining or linking an
Application with the Library.  The particular version of the Library
with which the Combined Work was made is also called the "Linked
Version".

The "Minimal Corresponding Source" for a Combined Work means the
Corresponding Source for the Combined Work, excluding any source code
for portions of the Combined Work that, considered in isolation, are
based on the Application, and not on the Linked Version.

The "Corresponding Application Code" for a Combined Work means the
object code and/or source code for the Application, including any data
and utility programs needed for reproducing the Combined Work from the
Application, but excluding the System Libraries of the Combined Work.

1. Exception to Section 3 of the GNU GPL.

You may convey a covered work under sections 3 and 4 of this License
without being bound by section 3 of the GNU GPL.

2. Conveying Modified Versions.

If you modify a copy of the Library, and, in your modifications, a
facility refers to a function or data to be supplied by an Application
that uses the facility (other than as an argument passed when the
facility is invoked), then you may convey a copy of the modified
version:

a) under this License, provided that you make a good faith effort to
ensure that, in the event an Application does not supply the
function or data, the facility still operates, and performs
whatever part of its purpose remains meaningful, or

b) under the GNU GPL, with none of the additional permissions of
this License applicable to that copy.

3. Object Code Incorporating Material from Library Header Files.

The object code form of an Application may incorporate material from
a header file that is part of the Library.  You may convey such object
code under terms of your choice, provided that, if the incorporated
material is not limited to numerical parameters, data structure
layouts and accessors, or small macros, inline functions and templates
(ten or fewer lines in length), you do both of the following:

a) Give prominent notice with each copy of the object code that the
Library is used in it and that the Library and its use are
covered by this License.

b) Accompany the object code with a copy of the GNU GPL and this license
document.

4. Combined Works.

You may convey a Combined Work under terms of your choice that,
taken together, effectively do not restrict modification of the
portions of the Library contained in the Combined Work and reverse
engineering for debugging such modifications, if you also do each of
the following:

a) Give prominent notice with each copy of the Combined Work that
the Library is used in it and that the Library and its use are
covered by this License.

b) Accompany the Combined Work with a copy of the GNU GPL and this license
document.

c) For a Combined Work that displays copyright notices during
execution, include the copyright notice for the Library among
these notices, as well as a reference directing the user to the
copies of the GNU GPL and this license document.

d) Do one of the following:

  0) Convey the Minimal Corresponding Source under the terms of this
  License, and the Corresponding Application Code in a form
  suitable for, and under terms that permit, the user to
  recombine or relink the Application with a modified version of
  the Linked Version to produce a modified Combined Work, in the
  manner specified by section 6 of the GNU GPL for conveying
  Corresponding Source.

  1) Use a suitable shared library mechanism for linking with the
  Library.  A suitable mechanism is one that (a) uses at run time
  a copy of the Library already present on the user's computer
  system, and (b) will operate properly with a modified version
  of the Library that is interface-compatible with the Linked
  Version.

e) Provide Installation Information, but only if you would otherwise
be required to provide such information under section 6 of the
GNU GPL, and only to the extent that such information is
necessary to install and execute a modified version of the
Combined Work produced by recombining or relinking the
Application with a modified version of the Linked Version. (If
you use option 4d0, the Installation Information must accompany
the Minimal Corresponding Source and Corresponding Application
Code. If you use option 4d1, you must provide the Installation
Information in the manner specified by section 6 of the GNU GPL
for conveying Corresponding Source.)

5. Combined Libraries.

You may place library facilities that are a work based on the
Library side by side in a single library together with other library
facilities that are not Applications and are not covered by this
License, and convey such a combined library under terms of your
choice, if you do both of the following:

a) Accompany the combined library with a copy of the same work based
on the Library, uncombined with any other library facilities,
conveyed under the terms of this License.

b) Give prominent notice with the combined library that part of it
is a work based on the Library, and explaining where to find the
accompanying uncombined form of the same work.

6. Revised Versions of the GNU Lesser General Public License.

The Free Software Foundation may publish revised and/or new versions
of the GNU Lesser General Public License from time to time. Such new
versions will be similar in spirit to the present version, but may
differ in detail to address new problems or concerns.

Each version is given a distinguishing version number. If the
Library as you received it specifies that a certain numbered version
of the GNU Lesser General Public License "or any later version"
applies to it, you have the option of following the terms and
conditions either of that published version or of any later version
published by the Free Software Foundation. If the Library as you
received it does not specify a version number of the GNU Lesser
General Public License, you may choose any version of the GNU Lesser
General Public License ever published by the Free Software Foundation.

If the Library as you received it specifies that a proxy can decide
whether future versions of the GNU Lesser General Public License shall
apply, that proxy's public statement of acceptance of any version is
permanent authorization for you to choose that version for the
Library.

*/
