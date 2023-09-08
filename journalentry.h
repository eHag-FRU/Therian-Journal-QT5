#ifndef JOURNALENTRY_H
#define JOURNALENTRY_H

#include <QWidget>
#include <QDate>
#include <QtSql>

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
    void setKin(QString newKin=nullptr);

    QString getTitle();
    void setTitle(QString newTitle=nullptr);

    QDate getDate();
    void setDate(QDate newDate);

private:
    Ui::JournalEntry *ui;

    QString kin;
    QString title;
    QDate date;
    QSqlDatabase database;
};

#endif // JOURNALENTRY_H
