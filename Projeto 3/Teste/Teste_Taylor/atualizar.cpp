#include "atualizar.h"
#include "ui_atualizar.h"

atualizar::atualizar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::atualizar)
{
    ui->setupUi(this);
}

atualizar::~atualizar()
{
    delete ui;
}
