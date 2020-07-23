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
    //Objekte initialisieren
    ui->setupUi(this);
    timerObject = new QTimer(this);
    connect(timerObject, SIGNAL(timeout()),this,SLOT(timenow()));
    timerObject->start();
    timerdismiss = new QTimer(this);
    music = new QMediaPlayer();
    //der Alarmton einrichten
    music->setMedia(QUrl("qrc:/sound/alarmtone.mp3"));
    music->play();
}

Snooze::~Snooze()
{
    delete ui;
}

//beendet der Alarmton und schliess den Snoozefenster zu.
void Snooze::terminatealarm()
{
    music->stop();
    Snooze::close();
}

//initialisiert die aktuelle Zeit
void Snooze::timenow()
{
    QTime time = QTime::currentTime();
    QString time_string = time.toString("hh : mm : ss");
    ui->label->setText(time_string);

}

//ruft die Funktion terminatealarm() auf
void Snooze::on_dismissbtn_clicked()
{
    terminatealarm();
}
