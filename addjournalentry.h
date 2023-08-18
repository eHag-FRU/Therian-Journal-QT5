#ifndef ADDJOURNALENTRY_H
#define ADDJOURNALENTRY_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class addJournalEntry;
}

class addJournalEntry : public QDialog
{
    Q_OBJECT

public:
    explicit addJournalEntry(QWidget *parent = nullptr);
    ~addJournalEntry();

private slots:
    void on_buttons_accepted();

    void on_buttons_rejected();

private:
    Ui::addJournalEntry *ui;
};

#endif // ADDJOURNALENTRY_H
