#ifndef SNOOZE_H
#define SNOOZE_H

#include <QDialog>
#include <QMediaPlayer>
#include <mainwindow.h>
#include <QMainWindow>

namespace Ui {
class Snooze;
}

class Snooze : public QDialog
{
    Q_OBJECT

public:
    explicit Snooze(QWidget *parent = nullptr);
    ~Snooze();
    void terminatealarm();

    //Funktion deklarieren
public slots:
    void timenow();

    //Slots deklarieren
private slots:
   void on_dismissbtn_clicked();

private:
   //Variablen deklarieren
    Ui::Snooze *ui;
    QTimer *timerObject;
    QMediaPlayer *music;
    QTimer *timerdismiss;
    MainWindow test;
};

#endif // SNOOZE_H
