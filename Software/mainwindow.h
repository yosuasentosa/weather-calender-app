#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
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

private slots:
    void on_addButton_clicked();

    void on_removebutton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timerObj;
};
#endif // MAINWINDOW_H
