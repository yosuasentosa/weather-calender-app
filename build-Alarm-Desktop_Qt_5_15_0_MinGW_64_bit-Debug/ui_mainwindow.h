/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *tab_2;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame;
    QGroupBox *groupBox;
    QCheckBox *chkMon;
    QCheckBox *chkTues;
    QCheckBox *chkWed;
    QCheckBox *chkThurs;
    QCheckBox *chkFri;
    QCheckBox *chkSat;
    QCheckBox *chkSun;
    QListWidget *listWidget;
    QPushButton *removebutton;
    QPushButton *addButton;
    QLabel *labeldatetime;
    QPushButton *pushButton_3;
    QTimeEdit *timeEdit;
    QPushButton *testAlarmBtn;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QCalendarWidget *calendarWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 361, 201));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 0, 281, 91));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 90, 47, 13));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 110, 47, 13));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 130, 47, 13));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 291, 91));
        label->setFont(font);
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 110, 75, 23));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 110, 75, 23));
        tabWidget->addTab(tab_2, QString());
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(390, 10, 401, 531));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 90, 381, 91));
        chkMon = new QCheckBox(groupBox);
        chkMon->setObjectName(QString::fromUtf8("chkMon"));
        chkMon->setGeometry(QRect(20, 20, 86, 23));
        chkTues = new QCheckBox(groupBox);
        chkTues->setObjectName(QString::fromUtf8("chkTues"));
        chkTues->setGeometry(QRect(110, 20, 86, 23));
        chkWed = new QCheckBox(groupBox);
        chkWed->setObjectName(QString::fromUtf8("chkWed"));
        chkWed->setGeometry(QRect(190, 20, 91, 23));
        chkThurs = new QCheckBox(groupBox);
        chkThurs->setObjectName(QString::fromUtf8("chkThurs"));
        chkThurs->setGeometry(QRect(280, 20, 86, 23));
        chkFri = new QCheckBox(groupBox);
        chkFri->setObjectName(QString::fromUtf8("chkFri"));
        chkFri->setGeometry(QRect(60, 50, 86, 23));
        chkSat = new QCheckBox(groupBox);
        chkSat->setObjectName(QString::fromUtf8("chkSat"));
        chkSat->setGeometry(QRect(150, 50, 86, 23));
        chkSun = new QCheckBox(groupBox);
        chkSun->setObjectName(QString::fromUtf8("chkSun"));
        chkSun->setGeometry(QRect(250, 50, 86, 23));
        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 200, 261, 221));
        removebutton = new QPushButton(frame);
        removebutton->setObjectName(QString::fromUtf8("removebutton"));
        removebutton->setGeometry(QRect(280, 240, 111, 31));
        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(280, 200, 111, 31));
        labeldatetime = new QLabel(frame);
        labeldatetime->setObjectName(QString::fromUtf8("labeldatetime"));
        labeldatetime->setGeometry(QRect(20, 20, 91, 16));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 280, 111, 31));
        timeEdit = new QTimeEdit(frame);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(110, 10, 121, 31));
        testAlarmBtn = new QPushButton(frame);
        testAlarmBtn->setObjectName(QString::fromUtf8("testAlarmBtn"));
        testAlarmBtn->setGeometry(QRect(280, 320, 111, 31));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(110, 50, 91, 31));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 50, 81, 31));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 50, 151, 31));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 230, 361, 311));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Wetter", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Standort", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Repeat every", nullptr));
        chkMon->setText(QCoreApplication::translate("MainWindow", "Monday", nullptr));
        chkTues->setText(QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        chkWed->setText(QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        chkThurs->setText(QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        chkFri->setText(QCoreApplication::translate("MainWindow", "Friday", nullptr));
        chkSat->setText(QCoreApplication::translate("MainWindow", "Saturday", nullptr));
        chkSun->setText(QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        removebutton->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        labeldatetime->setText(QCoreApplication::translate("MainWindow", "Date and Time", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Test Snooze", nullptr));
        testAlarmBtn->setText(QCoreApplication::translate("MainWindow", "Test Alarm", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "TurnOff Snooze", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "testAlarm", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Alarm is currently deactivated", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
