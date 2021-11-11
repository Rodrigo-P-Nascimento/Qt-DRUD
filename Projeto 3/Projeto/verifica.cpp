#include "verifica.h"
#include "ui_verifica.h"

static int sec;

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
    //Mercearia
    ui->BTN_CONTINUAR->setEnabled(true);
    sec = 1;
}


void Verifica::on_radioButton_4_clicked()
{
    //Padaria
    ui->BTN_CONTINUAR->setEnabled(true);
    sec = 2;
}


void Verifica::on_radioButton_clicked()
{
    ///Frios e Açougue
    ui->BTN_CONTINUAR->setEnabled(true);
    sec = 3;
}


void Verifica::on_radioButton_2_clicked()
{
    //Bebidas
    ui->BTN_CONTINUAR->setEnabled(true);
    sec = 4;
}


void Verifica::on_radioButton_3_clicked()
{
    //Limpeza
    ui->BTN_CONTINUAR->setEnabled(true);
    sec = 5;
}


void Verifica::on_BTN_CANCELAR_clicked()
{
    close();
}


void Verifica::on_BTN_CONTINUAR_clicked()
{
    close();

    CadastroMercearia cm(this, sec);
    cm.exec();

}


