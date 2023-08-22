#include "journalentry.h"
#include "ui_journalentry.h"

JournalEntry::JournalEntry(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JournalEntry)
{
    ui->setupUi(this);
}

JournalEntry::~JournalEntry()
{
    delete ui;
}

QString JournalEntry::getKin() {
    return kin;
}

void JournalEntry::setKin(QString newKin) {
    if (!newKin.isEmpty()) {
        kin = newKin;
    }
}
