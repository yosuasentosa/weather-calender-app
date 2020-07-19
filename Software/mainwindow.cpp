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
    ui->label_6->setText(abc);
    ui->listWidget->setCurrentRow(1);
}

//Item in ListWidget entfernen
void MainWindow::on_removebutton_clicked()
{
    int def;
    def = ui->listWidget->currentRow();
    ui->listWidget->takeItem(def);
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
    timertest->start(5000);//5sec
}

void MainWindow::testalarm()
{
    QTime time = QTime::currentTime();
    QString timestring = time.toString("hh.mm");
    QListWidgetItem *savedtime = ui->listWidget->item(0);
    QString savedtimestring = savedtime->text();
    if(timestring == savedtimestring)
    {
        showsnooze();
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

