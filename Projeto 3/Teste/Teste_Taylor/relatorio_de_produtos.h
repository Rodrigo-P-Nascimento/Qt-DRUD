#ifndef RELATORIO_DE_PRODUTOS_H
#define RELATORIO_DE_PRODUTOS_H

#include <QWidget>

namespace Ui {
class relatorio_de_produtos;
}

class relatorio_de_produtos : public QWidget
{
    Q_OBJECT

public:
    explicit relatorio_de_produtos(QWidget *parent = nullptr);
    ~relatorio_de_produtos();

private:
    Ui::relatorio_de_produtos *ui;
};

#endif // RELATORIO_DE_PRODUTOS_H
