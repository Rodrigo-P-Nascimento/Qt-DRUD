#include "cadastro.h"
#include "ui_cadastro.h"
#include "QMessageBox"
#include "variaveis.cpp"

CadastroMercearia::CadastroMercearia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadastroMercearia)
{
    ui->setupUi(this);
    if(secao == "Mercearia"){

        ui->LABEL_PESO->hide();
        ui->SPIN_PESO->hide();
        ui->LABEL_GLUTEN->hide();
        ui->COMBO_GLUTEN->hide();
        ui->LABEL_GAS->hide();
        ui->COMBO_GAS->hide();
        ui->LABEL_ALCOOLICA->hide();
        ui->COMBO_ALCOOLICA->hide();
        ui->LABEL_VOLUME->hide();
        ui->SPIN_VOLUME->hide();
        ui->LABEL_FRAGRANCIA->hide();
        ui->LINE_FRAGRANCIA->hide();
    }

}

void CadastroMercearia::on_BTN_SALVAR_MERC_clicked(){


    //qDebug()  << "Nome: " << mercearia[mercearia.size()-1]->getNome() <<" Codigo: " <<mercearia[mercearia.size()-1]->getCodigo();

}
void CadastroMercearia::on_BTN_CANCELAR_MERC_clicked(){

}
CadastroMercearia::~CadastroMercearia()
{
    delete ui;
}
