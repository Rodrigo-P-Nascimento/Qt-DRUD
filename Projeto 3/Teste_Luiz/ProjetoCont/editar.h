#ifndef EDITAR_H
#define EDITAR_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class editar;
}

class editar : public QDialog
{
    Q_OBJECT

public:
    explicit editar(QWidget *parent = nullptr, QString secao = "", QString codigo = "");
    ~editar();


    void desabled();

    void enable_cadastro_padrao();
    void enabled_acougue_e_frios();
    void enabled_bebidas();
    void enabled_limpeza();
    void enabled_mercearia();
    void enabled_padaria();


private slots:
    void on_BTN_CALCELAR_clicked();

    void on_BTN_SALVAR_clicked();

private:
    Ui::editar *ui;
};

#endif // EDITAR_H
