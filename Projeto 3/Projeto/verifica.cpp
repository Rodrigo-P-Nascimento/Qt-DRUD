#include "verifica.h"
#include "ui_verifica.h"
#include "variaveis.cpp"
#include "cadastro.h"
#include "ui_cadastro.h"

Verifica::Verifica(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Verifica)
{
    ui->setupUi(this);
}

Verifica::~Verifica()
{
    delete ui;
}

void Verifica::on_radioButton_5_clicked()
{
    secao = "Mercearia";
    ui->BTN_CONTINUAR->setEnabled(true);
}


void Verifica::on_radioButton_4_clicked()
{
    secao = "Padaria";
    ui->BTN_CONTINUAR->setEnabled(true);
}


void Verifica::on_radioButton_clicked()
{
    secao = "Frios";
    ui->BTN_CONTINUAR->setEnabled(true);
}


void Verifica::on_radioButton_2_clicked()
{
    secao = "Bebidas";
    ui->BTN_CONTINUAR->setEnabled(true);
}


void Verifica::on_radioButton_3_clicked()
{
    secao = "Limpeza";
    ui->BTN_CONTINUAR->setEnabled(true);
}


void Verifica::on_BTN_CANCELAR_clicked()
{
    close();
}


void Verifica::on_BTN_CONTINUAR_clicked()
{
    close();
    CadastroMercearia cm;
    cm.exec();
}

