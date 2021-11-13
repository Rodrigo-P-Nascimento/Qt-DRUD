#include "relatorio_de_fornecedores.h"
#include "ui_relatorio_de_fornecedores.h"

relatorio_de_fornecedores::relatorio_de_fornecedores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::relatorio_de_fornecedores)
{
    ui->setupUi(this);
}

relatorio_de_fornecedores::~relatorio_de_fornecedores()
{
    delete ui;
}
