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

        ui->kinAssociation->setText(newKin);
    }
}

void JournalEntry::setDate(QDate newDate) {
    if (newDate != date) {
        date = newDate;
    }
}

QDate JournalEntry::getDate() {
    return date;
}

void JournalEntry::setTitle(QString newTitle) {
    if (!newTitle.isEmpty() && newTitle != title) {
        title = newTitle;
    }
}

QString JournalEntry::getTitle() {
    return title;
}
