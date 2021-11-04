#ifndef CADASTRO_H
#define CADASTRO_H

#include <QDialog>

namespace Ui {
class CadastroMercearia;
}

class CadastroMercearia : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroMercearia(QWidget *parent = nullptr);
    ~CadastroMercearia();

private slots:
    void on_BTN_SALVAR_MERC_clicked();
    void on_BTN_CANCELAR_MERC_clicked();

private:
    Ui::CadastroMercearia *ui;
};

#endif // CADASTRO_H
