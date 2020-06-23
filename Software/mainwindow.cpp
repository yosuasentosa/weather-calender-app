#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDateTime>
#include <QtGui>
#include <QtCore>
#include <QString>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timerObj = new QTimer(this);
    connect(timerObj, SIGNAL(timeout()),this,SLOT(myfunction()));
    timerObj->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myfunction()
{
    QTime time = QTime::currentTime();
    QString time_string = time.toString("hh : mm : ss");
    ui->label->setText(time_string);

}


void MainWindow::on_addButton_clicked()
{
    QString abc;
    abc = ui->dateTimeEdit->text();
    ui->listWidget->addItem(abc);
}

void MainWindow::on_removebutton_clicked()
{
    int def;
    def = ui->listWidget->currentRow();
    ui->listWidget->takeItem(def);
}
