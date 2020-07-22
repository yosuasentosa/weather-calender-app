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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
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
    QWidget *tab_2;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame;
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
    QTextEdit *wetterText;
    QLabel *iconLabel;
    QCalendarWidget *calendarWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 361, 201));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 10, 341, 151));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 291, 91));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
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
        frame->setMinimumSize(QSize(401, 531));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 200, 361, 21));
        removebutton = new QPushButton(frame);
        removebutton->setObjectName(QString::fromUtf8("removebutton"));
        removebutton->setGeometry(QRect(20, 230, 111, 31));
        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(250, 120, 111, 31));
        labeldatetime = new QLabel(frame);
        labeldatetime->setObjectName(QString::fromUtf8("labeldatetime"));
        labeldatetime->setGeometry(QRect(20, 130, 91, 16));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 230, 111, 31));
        timeEdit = new QTimeEdit(frame);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(110, 120, 121, 31));
        testAlarmBtn = new QPushButton(frame);
        testAlarmBtn->setObjectName(QString::fromUtf8("testAlarmBtn"));
        testAlarmBtn->setGeometry(QRect(270, 230, 111, 31));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(110, 160, 91, 31));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 160, 81, 31));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 160, 151, 31));
        wetterText = new QTextEdit(frame);
        wetterText->setObjectName(QString::fromUtf8("wetterText"));
        wetterText->setGeometry(QRect(10, 20, 191, 91));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(wetterText->sizePolicy().hasHeightForWidth());
        wetterText->setSizePolicy(sizePolicy2);
        wetterText->setAutoFillBackground(true);
        wetterText->setStyleSheet(QString::fromUtf8("background-color: rgb();"));
        wetterText->setFrameShape(QFrame::NoFrame);
        iconLabel = new QLabel(frame);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setGeometry(QRect(210, 10, 181, 101));
        iconLabel->setStyleSheet(QString::fromUtf8("background-color: rgb();"));
        iconLabel->setScaledContents(true);
        iconLabel->setAlignment(Qt::AlignCenter);
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
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        removebutton->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        labeldatetime->setText(QCoreApplication::translate("MainWindow", "Date and Time", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Test Snooze", nullptr));
        testAlarmBtn->setText(QCoreApplication::translate("MainWindow", "Test Alarm", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "TurnOff Snooze", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Activate Alarm", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Alarm is currently deactivated", nullptr));
        iconLabel->setText(QCoreApplication::translate("MainWindow", "iconLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
