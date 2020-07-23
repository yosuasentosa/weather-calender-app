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


    //Alex
    myTimer=new QTimer(this);
    connect(myTimer, SIGNAL(timeout()),this,SLOT(myTimerfunc()));
    //Counter
    hours = new Counter(this,3600);
    minutes = new Counter(this,60);
    seconds = new Counter(this,1);
    connect(hours,SIGNAL(countChanges(int)), this, SLOT(hourScreenUpdate(int)));
    connect(minutes,SIGNAL(countChanges(int)), this, SLOT(minuteScreenUpdate(int)));
    connect(seconds,SIGNAL(countChanges(int)), this, SLOT(secondScreenUpdate(int)) );
    QTimer * timer_1=new QTimer(this);
    connect(timer_1, SIGNAL(timeout()),this,SLOT(showTime()));
    timer_1->start();


    reqIP();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Alex
void MainWindow::myTimerfunc()
{
    qDebug()<<"läuft..";

    static int Second=ui->spinBox_2->text().toInt();
    static int Minute=ui->spinBox->text().toInt();
    static int Hours=ui->spinBox_5->text().toInt();

    if(Second==0){

        Second=60;
        Minute--;

    }

    if(Minute==60){

        Minute=60;
        Hours--;

    }

    Second--;

    Sec=Second;
    Min=Minute;



    ui->lcdmin->display(Minute);
    ui->lcdsecc->display(Second);
    ui->lcdhours->display(Hours);

}


void MainWindow::on_pushButtonalex_clicked()
{



    myTimer->start(1000);



}

void MainWindow::start(){
    hours->start();
    minutes->start();
    seconds->start();
}
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
{ui->hourScreen_3->display(i);}
void MainWindow::minuteScreenUpdate(int i)
{ui->minuteScreen_3->display(i);}
void MainWindow::secondScreenUpdate(int i)
{ui->secondScreen_3->display(i);}

void MainWindow::showTime()
{
    QTime timeberlin=QTime::currentTime();
    QString time_textberlin=timeberlin.toString("hh: mm: ss");
    //ui->label_b->setText(time_textberlin);


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

void MainWindow::showsnooze()
{
    Snooze snooze;
    snooze.setModal(true);
    snooze.exec();
}

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


void MainWindow::on_testAlarmBtn_clicked()
{
    showsnooze();
}

void MainWindow::on_pushButton_4_clicked()
{
    timertest->stop();
    timerAlarm->stop();
    ui->label_3->setText("Alarm is currently deactivated");
}

void MainWindow::on_pushButton_5_clicked()
{
    connect(timerAlarm, SIGNAL(timeout()), this, SLOT(testalarm()));
    timerAlarm->start(1000);
    ui->label_3->setText("Alarm ist aktiviert");
}
void MainWindow::reqIP(){
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::downloadIpFinished);
    const QUrl url =QUrl(ipUrl);
    QNetworkRequest request(url);
    man->get(request);
}

void MainWindow::downloadIpFinished(QNetworkReply* reply){
    QString replyText = reply->readAll();
    QJsonDocument repDoc = QJsonDocument::fromJson(replyText.toUtf8());
    QJsonObject repObj = repDoc.object();
    ipCity = repObj.value(QString("city")).toString();
    ui->wetterText->setText(ipCity);
    QString weatherURl = "http://api.openweathermap.org/data/2.5/weather?q="+ipCity+"&appid=beca7600f8bdadacae139b13ade2dbf7&units=metric";

    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::downloadWetter);
    const QUrl url =QUrl(weatherURl);
    QNetworkRequest request(url);
    man->get(request);
}

void MainWindow::downloadWetter(QNetworkReply *reply){
    QString replyText = reply->readAll();
    qDebug() << replyText;
    QJsonDocument repDoc = QJsonDocument::fromJson(replyText.toUtf8());
    QJsonObject repObj = repDoc.object();
    QJsonValue repValue = repObj.value(QString("weather"));
    QJsonObject subValObj = repValue[0].toObject();
    QJsonValue subVal = subValObj.value(QString("main"));
    QString iconID = subValObj.value(QString("icon")).toString();
    qDebug() << iconID;
    QJsonValue mainVal = repObj.value(QString("main"));
    QJsonObject mainValObj = mainVal.toObject();
    QJsonValue tempVal = mainValObj.value(QString("temp"));
    QJsonValue tempFeelVal = mainValObj.value(QString("feels_like"));
    QString weatherOut = "Weather: "+ subVal.toString();
    QString tempStr ="\nTemp: "+ QString("%1").arg(tempFeelVal.toDouble())  + "°C";
    QString feelTempStr ="\nFeels like: "+ QString("%1").arg(tempVal.toDouble())  + "°C";
    QString repOut = ipCity + "\n" + weatherOut + tempStr+feelTempStr ;
    ui->wetterText->setText(repOut);

    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished, this, &MainWindow::downloadIcon);
    const QUrl url = QUrl("http://openweathermap.org/img/wn/" + iconID + "@2x.png");
    QNetworkRequest request(url);
    man->get(request);
}

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
    ui->lcdhours->display(0);

myTimer->stop();

}
