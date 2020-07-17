#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    QString ipUrl ="http://ip-api.com/json/?fields=query,country,city";
    Ui::MainWindow *ui;

private slots:
    void downloadFinished(QNetworkReply*);
    void weatherDownloadFinished(QNetworkReply*);
    void on_ipButton_clicked();
    void loadIcon(QNetworkReply*);
};
#endif // MAINWINDOW_H
