/********************************************************************************
** Form generated from reading UI file 'workerprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKERPROFILEDIALOG_H
#define UI_WORKERPROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_workerProfileDialog
{
public:
    QLabel *label_name;
    QGroupBox *groupBox;
    QPushButton *pushButton_Calender_Profile_2;
    QPushButton *pushButton_Tasks_2;
    QPushButton *pushButton_Results_Profile_2;
    QPushButton *pushButton_Avatar_Profile_2;
    QPushButton *pushButton_Settings_Profile_2;
    QPushButton *pushButton_2;
    QLabel *label_profilePicture;
    QPushButton *pushButton;

    void setupUi(QDialog *workerProfileDialog)
    {
        if (workerProfileDialog->objectName().isEmpty())
            workerProfileDialog->setObjectName(QString::fromUtf8("workerProfileDialog"));
        workerProfileDialog->resize(490, 687);
        label_name = new QLabel(workerProfileDialog);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(190, 20, 131, 41));
        QFont font;
        font.setPointSize(16);
        label_name->setFont(font);
        groupBox = new QGroupBox(workerProfileDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 230, 491, 481));
        pushButton_Calender_Profile_2 = new QPushButton(groupBox);
        pushButton_Calender_Profile_2->setObjectName(QString::fromUtf8("pushButton_Calender_Profile_2"));
        pushButton_Calender_Profile_2->setGeometry(QRect(120, 40, 241, 41));
        pushButton_Tasks_2 = new QPushButton(groupBox);
        pushButton_Tasks_2->setObjectName(QString::fromUtf8("pushButton_Tasks_2"));
        pushButton_Tasks_2->setGeometry(QRect(120, 90, 241, 41));
        pushButton_Results_Profile_2 = new QPushButton(groupBox);
        pushButton_Results_Profile_2->setObjectName(QString::fromUtf8("pushButton_Results_Profile_2"));
        pushButton_Results_Profile_2->setGeometry(QRect(120, 190, 241, 41));
        pushButton_Avatar_Profile_2 = new QPushButton(groupBox);
        pushButton_Avatar_Profile_2->setObjectName(QString::fromUtf8("pushButton_Avatar_Profile_2"));
        pushButton_Avatar_Profile_2->setGeometry(QRect(120, 240, 241, 41));
        pushButton_Settings_Profile_2 = new QPushButton(groupBox);
        pushButton_Settings_Profile_2->setObjectName(QString::fromUtf8("pushButton_Settings_Profile_2"));
        pushButton_Settings_Profile_2->setGeometry(QRect(120, 290, 241, 41));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 140, 241, 41));
        label_profilePicture = new QLabel(workerProfileDialog);
        label_profilePicture->setObjectName(QString::fromUtf8("label_profilePicture"));
        label_profilePicture->setGeometry(QRect(160, 80, 131, 131));
        pushButton = new QPushButton(workerProfileDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 80, 21));

        retranslateUi(workerProfileDialog);

        QMetaObject::connectSlotsByName(workerProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *workerProfileDialog)
    {
        workerProfileDialog->setWindowTitle(QCoreApplication::translate("workerProfileDialog", "Dialog", nullptr));
        label_name->setText(QCoreApplication::translate("workerProfileDialog", "Ola Berg", nullptr));
        groupBox->setTitle(QString());
        pushButton_Calender_Profile_2->setText(QCoreApplication::translate("workerProfileDialog", "Kalender", nullptr));
        pushButton_Tasks_2->setText(QCoreApplication::translate("workerProfileDialog", "Gj\303\270rem\303\245l", nullptr));
        pushButton_Results_Profile_2->setText(QCoreApplication::translate("workerProfileDialog", "Resultater", nullptr));
        pushButton_Avatar_Profile_2->setText(QCoreApplication::translate("workerProfileDialog", "Avatar", nullptr));
        pushButton_Settings_Profile_2->setText(QCoreApplication::translate("workerProfileDialog", "Innstillinger", nullptr));
        pushButton_2->setText(QCoreApplication::translate("workerProfileDialog", "Brukerliste", nullptr));
        label_profilePicture->setText(QCoreApplication::translate("workerProfileDialog", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("workerProfileDialog", "G\303\245 tilbake", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workerProfileDialog: public Ui_workerProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERPROFILEDIALOG_H
