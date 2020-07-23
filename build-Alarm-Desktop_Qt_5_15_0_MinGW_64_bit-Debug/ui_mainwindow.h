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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QTextEdit *wetterText;
    QLabel *label_2;
    QLabel *iconLabel;
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
    QCalendarWidget *calendarWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(382, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(382, 600));
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
        Wetter = new QWidget();
        Wetter->setObjectName(QString::fromUtf8("Wetter"));
        gridLayout_2 = new QGridLayout(Wetter);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        wetterText = new QTextEdit(Wetter);
        wetterText->setObjectName(QString::fromUtf8("wetterText"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wetterText->sizePolicy().hasHeightForWidth());
        wetterText->setSizePolicy(sizePolicy1);
        wetterText->setMinimumSize(QSize(256, 102));
        wetterText->setContextMenuPolicy(Qt::CustomContextMenu);
        wetterText->setAutoFillBackground(true);
        wetterText->setStyleSheet(QString::fromUtf8("background-color: rgb();"));
        wetterText->setFrameShape(QFrame::NoFrame);
        wetterText->setReadOnly(true);

        gridLayout_2->addWidget(wetterText, 1, 0, 1, 1);

        label_2 = new QLabel(Wetter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 2);

        iconLabel = new QLabel(Wetter);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        sizePolicy1.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy1);
        iconLabel->setStyleSheet(QString::fromUtf8("background-color: rgb();"));
        iconLabel->setScaledContents(true);
        iconLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(iconLabel, 1, 1, 1, 1);

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

        verticalLayout->addWidget(tabWidget);

        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        sizePolicy.setHeightForWidth(calendarWidget->sizePolicy().hasHeightForWidth());
        calendarWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(calendarWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 382, 21));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
