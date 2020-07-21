/********************************************************************************
** Form generated from reading UI file 'snooze.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNOOZE_H
#define UI_SNOOZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Snooze
{
public:
    QLabel *label;
    QPushButton *snoozebtn;
    QPushButton *dismissbtn;

    void setupUi(QDialog *Snooze)
    {
        if (Snooze->objectName().isEmpty())
            Snooze->setObjectName(QString::fromUtf8("Snooze"));
        Snooze->resize(400, 300);
        label = new QLabel(Snooze);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 40, 181, 41));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        snoozebtn = new QPushButton(Snooze);
        snoozebtn->setObjectName(QString::fromUtf8("snoozebtn"));
        snoozebtn->setGeometry(QRect(160, 140, 75, 23));
        dismissbtn = new QPushButton(Snooze);
        dismissbtn->setObjectName(QString::fromUtf8("dismissbtn"));
        dismissbtn->setGeometry(QRect(160, 180, 75, 23));

        retranslateUi(Snooze);

        QMetaObject::connectSlotsByName(Snooze);
    } // setupUi

    void retranslateUi(QDialog *Snooze)
    {
        Snooze->setWindowTitle(QCoreApplication::translate("Snooze", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Snooze", "00:00:00", nullptr));
        snoozebtn->setText(QCoreApplication::translate("Snooze", "Snooze", nullptr));
        dismissbtn->setText(QCoreApplication::translate("Snooze", "Dismiss", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Snooze: public Ui_Snooze {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNOOZE_H
