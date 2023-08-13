#include "about.h"
#include "ui_about.h"

//Added includes
#include <QLabel>

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);

    this->setWindowTitle("About Therian Journal");
}

About::~About()
{
    delete ui;
}

void About::on_aboutCloseButton_clicked()
{
    //Hide the window before destruction
    this->hide();

    delete this;

}

