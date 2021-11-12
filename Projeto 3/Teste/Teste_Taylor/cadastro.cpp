#include "cadastro.h"
#include "ui_cadastro.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

cadastro::cadastro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cadastro)
{
    ui->setupUi(this);
}

cadastro::~cadastro()
{
    delete ui;
}

void cadastro::desabled(){
    ui->label_Nome_do_Produto->setEnabled(false);
    ui->lineEdit_Nome_de_Produto->setEnabled(false);
    ui->label_Codigo->setEnabled(false);
    ui->spinBox_Codigo->setEnabled(false);
    ui->label_Preco->setEnabled(false);
    ui->doubleSpinBox_Preco->setEnabled(false);
    ui->label_Data_de_Fabricacao->setEnabled(false);
    ui->dateEdit_Data_de_Fabricacao->setEnabled(false);
    ui->label_Data_de_Validade->setEnabled(false);
    ui->dateEdit_Data_de_Validade->setEnabled(false);
    ui->label_Unidades->setEnabled(false);
    ui->spinBox_Unidades->setEnabled(false);
    ui->label_Peso->setEnabled(false);
    ui->doubleSpinBox_Peso->setEnabled(false);
    ui->label_Volume_por_Unidade->setEnabled(false);
    ui->doubleSpinBox_Volume_por_Unidade->setEnabled(false);
    ui->label_Gluten->setEnabled(false);
    ui->comboBox_Gluten->setEnabled(false);
    ui->label_Alcoolica->setEnabled(false);
    ui->comboBox_Alcoolica->setEnabled(false);
    ui->label_Gaseificada->setEnabled(false);
    ui->comboBox_Gaseificada->setEnabled(false);
    ui->label_Fragrancia->setEnabled(false);
    ui->lineEdit_Fragrancia->setEnabled(false);

    // DADOS DO FORNECEDOR
    ui->label_Dados_do_Fornecedor->setEnabled(false);;
    ui->label_Nome_do_Fornecedor->setEnabled(false);
    ui->lineEdit_Nome_do_Fornecedor->setEnabled(false);
    ui->label_Pais_Sede->setEnabled(false);
    ui->comboBox_Pais_Sede->setEnabled(false);
    ui->label_Estado_Sede->setEnabled(false);
    ui->lineEdit_Estado_Sede->setEnabled(false);
    ui->label_Cidade_Sede->setEnabled(false);
    ui->lineEdit_Cidade_Sede->setEnabled(false);

    // BOTÃO SALVAR
    ui->pushButton_Salvar->setEnabled(false);
}

void cadastro::enable_cadastro_padrao(){
    // DADOS DO PRODUTO
    ui->label_Nome_do_Produto->setEnabled(true);
    ui->lineEdit_Nome_de_Produto->setEnabled(true);
    ui->label_Codigo->setEnabled(true);
    ui->spinBox_Codigo->setEnabled(true);
    ui->label_Preco->setEnabled(true);
    ui->doubleSpinBox_Preco->setEnabled(true);
    ui->label_Data_de_Fabricacao->setEnabled(true);
    ui->dateEdit_Data_de_Fabricacao->setEnabled(true);
    ui->label_Data_de_Validade->setEnabled(true);
    ui->dateEdit_Data_de_Validade->setEnabled(true);

    // DADOS DO FORNECEDOR
    ui->label_Dados_do_Fornecedor->setEnabled(true);;
    ui->label_Nome_do_Fornecedor->setEnabled(true);
    ui->lineEdit_Nome_do_Fornecedor->setEnabled(true);
    ui->label_Pais_Sede->setEnabled(true);
    ui->comboBox_Pais_Sede->setEnabled(true);
    ui->label_Estado_Sede->setEnabled(true);
    ui->lineEdit_Estado_Sede->setEnabled(true);
    ui->label_Cidade_Sede->setEnabled(true);
    ui->lineEdit_Cidade_Sede->setEnabled(true);

    // BOTÃO SALVAR
    ui->pushButton_Salvar->setEnabled(true);
}

void cadastro::enabled_acougue_e_frios(){
    ui->label_Peso->setEnabled(true);
    ui->doubleSpinBox_Peso->setEnabled(true);
}

void cadastro::enabled_bebidas(){
    ui->label_Unidades->setEnabled(true);
    ui->spinBox_Unidades->setEnabled(true);
    ui->label_Volume_por_Unidade->setEnabled(true);
    ui->doubleSpinBox_Volume_por_Unidade->setEnabled(true);
    ui->label_Alcoolica->setEnabled(true);
    ui->comboBox_Alcoolica->setEnabled(true);
    ui->label_Gaseificada->setEnabled(true);
    ui->comboBox_Gaseificada->setEnabled(true);
}

void cadastro::enabled_limpeza(){
    ui->label_Unidades->setEnabled(true);
    ui->spinBox_Unidades->setEnabled(true);
    ui->label_Fragrancia->setEnabled(true);
    ui->lineEdit_Fragrancia->setEnabled(true);
}

void cadastro::enabled_mercearia(){
    ui->label_Unidades->setEnabled(true);
    ui->spinBox_Unidades->setEnabled(true);
}

void cadastro::enabled_padaria(){
    ui->label_Peso->setEnabled(true);
    ui->doubleSpinBox_Peso->setEnabled(true);
    ui->label_Gluten->setEnabled(true);
    ui->comboBox_Gluten->setEnabled(true);
}

void cadastro::on_comboBox_Secao_currentTextChanged(const QString &arg1)
{
    desabled();

    if(arg1 != "Selecionar"){
        enable_cadastro_padrao();
    }

    if(arg1 == "Açougue e Frios"){
        enabled_acougue_e_frios();
    }else if(arg1 == "Bebidas"){
        enabled_bebidas();
    }else if(arg1 == "Limpeza"){
        enabled_limpeza();
    }else if(arg1 == "Mercearia"){
        enabled_mercearia();
    }else if(arg1 == "Padaria"){
        enabled_padaria();
    }
}

void cadastro::on_pushButton_Limpar_clicked()
{
    QDate date = QDate::currentDate();

    ui->lineEdit_Nome_de_Produto->clear();
    ui->spinBox_Codigo->setValue(0);
    ui->doubleSpinBox_Preco->setValue(0);
    ui->dateEdit_Data_de_Fabricacao->setDate(date);
    ui->dateEdit_Data_de_Validade->setDate(date);
    ui->spinBox_Unidades->setValue(0);
    ui->doubleSpinBox_Peso->setValue(0);
    ui->doubleSpinBox_Volume_por_Unidade->setValue(0);
    ui->comboBox_Gluten->setCurrentIndex(0);
    ui->comboBox_Alcoolica->setCurrentIndex(0);
    ui->comboBox_Gaseificada->setCurrentIndex(0);
    ui->lineEdit_Fragrancia->clear();
    ui->lineEdit_Nome_do_Fornecedor->clear();
    ui->comboBox_Pais_Sede->setCurrentIndex(0);
    ui->lineEdit_Estado_Sede->clear();
    ui->lineEdit_Cidade_Sede->clear();
}

