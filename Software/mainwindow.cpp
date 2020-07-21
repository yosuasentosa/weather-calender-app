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

    reqIP();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Funktion für aktuelle Zeit
void MainWindow::myfunction()
{
    QTime time = QTime::currentTime();
    QString time_string = time.toString("hh : mm : ss");
    QString time_string1 = time.toString("hh.mm");
    ui->label->setText(time_string);
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
    ui->label_3->setText("Alarm is currently deactivated");
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
    ui->label_3->setText("Alarm is activated");
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
