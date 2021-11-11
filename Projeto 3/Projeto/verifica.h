#ifndef VERIFICA_H
#define VERIFICA_H

#include <QWidget>
#include "cadastro.h"

namespace Ui {
class Verifica;
}

class Verifica : public QWidget
{
    Q_OBJECT

public:
    explicit Verifica(QWidget *parent = nullptr);
    ~Verifica();

private slots:
    void on_radioButton_5_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_BTN_CANCELAR_clicked();

    void on_BTN_CONTINUAR_clicked();

private:
    Ui::Verifica *ui;
};

#endif // VERIFICA_H
