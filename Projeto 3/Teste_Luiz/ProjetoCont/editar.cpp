#include "editar.h"
#include "ui_editar.h"
#include <QtSql>

static QSqlQuery query;

editar::editar(QWidget *parent, QString secao, QString codigo) :
    QDialog(parent),
    ui(new Ui::editar)
{
    ui->setupUi(this);


    if (secao == "Açougue e Frios"){
        secao = "frios";
    }
    else if (secao == "Bebidas"){
        secao = "bebidas";
    }
    else if (secao == "Mercearia"){
        secao = "mercearia";
    }
    else if (secao == "Padaria"){
        secao = "padaria";
    }
    else if (secao == "Limpeza"){
        secao = "limpeza";
    }



    query.prepare("select * from "+secao+" where codigo="+codigo);
    if(query.exec()){
        query.first();
    }
    else {
        qDebug() << "Erro ao encontrar o produto para edição no banco de dados";
    }


    desabled();
    enable_cadastro_padrao();

    if(secao == "frios"){
        enabled_acougue_e_frios();
    }else if(secao == "bebidas"){
        enabled_bebidas();
    }else if(secao == "limpeza"){
        enabled_limpeza();
    }else if(secao == "mercearia"){
        enabled_mercearia();
    }else if(secao == "padaria"){
        enabled_padaria();
    }
}

editar::~editar()
{
    delete ui;
}


void editar::desabled(){
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
    //ui->BTN_SALVAR->setEnabled(false);
}

void editar::enable_cadastro_padrao(){
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
    //ui->pushButton_Salvar->setEnabled(true);


    ui->lineEdit_Nome_de_Produto->setText(query.value(0).toString());
    ui->spinBox_Codigo->setValue(query.value(1).toInt());
    //ui->doubleSpinBox_Preco->setValue(query.value(2).toFloat());
    //ui->dateEdit_Data_de_Fabricacao->setDateTime(query.value(3).toDateTime());
    //ui->dateEdit_Data_de_Validade->setDate(query.value(4).toDate());
}

void editar::enabled_acougue_e_frios(){
    ui->spinBox_Unidades->setValue(0);
    ui->doubleSpinBox_Volume_por_Unidade->setValue(0);
    ui->comboBox_Gluten->setCurrentIndex(0);
    ui->comboBox_Alcoolica->setCurrentIndex(0);
    ui->comboBox_Gaseificada->setCurrentIndex(0);
    ui->lineEdit_Fragrancia->clear();

    ui->label_Peso->setEnabled(true);
    ui->doubleSpinBox_Peso->setEnabled(true);

    ui->lineEdit_Nome_do_Fornecedor->setText(query.value(6).toString());
    ui->comboBox_Pais_Sede->setCurrentText(query.value(7).toString());
    ui->lineEdit_Estado_Sede->setText(query.value(8).toString());
    ui->lineEdit_Cidade_Sede->setText(query.value(9).toString());
}

void editar::enabled_bebidas(){
    ui->doubleSpinBox_Peso->setValue(0);
    ui->comboBox_Gluten->setCurrentIndex(0);
    ui->lineEdit_Fragrancia->clear();

    ui->label_Unidades->setEnabled(true);
    ui->spinBox_Unidades->setEnabled(true);
    ui->label_Volume_por_Unidade->setEnabled(true);
    ui->doubleSpinBox_Volume_por_Unidade->setEnabled(true);
    ui->label_Alcoolica->setEnabled(true);
    ui->comboBox_Alcoolica->setEnabled(true);
    ui->label_Gaseificada->setEnabled(true);
    ui->comboBox_Gaseificada->setEnabled(true);

    ui->spinBox_Unidades->setValue(query.value(5).toInt());
    //ui->doubleSpinBox_Volume_por_Unidade->setValue(query.value(6).toDouble());
    ui->comboBox_Alcoolica->setCurrentText(query.value(7).toString());
    ui->comboBox_Gaseificada->setCurrentText(query.value(8).toString());
    ui->lineEdit_Nome_do_Fornecedor->setText(query.value(9).toString());
    ui->comboBox_Pais_Sede->setCurrentText(query.value(10).toString());
    ui->lineEdit_Estado_Sede->setText(query.value(11).toString());
    ui->lineEdit_Cidade_Sede->setText(query.value(12).toString());
}

void editar::enabled_limpeza(){
    ui->doubleSpinBox_Peso->setValue(0);
    ui->doubleSpinBox_Volume_por_Unidade->setValue(0);
    ui->comboBox_Gluten->setCurrentIndex(0);
    ui->comboBox_Alcoolica->setCurrentIndex(0);
    ui->comboBox_Gaseificada->setCurrentIndex(0);

    ui->label_Unidades->setEnabled(true);
    ui->spinBox_Unidades->setEnabled(true);
    ui->label_Fragrancia->setEnabled(true);
    ui->lineEdit_Fragrancia->setEnabled(true);

    ui->spinBox_Unidades->setValue(query.value(5).toInt());
    ui->lineEdit_Fragrancia->setText(query.value(6).toString());
    ui->lineEdit_Nome_do_Fornecedor->setText(query.value(7).toString());
    ui->comboBox_Pais_Sede->setCurrentText(query.value(8).toString());
    ui->lineEdit_Estado_Sede->setText(query.value(9).toString());
    ui->lineEdit_Cidade_Sede->setText(query.value(10).toString());
}

void editar::enabled_mercearia(){
    ui->doubleSpinBox_Peso->setValue(0);
    ui->doubleSpinBox_Volume_por_Unidade->setValue(0);
    ui->comboBox_Gluten->setCurrentIndex(0);
    ui->comboBox_Alcoolica->setCurrentIndex(0);
    ui->comboBox_Gaseificada->setCurrentIndex(0);
    ui->lineEdit_Fragrancia->clear();

    ui->label_Unidades->setEnabled(true);
    ui->spinBox_Unidades->setEnabled(true);

    ui->spinBox_Unidades->setValue(query.value(5).toInt());
    ui->lineEdit_Nome_do_Fornecedor->setText(query.value(6).toString());
    ui->comboBox_Pais_Sede->setCurrentText(query.value(7).toString());
    ui->lineEdit_Estado_Sede->setText(query.value(8).toString());
    ui->lineEdit_Cidade_Sede->setText(query.value(9).toString());
}

void editar::enabled_padaria(){
    ui->spinBox_Unidades->setValue(0);
    ui->doubleSpinBox_Volume_por_Unidade->setValue(0);
    ui->comboBox_Alcoolica->setCurrentIndex(0);
    ui->comboBox_Gaseificada->setCurrentIndex(0);
    ui->lineEdit_Fragrancia->clear();

    ui->label_Peso->setEnabled(true);
    ui->doubleSpinBox_Peso->setEnabled(true);
    ui->label_Gluten->setEnabled(true);
    ui->comboBox_Gluten->setEnabled(true);

    //ui->doubleSpinBox_Peso->setValue(query.value(5).toDouble());
    ui->comboBox_Gluten->setCurrentText(query.value(6).toString());
    ui->lineEdit_Nome_do_Fornecedor->setText(query.value(7).toString());
    ui->comboBox_Pais_Sede->setCurrentText(query.value(8).toString());
    ui->lineEdit_Estado_Sede->setText(query.value(9).toString());
    ui->lineEdit_Cidade_Sede->setText(query.value(10).toString());
}



void editar::on_BTN_CALCELAR_clicked()
{
    this->close();
}


void editar::on_BTN_SALVAR_clicked()
{

}

