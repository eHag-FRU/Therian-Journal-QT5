#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_aboutTherianJournal_triggered();

    void on_exitTherianJournal_triggered();

    void on_actionAdd_Entry_triggered();

private:
    Ui::MainWindow *ui;

    //The vector to hold the current layout of the journal entries, TEMP
    //QVector<addJournalEntry*> entries;
};
#endif // MAINWINDOW_H
