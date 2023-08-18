#include "addjournalentry.h"
#include "ui_addjournalentry.h"

//Added include statements
#include <QDebug>

addJournalEntry::addJournalEntry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addJournalEntry)
{
    ui->setupUi(this);

    this->setWindowTitle("Add journal Entry");
}

addJournalEntry::~addJournalEntry()
{
    delete ui;
}

void addJournalEntry::on_buttons_accepted()
{
    qDebug() << "The journal entry was accepted!";

}


void addJournalEntry::on_buttons_rejected()
{
    qDebug() << "The journal entry has been rejected!";
}

