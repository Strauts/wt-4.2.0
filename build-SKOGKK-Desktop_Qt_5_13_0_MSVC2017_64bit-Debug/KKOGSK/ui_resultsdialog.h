/********************************************************************************
** Form generated from reading UI file 'resultsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTSDIALOG_H
#define UI_RESULTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_resultsDialog
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_Spm_Title;
    QLabel *label_Answer_Title;
    QLabel *label_Fasit_Title;
    QLabel *label_Comment_Title;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_Fasit_5;
    QTextEdit *textEdit_Question_5;
    QTextEdit *textEdit_Answer_6;
    QTextEdit *textEdit_Fasit_8;
    QTextEdit *textEdit_Fasit_10;
    QTextEdit *textEdit_Question_1;
    QTextEdit *textEdit_Fasit_6;
    QTextEdit *textEdit_Fasit_7;
    QTextEdit *textEdit_Answer_3;
    QTextEdit *textEdit_Question_9;
    QTextEdit *textEdit_Question_2;
    QTextEdit *textEdit_Question_10;
    QTextEdit *textEdit_Answer_8;
    QTextEdit *textEdit_Fasit_3;
    QTextEdit *textEdit_Question_7;
    QTextEdit *textEdit_Question_6;
    QTextEdit *textEdit_Question_3;
    QTextEdit *textEdit_Answer_4;
    QTextEdit *textEdit_Question_8;
    QTextEdit *textEdit_Fasit_4;
    QTextEdit *textEdit_Answer_10;
    QTextEdit *textEdit_Fasit_1;
    QTextEdit *textEdit_Answer_7;
    QTextEdit *textEdit_Answer_2;
    QTextEdit *textEdit_Question_4;
    QTextEdit *textEdit_Answer_5;
    QTextEdit *textEdit_Answer_9;
    QTextEdit *textEdit_Fasit_2;
    QTextEdit *textEdit_Fasit_9;
    QTextEdit *textEdit_Answer_1;
    QPushButton *pushButto_Comment_1;
    QPushButton *pushButton_Comment_2;
    QPushButton *pushButton_Comment_3;
    QPushButton *pushButton_Comment_4;
    QPushButton *pushButton_Comment_5;
    QPushButton *pushButton_Comment_6;
    QPushButton *pushButton_Comment_7;
    QPushButton *pushButton_Comment_8;
    QPushButton *pushButton_Comment_9;
    QPushButton *pushButton_Comment_10;
    QPushButton *pushButton;

    void setupUi(QDialog *resultsDialog)
    {
        if (resultsDialog->objectName().isEmpty())
            resultsDialog->setObjectName(QString::fromUtf8("resultsDialog"));
        resultsDialog->resize(490, 687);
        label = new QLabel(resultsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 0, 211, 61));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        groupBox = new QGroupBox(resultsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 60, 481, 81));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_Spm_Title = new QLabel(groupBox);
        label_Spm_Title->setObjectName(QString::fromUtf8("label_Spm_Title"));
        QFont font1;
        font1.setPointSize(14);
        label_Spm_Title->setFont(font1);

        gridLayout->addWidget(label_Spm_Title, 0, 0, 1, 1);

        label_Answer_Title = new QLabel(groupBox);
        label_Answer_Title->setObjectName(QString::fromUtf8("label_Answer_Title"));
        label_Answer_Title->setFont(font1);

        gridLayout->addWidget(label_Answer_Title, 0, 1, 1, 1);

        label_Fasit_Title = new QLabel(groupBox);
        label_Fasit_Title->setObjectName(QString::fromUtf8("label_Fasit_Title"));
        label_Fasit_Title->setFont(font1);

        gridLayout->addWidget(label_Fasit_Title, 0, 2, 1, 1);

        label_Comment_Title = new QLabel(groupBox);
        label_Comment_Title->setObjectName(QString::fromUtf8("label_Comment_Title"));
        label_Comment_Title->setFont(font1);

        gridLayout->addWidget(label_Comment_Title, 0, 3, 1, 1);

        groupBox_2 = new QGroupBox(resultsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 140, 481, 551));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdit_Fasit_5 = new QTextEdit(groupBox_2);
        textEdit_Fasit_5->setObjectName(QString::fromUtf8("textEdit_Fasit_5"));

        gridLayout_2->addWidget(textEdit_Fasit_5, 4, 2, 1, 1);

        textEdit_Question_5 = new QTextEdit(groupBox_2);
        textEdit_Question_5->setObjectName(QString::fromUtf8("textEdit_Question_5"));

        gridLayout_2->addWidget(textEdit_Question_5, 4, 0, 1, 1);

        textEdit_Answer_6 = new QTextEdit(groupBox_2);
        textEdit_Answer_6->setObjectName(QString::fromUtf8("textEdit_Answer_6"));

        gridLayout_2->addWidget(textEdit_Answer_6, 5, 1, 1, 1);

        textEdit_Fasit_8 = new QTextEdit(groupBox_2);
        textEdit_Fasit_8->setObjectName(QString::fromUtf8("textEdit_Fasit_8"));

        gridLayout_2->addWidget(textEdit_Fasit_8, 7, 2, 1, 1);

        textEdit_Fasit_10 = new QTextEdit(groupBox_2);
        textEdit_Fasit_10->setObjectName(QString::fromUtf8("textEdit_Fasit_10"));

        gridLayout_2->addWidget(textEdit_Fasit_10, 9, 2, 1, 1);

        textEdit_Question_1 = new QTextEdit(groupBox_2);
        textEdit_Question_1->setObjectName(QString::fromUtf8("textEdit_Question_1"));

        gridLayout_2->addWidget(textEdit_Question_1, 0, 0, 1, 1);

        textEdit_Fasit_6 = new QTextEdit(groupBox_2);
        textEdit_Fasit_6->setObjectName(QString::fromUtf8("textEdit_Fasit_6"));

        gridLayout_2->addWidget(textEdit_Fasit_6, 5, 2, 1, 1);

        textEdit_Fasit_7 = new QTextEdit(groupBox_2);
        textEdit_Fasit_7->setObjectName(QString::fromUtf8("textEdit_Fasit_7"));

        gridLayout_2->addWidget(textEdit_Fasit_7, 6, 2, 1, 1);

        textEdit_Answer_3 = new QTextEdit(groupBox_2);
        textEdit_Answer_3->setObjectName(QString::fromUtf8("textEdit_Answer_3"));

        gridLayout_2->addWidget(textEdit_Answer_3, 2, 1, 1, 1);

        textEdit_Question_9 = new QTextEdit(groupBox_2);
        textEdit_Question_9->setObjectName(QString::fromUtf8("textEdit_Question_9"));

        gridLayout_2->addWidget(textEdit_Question_9, 8, 0, 1, 1);

        textEdit_Question_2 = new QTextEdit(groupBox_2);
        textEdit_Question_2->setObjectName(QString::fromUtf8("textEdit_Question_2"));

        gridLayout_2->addWidget(textEdit_Question_2, 1, 0, 1, 1);

        textEdit_Question_10 = new QTextEdit(groupBox_2);
        textEdit_Question_10->setObjectName(QString::fromUtf8("textEdit_Question_10"));

        gridLayout_2->addWidget(textEdit_Question_10, 9, 0, 1, 1);

        textEdit_Answer_8 = new QTextEdit(groupBox_2);
        textEdit_Answer_8->setObjectName(QString::fromUtf8("textEdit_Answer_8"));

        gridLayout_2->addWidget(textEdit_Answer_8, 7, 1, 1, 1);

        textEdit_Fasit_3 = new QTextEdit(groupBox_2);
        textEdit_Fasit_3->setObjectName(QString::fromUtf8("textEdit_Fasit_3"));

        gridLayout_2->addWidget(textEdit_Fasit_3, 2, 2, 1, 1);

        textEdit_Question_7 = new QTextEdit(groupBox_2);
        textEdit_Question_7->setObjectName(QString::fromUtf8("textEdit_Question_7"));

        gridLayout_2->addWidget(textEdit_Question_7, 6, 0, 1, 1);

        textEdit_Question_6 = new QTextEdit(groupBox_2);
        textEdit_Question_6->setObjectName(QString::fromUtf8("textEdit_Question_6"));

        gridLayout_2->addWidget(textEdit_Question_6, 5, 0, 1, 1);

        textEdit_Question_3 = new QTextEdit(groupBox_2);
        textEdit_Question_3->setObjectName(QString::fromUtf8("textEdit_Question_3"));

        gridLayout_2->addWidget(textEdit_Question_3, 2, 0, 1, 1);

        textEdit_Answer_4 = new QTextEdit(groupBox_2);
        textEdit_Answer_4->setObjectName(QString::fromUtf8("textEdit_Answer_4"));

        gridLayout_2->addWidget(textEdit_Answer_4, 3, 1, 1, 1);

        textEdit_Question_8 = new QTextEdit(groupBox_2);
        textEdit_Question_8->setObjectName(QString::fromUtf8("textEdit_Question_8"));

        gridLayout_2->addWidget(textEdit_Question_8, 7, 0, 1, 1);

        textEdit_Fasit_4 = new QTextEdit(groupBox_2);
        textEdit_Fasit_4->setObjectName(QString::fromUtf8("textEdit_Fasit_4"));

        gridLayout_2->addWidget(textEdit_Fasit_4, 3, 2, 1, 1);

        textEdit_Answer_10 = new QTextEdit(groupBox_2);
        textEdit_Answer_10->setObjectName(QString::fromUtf8("textEdit_Answer_10"));

        gridLayout_2->addWidget(textEdit_Answer_10, 9, 1, 1, 1);

        textEdit_Fasit_1 = new QTextEdit(groupBox_2);
        textEdit_Fasit_1->setObjectName(QString::fromUtf8("textEdit_Fasit_1"));

        gridLayout_2->addWidget(textEdit_Fasit_1, 0, 2, 1, 1);

        textEdit_Answer_7 = new QTextEdit(groupBox_2);
        textEdit_Answer_7->setObjectName(QString::fromUtf8("textEdit_Answer_7"));

        gridLayout_2->addWidget(textEdit_Answer_7, 6, 1, 1, 1);

        textEdit_Answer_2 = new QTextEdit(groupBox_2);
        textEdit_Answer_2->setObjectName(QString::fromUtf8("textEdit_Answer_2"));

        gridLayout_2->addWidget(textEdit_Answer_2, 1, 1, 1, 1);

        textEdit_Question_4 = new QTextEdit(groupBox_2);
        textEdit_Question_4->setObjectName(QString::fromUtf8("textEdit_Question_4"));

        gridLayout_2->addWidget(textEdit_Question_4, 3, 0, 1, 1);

        textEdit_Answer_5 = new QTextEdit(groupBox_2);
        textEdit_Answer_5->setObjectName(QString::fromUtf8("textEdit_Answer_5"));

        gridLayout_2->addWidget(textEdit_Answer_5, 4, 1, 1, 1);

        textEdit_Answer_9 = new QTextEdit(groupBox_2);
        textEdit_Answer_9->setObjectName(QString::fromUtf8("textEdit_Answer_9"));

        gridLayout_2->addWidget(textEdit_Answer_9, 8, 1, 1, 1);

        textEdit_Fasit_2 = new QTextEdit(groupBox_2);
        textEdit_Fasit_2->setObjectName(QString::fromUtf8("textEdit_Fasit_2"));

        gridLayout_2->addWidget(textEdit_Fasit_2, 1, 2, 1, 1);

        textEdit_Fasit_9 = new QTextEdit(groupBox_2);
        textEdit_Fasit_9->setObjectName(QString::fromUtf8("textEdit_Fasit_9"));

        gridLayout_2->addWidget(textEdit_Fasit_9, 8, 2, 1, 1);

        textEdit_Answer_1 = new QTextEdit(groupBox_2);
        textEdit_Answer_1->setObjectName(QString::fromUtf8("textEdit_Answer_1"));

        gridLayout_2->addWidget(textEdit_Answer_1, 0, 1, 1, 1);

        pushButto_Comment_1 = new QPushButton(groupBox_2);
        pushButto_Comment_1->setObjectName(QString::fromUtf8("pushButto_Comment_1"));

        gridLayout_2->addWidget(pushButto_Comment_1, 0, 3, 1, 1);

        pushButton_Comment_2 = new QPushButton(groupBox_2);
        pushButton_Comment_2->setObjectName(QString::fromUtf8("pushButton_Comment_2"));

        gridLayout_2->addWidget(pushButton_Comment_2, 1, 3, 1, 1);

        pushButton_Comment_3 = new QPushButton(groupBox_2);
        pushButton_Comment_3->setObjectName(QString::fromUtf8("pushButton_Comment_3"));

        gridLayout_2->addWidget(pushButton_Comment_3, 2, 3, 1, 1);

        pushButton_Comment_4 = new QPushButton(groupBox_2);
        pushButton_Comment_4->setObjectName(QString::fromUtf8("pushButton_Comment_4"));

        gridLayout_2->addWidget(pushButton_Comment_4, 3, 3, 1, 1);

        pushButton_Comment_5 = new QPushButton(groupBox_2);
        pushButton_Comment_5->setObjectName(QString::fromUtf8("pushButton_Comment_5"));

        gridLayout_2->addWidget(pushButton_Comment_5, 4, 3, 1, 1);

        pushButton_Comment_6 = new QPushButton(groupBox_2);
        pushButton_Comment_6->setObjectName(QString::fromUtf8("pushButton_Comment_6"));

        gridLayout_2->addWidget(pushButton_Comment_6, 5, 3, 1, 1);

        pushButton_Comment_7 = new QPushButton(groupBox_2);
        pushButton_Comment_7->setObjectName(QString::fromUtf8("pushButton_Comment_7"));

        gridLayout_2->addWidget(pushButton_Comment_7, 6, 3, 1, 1);

        pushButton_Comment_8 = new QPushButton(groupBox_2);
        pushButton_Comment_8->setObjectName(QString::fromUtf8("pushButton_Comment_8"));

        gridLayout_2->addWidget(pushButton_Comment_8, 7, 3, 1, 1);

        pushButton_Comment_9 = new QPushButton(groupBox_2);
        pushButton_Comment_9->setObjectName(QString::fromUtf8("pushButton_Comment_9"));

        gridLayout_2->addWidget(pushButton_Comment_9, 8, 3, 1, 1);

        pushButton_Comment_10 = new QPushButton(groupBox_2);
        pushButton_Comment_10->setObjectName(QString::fromUtf8("pushButton_Comment_10"));

        gridLayout_2->addWidget(pushButton_Comment_10, 9, 3, 1, 1);

        pushButton = new QPushButton(resultsDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 80, 21));

        retranslateUi(resultsDialog);

        QMetaObject::connectSlotsByName(resultsDialog);
    } // setupUi

    void retranslateUi(QDialog *resultsDialog)
    {
        resultsDialog->setWindowTitle(QCoreApplication::translate("resultsDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("resultsDialog", "      Resultater", nullptr));
        groupBox->setTitle(QString());
        label_Spm_Title->setText(QCoreApplication::translate("resultsDialog", "   Sp\303\270rsm\303\245l", nullptr));
        label_Answer_Title->setText(QCoreApplication::translate("resultsDialog", "       Svar", nullptr));
        label_Fasit_Title->setText(QCoreApplication::translate("resultsDialog", "       Fasit", nullptr));
        label_Comment_Title->setText(QCoreApplication::translate("resultsDialog", "Kommentar", nullptr));
        groupBox_2->setTitle(QString());
        textEdit_Question_5->setHtml(QCoreApplication::translate("resultsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     5</span></p></body></html>", nullptr));
        textEdit_Question_1->setHtml(QCoreApplication::translate("resultsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     1</span></p></body></html>", nullptr));
        textEdit_Question_9->setHtml(QCoreApplication::translate("resultsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     9</span></p></body></html>", nullptr));
        textEdit_Question_2->setHtml(QCoreApplication::translate("resultsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     2</span></p></body></html>", nullptr));
        textEdit_Question_10->setHtml(QCoreApplication::translate("resultsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">    10</span></p></body></html>", nullptr));
        textEdit_Question_7->setHtml(QCoreApplication::translate("resultsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     7</span></p></body></html>", nullptr));
        textEdit_Question_6->setHtml(QCoreApplication::translate("resultsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     6</span></p></body></html>", nullptr));
        textEdit_Question_3->setHtml(QCoreApplication::translate("resultsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     3</span></p></body></html>", nullptr));
        textEdit_Question_8->setHtml(QCoreApplication::translate("resultsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     8</span></p></body></html>", nullptr));
        textEdit_Question_4->setHtml(QCoreApplication::translate("resultsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     4</span></p></body></html>", nullptr));
        pushButto_Comment_1->setText(QCoreApplication::translate("resultsDialog", "\303\205pne", nullptr));
        pushButton_Comment_2->setText(QCoreApplication::translate("resultsDialog", "\303\205pne", nullptr));
        pushButton_Comment_3->setText(QCoreApplication::translate("resultsDialog", "\303\205pne", nullptr));
        pushButton_Comment_4->setText(QCoreApplication::translate("resultsDialog", "\303\205pne", nullptr));
        pushButton_Comment_5->setText(QCoreApplication::translate("resultsDialog", "\303\205pne", nullptr));
        pushButton_Comment_6->setText(QCoreApplication::translate("resultsDialog", "\303\205pne", nullptr));
        pushButton_Comment_7->setText(QCoreApplication::translate("resultsDialog", "\303\205pne", nullptr));
        pushButton_Comment_8->setText(QCoreApplication::translate("resultsDialog", "\303\205pne", nullptr));
        pushButton_Comment_9->setText(QCoreApplication::translate("resultsDialog", "\303\205pne", nullptr));
        pushButton_Comment_10->setText(QCoreApplication::translate("resultsDialog", "\303\205pne", nullptr));
        pushButton->setText(QCoreApplication::translate("resultsDialog", "G\303\245 tilbake", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultsDialog: public Ui_resultsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTSDIALOG_H
