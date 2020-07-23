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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Wetter;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *iconLabel;
    QTextEdit *wetterText;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QPushButton *testAlarmBtn;
    QLabel *labeldatetime;
    QPushButton *pushButton_5;
    QListWidget *listWidget;
    QTimeEdit *timeEdit;
    QLabel *label_3;
    QPushButton *addButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *removebutton;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QLabel *label_30;
    QLabel *label_11;
    QLabel *label_12;
    QLCDNumber *lcdhours;
    QLCDNumber *lcdmin;
    QLCDNumber *lcdsecc;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_10;
    QPushButton *pushButtonalex;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QPushButton *pushButtonalex_5;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QLabel *hoursLabel_3;
    QLabel *minutesLabel_3;
    QLabel *secondsLabel_3;
    QLCDNumber *hourScreen_3;
    QLCDNumber *minuteScreen_3;
    QLCDNumber *secondScreen_3;
    QPushButton *startButton_3;
    QPushButton *stopButton_3;
    QWidget *tab_4;
    QGridLayout *gridLayout_5;
    QLabel *label_55;
    QLabel *label_54;
    QLCDNumber *lcdNumber_28;
    QLCDNumber *lcdNumber_31;
    QLCDNumber *lcdNumber_30;
    QLCDNumber *lcdNumber_32;
    QLCDNumber *lcdNumber_29;
    QLCDNumber *lcdNumber_33;
    QLabel *label_56;
    QLCDNumber *lcdNumber_34;
    QLCDNumber *lcdNumber_36;
    QLCDNumber *lcdNumber_35;
    QWidget *tab_5;
    QGridLayout *gridLayout_6;
    QPushButton *berlin;
    QPushButton *moskau;
    QPushButton *jakarta;
    QSpacerItem *verticalSpacer;
    QPushButton *losangeles;
    QTextEdit *worldWeather;
    QLabel *worldWeatherIcon;
    QCalendarWidget *calendarWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(399, 607);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(399, 607));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(364, 196));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        Wetter = new QWidget();
        Wetter->setObjectName(QString::fromUtf8("Wetter"));
        gridLayout_2 = new QGridLayout(Wetter);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(Wetter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 2);

        iconLabel = new QLabel(Wetter);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy1);
        iconLabel->setStyleSheet(QString::fromUtf8("background-color: rgb();"));
        iconLabel->setScaledContents(true);
        iconLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(iconLabel, 1, 1, 1, 1);

        wetterText = new QTextEdit(Wetter);
        wetterText->setObjectName(QString::fromUtf8("wetterText"));
        sizePolicy1.setHeightForWidth(wetterText->sizePolicy().hasHeightForWidth());
        wetterText->setSizePolicy(sizePolicy1);
        wetterText->setMinimumSize(QSize(256, 102));
        wetterText->setContextMenuPolicy(Qt::CustomContextMenu);
        wetterText->setAutoFillBackground(true);
        wetterText->setStyleSheet(QString::fromUtf8("background-color: rgb();"));
        wetterText->setFrameShape(QFrame::NoFrame);
        wetterText->setReadOnly(true);

        gridLayout_2->addWidget(wetterText, 1, 0, 1, 1);

        tabWidget->addTab(Wetter, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        testAlarmBtn = new QPushButton(tab_2);
        testAlarmBtn->setObjectName(QString::fromUtf8("testAlarmBtn"));

        gridLayout->addWidget(testAlarmBtn, 3, 5, 1, 1);

        labeldatetime = new QLabel(tab_2);
        labeldatetime->setObjectName(QString::fromUtf8("labeldatetime"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labeldatetime->sizePolicy().hasHeightForWidth());
        labeldatetime->setSizePolicy(sizePolicy2);
        labeldatetime->setScaledContents(true);

        gridLayout->addWidget(labeldatetime, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 0, 1, 1);

        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 2, 0, 1, 6);

        timeEdit = new QTimeEdit(tab_2);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        gridLayout->addWidget(timeEdit, 0, 1, 1, 3);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 3, 1, 3);

        addButton = new QPushButton(tab_2);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 0, 4, 1, 2);

        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 2);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 3);

        removebutton = new QPushButton(tab_2);
        removebutton->setObjectName(QString::fromUtf8("removebutton"));

        gridLayout->addWidget(removebutton, 3, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_30 = new QLabel(tab);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_3->addWidget(label_30, 0, 2, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 3, 1, 1);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 0, 4, 1, 1);

        lcdhours = new QLCDNumber(tab);
        lcdhours->setObjectName(QString::fromUtf8("lcdhours"));

        gridLayout_3->addWidget(lcdhours, 1, 2, 1, 1);

        lcdmin = new QLCDNumber(tab);
        lcdmin->setObjectName(QString::fromUtf8("lcdmin"));

        gridLayout_3->addWidget(lcdmin, 1, 3, 1, 1);

        lcdsecc = new QLCDNumber(tab);
        lcdsecc->setObjectName(QString::fromUtf8("lcdsecc"));

        gridLayout_3->addWidget(lcdsecc, 1, 4, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 1, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 2, 2, 1, 1);

        pushButtonalex = new QPushButton(tab);
        pushButtonalex->setObjectName(QString::fromUtf8("pushButtonalex"));

        gridLayout_3->addWidget(pushButtonalex, 2, 3, 1, 2);

        spinBox_5 = new QSpinBox(tab);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        gridLayout_3->addWidget(spinBox_5, 3, 0, 1, 1);

        spinBox = new QSpinBox(tab);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_3->addWidget(spinBox, 3, 1, 1, 1);

        spinBox_2 = new QSpinBox(tab);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        gridLayout_3->addWidget(spinBox_2, 3, 2, 1, 1);

        pushButtonalex_5 = new QPushButton(tab);
        pushButtonalex_5->setObjectName(QString::fromUtf8("pushButtonalex_5"));

        gridLayout_3->addWidget(pushButtonalex_5, 3, 3, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        hoursLabel_3 = new QLabel(tab_3);
        hoursLabel_3->setObjectName(QString::fromUtf8("hoursLabel_3"));

        gridLayout_4->addWidget(hoursLabel_3, 0, 0, 1, 1);

        minutesLabel_3 = new QLabel(tab_3);
        minutesLabel_3->setObjectName(QString::fromUtf8("minutesLabel_3"));

        gridLayout_4->addWidget(minutesLabel_3, 0, 1, 1, 1);

        secondsLabel_3 = new QLabel(tab_3);
        secondsLabel_3->setObjectName(QString::fromUtf8("secondsLabel_3"));

        gridLayout_4->addWidget(secondsLabel_3, 0, 2, 1, 1);

        hourScreen_3 = new QLCDNumber(tab_3);
        hourScreen_3->setObjectName(QString::fromUtf8("hourScreen_3"));

        gridLayout_4->addWidget(hourScreen_3, 1, 0, 1, 1);

        minuteScreen_3 = new QLCDNumber(tab_3);
        minuteScreen_3->setObjectName(QString::fromUtf8("minuteScreen_3"));

        gridLayout_4->addWidget(minuteScreen_3, 1, 1, 1, 1);

        secondScreen_3 = new QLCDNumber(tab_3);
        secondScreen_3->setObjectName(QString::fromUtf8("secondScreen_3"));

        gridLayout_4->addWidget(secondScreen_3, 1, 2, 1, 1);

        startButton_3 = new QPushButton(tab_3);
        startButton_3->setObjectName(QString::fromUtf8("startButton_3"));

        gridLayout_4->addWidget(startButton_3, 2, 0, 1, 1);

        stopButton_3 = new QPushButton(tab_3);
        stopButton_3->setObjectName(QString::fromUtf8("stopButton_3"));

        gridLayout_4->addWidget(stopButton_3, 2, 1, 1, 2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_5 = new QGridLayout(tab_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_55 = new QLabel(tab_4);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        gridLayout_5->addWidget(label_55, 0, 0, 1, 2);

        label_54 = new QLabel(tab_4);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        gridLayout_5->addWidget(label_54, 0, 3, 1, 2);

        lcdNumber_28 = new QLCDNumber(tab_4);
        lcdNumber_28->setObjectName(QString::fromUtf8("lcdNumber_28"));

        gridLayout_5->addWidget(lcdNumber_28, 1, 0, 1, 1);

        lcdNumber_31 = new QLCDNumber(tab_4);
        lcdNumber_31->setObjectName(QString::fromUtf8("lcdNumber_31"));

        gridLayout_5->addWidget(lcdNumber_31, 1, 1, 1, 1);

        lcdNumber_30 = new QLCDNumber(tab_4);
        lcdNumber_30->setObjectName(QString::fromUtf8("lcdNumber_30"));

        gridLayout_5->addWidget(lcdNumber_30, 1, 2, 1, 1);

        lcdNumber_32 = new QLCDNumber(tab_4);
        lcdNumber_32->setObjectName(QString::fromUtf8("lcdNumber_32"));
        lcdNumber_32->setAutoFillBackground(false);
        lcdNumber_32->setStyleSheet(QString::fromUtf8(""));

        gridLayout_5->addWidget(lcdNumber_32, 1, 3, 1, 1);

        lcdNumber_29 = new QLCDNumber(tab_4);
        lcdNumber_29->setObjectName(QString::fromUtf8("lcdNumber_29"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        lcdNumber_29->setPalette(palette);
        lcdNumber_29->setSmallDecimalPoint(false);

        gridLayout_5->addWidget(lcdNumber_29, 1, 4, 1, 1);

        lcdNumber_33 = new QLCDNumber(tab_4);
        lcdNumber_33->setObjectName(QString::fromUtf8("lcdNumber_33"));

        gridLayout_5->addWidget(lcdNumber_33, 1, 5, 1, 1);

        label_56 = new QLabel(tab_4);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        gridLayout_5->addWidget(label_56, 2, 0, 1, 2);

        lcdNumber_34 = new QLCDNumber(tab_4);
        lcdNumber_34->setObjectName(QString::fromUtf8("lcdNumber_34"));

        gridLayout_5->addWidget(lcdNumber_34, 3, 0, 1, 1);

        lcdNumber_36 = new QLCDNumber(tab_4);
        lcdNumber_36->setObjectName(QString::fromUtf8("lcdNumber_36"));

        gridLayout_5->addWidget(lcdNumber_36, 3, 1, 1, 1);

        lcdNumber_35 = new QLCDNumber(tab_4);
        lcdNumber_35->setObjectName(QString::fromUtf8("lcdNumber_35"));

        gridLayout_5->addWidget(lcdNumber_35, 3, 2, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_6 = new QGridLayout(tab_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        berlin = new QPushButton(tab_5);
        berlin->setObjectName(QString::fromUtf8("berlin"));

        gridLayout_6->addWidget(berlin, 0, 2, 1, 1);

        moskau = new QPushButton(tab_5);
        moskau->setObjectName(QString::fromUtf8("moskau"));

        gridLayout_6->addWidget(moskau, 2, 2, 1, 1);

        jakarta = new QPushButton(tab_5);
        jakarta->setObjectName(QString::fromUtf8("jakarta"));

        gridLayout_6->addWidget(jakarta, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_6->addItem(verticalSpacer, 4, 2, 1, 1);

        losangeles = new QPushButton(tab_5);
        losangeles->setObjectName(QString::fromUtf8("losangeles"));

        gridLayout_6->addWidget(losangeles, 1, 2, 1, 1);

        worldWeather = new QTextEdit(tab_5);
        worldWeather->setObjectName(QString::fromUtf8("worldWeather"));
        sizePolicy2.setHeightForWidth(worldWeather->sizePolicy().hasHeightForWidth());
        worldWeather->setSizePolicy(sizePolicy2);
        worldWeather->setMinimumSize(QSize(116, 106));

        gridLayout_6->addWidget(worldWeather, 0, 0, 4, 1);

        worldWeatherIcon = new QLabel(tab_5);
        worldWeatherIcon->setObjectName(QString::fromUtf8("worldWeatherIcon"));
        worldWeatherIcon->setMinimumSize(QSize(115, 106));

        gridLayout_6->addWidget(worldWeatherIcon, 0, 1, 4, 1);

        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);

        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        sizePolicy.setHeightForWidth(calendarWidget->sizePolicy().hasHeightForWidth());
        calendarWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(calendarWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 399, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        iconLabel->setText(QCoreApplication::translate("MainWindow", "iconLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Wetter), QCoreApplication::translate("MainWindow", "Wetter", nullptr));
        testAlarmBtn->setText(QCoreApplication::translate("MainWindow", "Alarm testen", nullptr));
        labeldatetime->setText(QCoreApplication::translate("MainWindow", "Date and Time", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Alarm einschalten", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Alarm ist darzeit deaktiviert", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Hinzuf\303\274gen", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Schlummer ausschalten", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Schlummer testen", nullptr));
        removebutton->setText(QCoreApplication::translate("MainWindow", "Entfernen", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Alarm", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Hours:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Minutes:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Seconds:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Hours:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Minutes:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Seconds:", nullptr));
        pushButtonalex->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        pushButtonalex_5->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Timer", nullptr));
        hoursLabel_3->setText(QCoreApplication::translate("MainWindow", "Hours", nullptr));
        minutesLabel_3->setText(QCoreApplication::translate("MainWindow", "Minutes", nullptr));
        secondsLabel_3->setText(QCoreApplication::translate("MainWindow", "Seconds", nullptr));
        startButton_3->setText(QCoreApplication::translate("MainWindow", "start/pause", nullptr));
        stopButton_3->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Stoppuhr", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "Berlin", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "Los Angeles", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "Moskau", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Weltuhr", nullptr));
        berlin->setText(QCoreApplication::translate("MainWindow", "Berlin", nullptr));
        moskau->setText(QCoreApplication::translate("MainWindow", "Moskau", nullptr));
        jakarta->setText(QCoreApplication::translate("MainWindow", "Jakarta", nullptr));
        losangeles->setText(QCoreApplication::translate("MainWindow", "Los Angeles", nullptr));
        worldWeatherIcon->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Wetter der Welt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
