#include "relatorio_de_produtos.h"
#include "ui_relatorio_de_produtos.h"

relatorio_de_produtos::relatorio_de_produtos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::relatorio_de_produtos)
{
    ui->setupUi(this);
}

relatorio_de_produtos::~relatorio_de_produtos()
{
    delete ui;
}
