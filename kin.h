#ifndef KIN_H
#define KIN_H

#include <QDialog>

namespace Ui {
class Kin;
}

class Kin : public QDialog
{
    Q_OBJECT

public:
    explicit Kin(QWidget *parent = nullptr);
    ~Kin();

private slots:
    void on_kinConfirmDenyBox_accepted();

    void on_kinConfirmDenyBox_rejected();

    void on_DescriptionTextBox_textChanged();

    void on_kinNameTextBox_textChanged(const QString &arg1);

    void on_SpeciesTextBox_textChanged(const QString &arg1);

    void on_GenderTextBox_textChanged(const QString &arg1);

private:
    Ui::Kin *ui;
};

#endif // KIN_H
