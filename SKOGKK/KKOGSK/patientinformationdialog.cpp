#include "patientinformationdialog.h"
#include "ui_patientinformationdialog.h"

patientInformationDialog::patientInformationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patientInformationDialog)
{
    ui->setupUi(this);
}

patientInformationDialog::~patientInformationDialog()
{
    delete ui;
}

void patientInformationDialog::presetPatientInformationPic()
{
    QPixmap pix("D:/Bachelor/wt-4.2.0/SKOGKK/KKOGSK/Assets/Pictures/Glad_fjes.GIF");
    ui->label->setPixmap(pix);
    ui->label->setScaledContents(true);
    ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void patientInformationDialog::on_pushButton_clicked()
{
    close();
}
