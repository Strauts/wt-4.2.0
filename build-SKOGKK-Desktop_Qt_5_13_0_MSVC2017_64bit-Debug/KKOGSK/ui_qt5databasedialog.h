/********************************************************************************
** Form generated from reading UI file 'qt5databasedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT5DATABASEDIALOG_H
#define UI_QT5DATABASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_qt5DatabaseDialog
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *qt5DatabaseDialog)
    {
        if (qt5DatabaseDialog->objectName().isEmpty())
            qt5DatabaseDialog->setObjectName(QString::fromUtf8("qt5DatabaseDialog"));
        qt5DatabaseDialog->resize(490, 687);
        pushButton = new QPushButton(qt5DatabaseDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 90, 171, 51));

        retranslateUi(qt5DatabaseDialog);

        QMetaObject::connectSlotsByName(qt5DatabaseDialog);
    } // setupUi

    void retranslateUi(QDialog *qt5DatabaseDialog)
    {
        qt5DatabaseDialog->setWindowTitle(QCoreApplication::translate("qt5DatabaseDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("qt5DatabaseDialog", "Database Connection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qt5DatabaseDialog: public Ui_qt5DatabaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT5DATABASEDIALOG_H
