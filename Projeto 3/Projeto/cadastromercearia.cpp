#include "cadastromercearia.h"
#include "ui_cadastromercearia.h"

CadastroMercearia::CadastroMercearia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadastroMercearia)
{
    ui->setupUi(this);
}

CadastroMercearia::~CadastroMercearia()
{
    delete ui;
}
