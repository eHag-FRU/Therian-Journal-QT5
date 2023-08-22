#ifndef ENTRYEDIT_H
#define ENTRYEDIT_H

#include <QDialog>

//#include <QSqlDatabase>

#include "journalentry.h"

namespace Ui {
class EntryEdit;
}

class EntryEdit : public QDialog
{
    Q_OBJECT

public:
    explicit EntryEdit(QWidget *parent = nullptr, JournalEntry* newEntry = nullptr);
    ~EntryEdit();

private slots:
    void on_entryAdd_accepted();

    void on_entryAdd_rejected();

private:
    Ui::EntryEdit *ui;

    JournalEntry* entry = new JournalEntry();

    //QSqlDatabase* test = new QSqlDatabse();

};

#endif // ENTRYEDIT_H
