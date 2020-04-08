/********************************************************************************
** Form generated from reading UI file 'questiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONDIALOG_H
#define UI_QUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QuestionDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *QuestionDialog)
    {
        if (QuestionDialog->objectName().isEmpty())
            QuestionDialog->setObjectName(QString::fromUtf8("QuestionDialog"));
        QuestionDialog->resize(490, 687);
        gridLayout = new QGridLayout(QuestionDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(QuestionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(QuestionDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        pushButton = new QPushButton(QuestionDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(QuestionDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(QuestionDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 4, 1, 1, 1);

        label_2 = new QLabel(QuestionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_1 = new QLabel(QuestionDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        gridLayout->addWidget(label_1, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(QuestionDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 4, 0, 1, 1);

        pushButton_5 = new QPushButton(QuestionDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(QuestionDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 0, 0, 1, 1);


        retranslateUi(QuestionDialog);

        QMetaObject::connectSlotsByName(QuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *QuestionDialog)
    {
        QuestionDialog->setWindowTitle(QCoreApplication::translate("QuestionDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("QuestionDialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("QuestionDialog", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("QuestionDialog", "A", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QuestionDialog", "B", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QuestionDialog", "D", nullptr));
        label_2->setText(QCoreApplication::translate("QuestionDialog", "TextLabel", nullptr));
        label_1->setText(QCoreApplication::translate("QuestionDialog", "TextLabel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QuestionDialog", "C", nullptr));
        pushButton_5->setText(QCoreApplication::translate("QuestionDialog", "Neste Sp\303\270rsm\303\245l", nullptr));
        pushButton_6->setText(QCoreApplication::translate("QuestionDialog", "Avslutt test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionDialog: public Ui_QuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONDIALOG_H
