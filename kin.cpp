#include "kin.h"
#include "ui_kin.h"

Kin::Kin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kin)
{
    ui->setupUi(this);
}

Kin::~Kin()
{
    delete ui;
}

void Kin::on_kinConfirmDenyBox_accepted()
{

}


void Kin::on_kinConfirmDenyBox_rejected()
{

}


void Kin::on_DescriptionTextBox_textChanged()
{

}


void Kin::on_kinNameTextBox_textChanged(const QString &arg1)
{

}


void Kin::on_SpeciesTextBox_textChanged(const QString &arg1)
{

}


void Kin::on_GenderTextBox_textChanged(const QString &arg1)
{

}

