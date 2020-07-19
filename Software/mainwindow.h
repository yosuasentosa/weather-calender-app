#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void myfunction();
    void showsnooze();
    void snooze();
    void testalarm();

private slots:
    void on_addButton_clicked();

    void on_removebutton_clicked();

    void on_pushButton_3_clicked();

    void on_testAlarmBtn_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();


private:
    Ui::MainWindow *ui;
    QTimer *timerObj;
    QTimer *timertest;
    QTimer *timerAlarm;
};
#endif // MAINWINDOW_H
