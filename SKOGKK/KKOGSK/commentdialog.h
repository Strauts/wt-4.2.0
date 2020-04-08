#ifndef COMMENTDIALOG_H
#define COMMENTDIALOG_H

#include <QDialog>

namespace Ui {
class commentDialog;
}

class commentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit commentDialog(QWidget *parent = nullptr);
    ~commentDialog();

private:
    Ui::commentDialog *ui;
};

#endif // COMMENTDIALOG_H
