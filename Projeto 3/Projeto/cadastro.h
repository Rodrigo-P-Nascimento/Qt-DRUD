#ifndef CADASTRO_H
#define CADASTRO_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class CadastroMercearia;
}

class CadastroMercearia : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroMercearia(QWidget *parent = nullptr, int secao=0);
    ~CadastroMercearia();

private slots:
    void on_BTN_SALVAR_clicked();
    void on_BTN_LIMPAR_clicked();

private:
    Ui::CadastroMercearia *ui;
};

#endif // CADASTRO_H
