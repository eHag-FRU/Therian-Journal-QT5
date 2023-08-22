#ifndef JOURNALENTRY_H
#define JOURNALENTRY_H

#include <QWidget>


namespace Ui {
class JournalEntry;
}

class JournalEntry : public QWidget
{
    Q_OBJECT

public:
    explicit JournalEntry(QWidget *parent = nullptr);
    ~JournalEntry();

    QString getKin();
    void setKin(QString newKin);

private:
    Ui::JournalEntry *ui;

    QString kin;
};

#endif // JOURNALENTRY_H
