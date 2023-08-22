#include "entryedit.h"
#include "ui_entryedit.h"

#include <QDebug>

EntryEdit::EntryEdit(QWidget *parent, JournalEntry* newEntry) :
    QDialog(parent),
    ui(new Ui::EntryEdit)
{
    ui->setupUi(this);

    entry = newEntry;
}

EntryEdit::~EntryEdit()
{
    delete ui;
}

void EntryEdit::on_entryAdd_accepted()
{
    qDebug() << "Journal entry was accepted";

    entry->setKin(ui->kinChoice->currentText());


    //Hide and close widget
    this->close();


}


void EntryEdit::on_entryAdd_rejected()
{
    qDebug() << "Closing and canceling the entry";

    this->close();
}

