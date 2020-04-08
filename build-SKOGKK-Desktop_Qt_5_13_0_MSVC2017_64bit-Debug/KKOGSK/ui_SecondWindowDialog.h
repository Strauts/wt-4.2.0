/********************************************************************************
** Form generated from reading UI file 'secondwindowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOWDIALOG_H
#define UI_SECONDWINDOWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecondWindowDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SecondWindowDialog)
    {
        if (SecondWindowDialog->objectName().isEmpty())
            SecondWindowDialog->setObjectName(QString::fromUtf8("SecondWindowDialog"));
        SecondWindowDialog->resize(490, 687);
        gridLayout = new QGridLayout(SecondWindowDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(SecondWindowDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        pushButton = new QPushButton(SecondWindowDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        pushButton_2 = new QPushButton(SecondWindowDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);


        retranslateUi(SecondWindowDialog);

        QMetaObject::connectSlotsByName(SecondWindowDialog);
    } // setupUi

    void retranslateUi(QDialog *SecondWindowDialog)
    {
        SecondWindowDialog->setWindowTitle(QCoreApplication::translate("SecondWindowDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SecondWindowDialog", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("SecondWindowDialog", "Angi svar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SecondWindowDialog", "G\303\245 tilbake", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindowDialog: public Ui_SecondWindowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOWDIALOG_H
