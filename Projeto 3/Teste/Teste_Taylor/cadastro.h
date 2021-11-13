#ifndef CADASTRO_H
#define CADASTRO_H

#include <QWidget>

namespace Ui {
class cadastro;
}

class cadastro : public QWidget
{
    Q_OBJECT

public:
    explicit cadastro(QWidget *parent = nullptr);
    ~cadastro();

    void verifica_secao();
    void desabled();

    void enable_cadastro_padrao();
    void enabled_acougue_e_frios();
    void enabled_bebidas();
    void enabled_limpeza();
    void enabled_mercearia();
    void enabled_padaria();

private slots:
    void on_comboBox_Secao_currentTextChanged(const QString &arg1);

    void on_pushButton_Salvar_clicked();
    void on_pushButton_Limpar_clicked();

private:
    Ui::cadastro *ui;
};

#endif // CADASTRO_H
