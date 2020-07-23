#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include "counter.h"
#include "ui_mainwindow.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //Alex
        QString Sec;
        QString Min;




public slots:
    void myfunction();
    void showsnooze();
    void snooze();
    void testalarm();

    //Alex
    void myTimerfunc();
    void showTime();

private slots:
    void on_addButton_clicked();

    void on_removebutton_clicked();

    void on_pushButton_3_clicked();

    void on_testAlarmBtn_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();
//Weather and IP slots
    void reqIP();
    void reqWeather();
    void reqWeltWeather();
    void reqIcon();
    void reqWeltIcon();
    void downloadIpFinished(QNetworkReply*);
    void downloadWetter(QNetworkReply*);
    void downloadWeltWetter(QNetworkReply*);
    void downloadIcon(QNetworkReply*);
    void downloadWeltIcon(QNetworkReply*);
    //Alex
    void on_pushButtonalex_clicked();
    void on_startButton_clicked();

    void on_stopButton_clicked();
    void start();
    void terminate();
    void hourScreenUpdate(int i);
    void minuteScreenUpdate(int i);
    void secondScreenUpdate(int i);

    void on_startButton_3_clicked();

    void on_stopButton_3_clicked();

    void on_pushButtonalex_5_clicked();
    void onTabChanged(int);


    void on_jakarta_clicked();

    void on_berlin_clicked();

    void on_losangeles_clicked();

    void on_moskau_clicked();

private:
    Ui::MainWindow *ui;
    //Alex
     QTimer *myTimer;
     Counter *hours;
     Counter *minutes;
     Counter *seconds;


    QTimer *timerObj;
    QTimer *timertest;
    QTimer *timerAlarm;
    QString ipUrl ="http://ip-api.com/json/?fields=query,country,city";
};
//Test "Hallo"
#endif // MAINWINDOW_H
