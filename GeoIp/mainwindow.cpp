#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
#include <QPixmap>

QString weatherURl;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString ipCity;
    QString weatherURl;
    on_ipButton_clicked();
    QPixmap img("http://openweathermap.org/img/wn/10d@2x.png");
    ui->label->setPixmap(img);
    //on_weatherButton_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ipButton_clicked()
{
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::downloadFinished);
    const QUrl url =QUrl(ipUrl);
    QNetworkRequest request(url);
    man->get(request);
}

void MainWindow::downloadFinished(QNetworkReply *reply){
    QString replyText = reply->readAll();
    QJsonDocument repDoc = QJsonDocument::fromJson(replyText.toUtf8());
    QJsonObject repObj = repDoc.object();
    QString repOut = "IP: " + repObj.value(QString("query")).toString() + "\nCity: " + repObj.value(QString("city")).toString() + "\nCountry: " +repObj.value(QString("country")).toString();
    ui->Display->setText(repOut);
    QString ipCity = repObj.value(QString("city")).toString();
    QString weatherURl = "http://api.openweathermap.org/data/2.5/weather?q="+ipCity+"&appid=beca7600f8bdadacae139b13ade2dbf7&units=metric";

    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::weatherDownloadFinished);
    const QUrl url =QUrl(weatherURl);
    QNetworkRequest request(url);
    man->get(request);
}

/*void MainWindow::on_weatherButton_clicked()
{
    on_ipButton_clicked();
    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished,this, &MainWindow::weatherDownloadFinished);
    const QUrl url =QUrl(weatherURl);
    QNetworkRequest request(url);
    man->get(request);
}*/

void MainWindow::weatherDownloadFinished(QNetworkReply *reply){
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
    QString repOut = weatherOut + tempStr+feelTempStr ;
    ui->weatherDisplay->setText(repOut);

    QNetworkAccessManager *man = new QNetworkAccessManager(this);
    connect(man, &QNetworkAccessManager::finished, this, &MainWindow::loadIcon);
    const QUrl url = QUrl("http://openweathermap.org/img/wn/" + iconID + "@2x.png");
    QNetworkRequest request(url);
    man->get(request);
}

void MainWindow::loadIcon(QNetworkReply *reply){
    QPixmap icon;
    icon.loadFromData(reply->readAll());
    ui->label->setPixmap(icon);
    ui->label->setScaledContents(true);
}
