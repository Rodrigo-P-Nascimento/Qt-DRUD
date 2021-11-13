#ifndef RELATORIO_DE_FORNECEDORES_H
#define RELATORIO_DE_FORNECEDORES_H

#include <QWidget>

namespace Ui {
class relatorio_de_fornecedores;
}

class relatorio_de_fornecedores : public QWidget
{
    Q_OBJECT

public:
    explicit relatorio_de_fornecedores(QWidget *parent = nullptr);
    ~relatorio_de_fornecedores();

private:
    Ui::relatorio_de_fornecedores *ui;
};

#endif // RELATORIO_DE_FORNECEDORES_H
