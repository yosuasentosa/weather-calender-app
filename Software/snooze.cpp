#include "snooze.h"
#include "ui_snooze.h"
#include "mainwindow.h"
#include <QDateTime>
#include <QtGui>
#include <QtCore>
#include <QString>
#include <QMediaPlayer>

Snooze::Snooze(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Snooze)
{
    ui->setupUi(this);
    timerObject = new QTimer(this);
    connect(timerObject, SIGNAL(timeout()),this,SLOT(timenow()));
    timerObject->start();
    timerdismiss = new QTimer(this);
    //connect(timerdismiss,SIGNAL(timeout()), this, SLOT(on_dismissbtn_clicked()));
    //timerdismiss->start(2000);
    music = new QMediaPlayer();
    music->setMedia(QUrl("alarmtone.mp3"));
    music->play();
    //qrc:/sound/E:/vertiefungsproj/
}

Snooze::~Snooze()
{
    delete ui;
}

void Snooze::terminatealarm()
{
    music->stop();
    Snooze::close();
}

void Snooze::timenow()
{
    QTime time = QTime::currentTime();
    QString time_string = time.toString("hh : mm : ss");
    ui->label->setText(time_string);

}

//void Snooze::on_pushButton_2_clicked()
//{
//    music->stop();
//    Snooze::close();
//}

void Snooze::on_dismissbtn_clicked()
{
    terminatealarm();
}
