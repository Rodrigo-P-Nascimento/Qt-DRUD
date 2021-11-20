#include "cadastro.h"
#include "ui_cadastro.h"

cadastro::cadastro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cadastro)
{
    ui->setupUi(this);

    QDate date = QDate::currentDate();
    ui->dateEdit_Data_de_Fabricacao->setDate(date);
    ui->dateEdit_Data_de_Validade->setDate(date);
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
    ui->spinBox_Unidades->setValue(0);
    ui->doubleSpinBox_Volume_por_Unidade->setValue(0);
    ui->comboBox_Gluten->setCurrentIndex(0);
    ui->comboBox_Alcoolica->setCurrentIndex(0);
    ui->comboBox_Gaseificada->setCurrentIndex(0);
    ui->lineEdit_Fragrancia->clear();

    ui->label_Peso->setEnabled(true);
    ui->doubleSpinBox_Peso->setEnabled(true);
}

void cadastro::enabled_bebidas(){
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
}

void cadastro::enabled_limpeza(){
    ui->doubleSpinBox_Peso->setValue(0);
    ui->doubleSpinBox_Volume_por_Unidade->setValue(0);
    ui->comboBox_Gluten->setCurrentIndex(0);
    ui->comboBox_Alcoolica->setCurrentIndex(0);
    ui->comboBox_Gaseificada->setCurrentIndex(0);

    ui->label_Unidades->setEnabled(true);
    ui->spinBox_Unidades->setEnabled(true);
    ui->label_Fragrancia->setEnabled(true);
    ui->lineEdit_Fragrancia->setEnabled(true);
}

void cadastro::enabled_mercearia(){
    ui->doubleSpinBox_Peso->setValue(0);
    ui->doubleSpinBox_Volume_por_Unidade->setValue(0);
    ui->comboBox_Gluten->setCurrentIndex(0);
    ui->comboBox_Alcoolica->setCurrentIndex(0);
    ui->comboBox_Gaseificada->setCurrentIndex(0);
    ui->lineEdit_Fragrancia->clear();

    ui->label_Unidades->setEnabled(true);
    ui->spinBox_Unidades->setEnabled(true);
}

void cadastro::enabled_padaria(){
    ui->spinBox_Unidades->setValue(0);
    ui->doubleSpinBox_Volume_por_Unidade->setValue(0);
    ui->comboBox_Alcoolica->setCurrentIndex(0);
    ui->comboBox_Gaseificada->setCurrentIndex(0);
    ui->lineEdit_Fragrancia->clear();

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

void cadastro::on_pushButton_Salvar_clicked()
{
    QString nome_do_produto = ui->lineEdit_Nome_de_Produto->text();
    QString codigo = ui->spinBox_Codigo->text();
    QString preco = ui->doubleSpinBox_Preco->text();
    QString data_de_fabricacao = ui->dateEdit_Data_de_Fabricacao->text();
    QString data_de_validade = ui->dateEdit_Data_de_Validade->text();
    QString unidade = ui->spinBox_Unidades->text();
    QString peso = ui->doubleSpinBox_Peso->text();
    QString volume = ui->doubleSpinBox_Volume_por_Unidade->text();
    QString gluten = ui->comboBox_Gluten->currentText();
    QString alcoolica = ui->comboBox_Alcoolica->currentText();
    QString gaseificada = ui->comboBox_Gaseificada->currentText();
    QString fragrancia = ui->lineEdit_Fragrancia->text();

    QString nome_do_fornecedor = ui->lineEdit_Nome_do_Fornecedor->text();
    QString pais = ui->comboBox_Pais_Sede->currentText();
    QString estado = ui->lineEdit_Estado_Sede->text();
    QString cidade = ui->lineEdit_Cidade_Sede->text();

    QSqlQuery query;

    QString secao = ui->comboBox_Secao->currentText();

    if(secao == "Mercearia"){
        query.prepare("insert into mercearia(nome,codigo,preco,dataFab,dataVal,unidade,nome_for,pais_for,estado_for,cidade_for) "
                      "values('"+nome_do_produto+"','"+codigo+"','"+preco+"','"+data_de_fabricacao+"','"+data_de_validade+"','"+unidade+"','"+nome_do_fornecedor+"','"+pais+"','"+estado+"','"+cidade+"')");
    }else if(secao == "Padaria"){
        query.prepare("insert into padaria(nome,codigo,preco,dataFab,dataVal,peso,gluten,nome_for,pais_for,estado_for,cidade_for) "
                      "values('"+nome_do_produto+"','"+codigo+"','"+preco+"','"+data_de_fabricacao+"','"+data_de_validade+"','"+peso+"','"+gluten+"','"+nome_do_fornecedor+"','"+pais+"','"+estado+"','"+cidade+"')");
    }else if(secao == "Bebidas"){
        query.prepare("insert into bebidas(nome,codigo,preco,dataFab,dataVal,unidade,volume,alcool,gas,nome_for,pais_for,estado_for,cidade_for) "
                      "values('"+nome_do_produto+"','"+codigo+"','"+preco+"','"+data_de_fabricacao+"','"+data_de_validade+"','"+unidade+"','"+volume+"','"+alcoolica+"','"+gaseificada+"','"+nome_do_fornecedor+"','"+pais+"','"+estado+"','"+cidade+"')");
    }else if(secao == "Açougue e Frios"){
        query.prepare("insert into frios(nome,codigo,preco,dataFab,dataVal,peso,nome_for,pais_for,estado_for,cidade_for) "
                      "values('"+nome_do_produto+"','"+codigo+"','"+preco+"','"+data_de_fabricacao+"','"+data_de_validade+"','"+peso+"','"+nome_do_fornecedor+"','"+pais+"','"+estado+"','"+cidade+"')");
    }else if(secao == "Limpeza"){
        query.prepare("insert into limpeza(nome,codigo,preco,dataFab,dataVal,unidade,fragrancia,nome_for,pais_for,estado_for,cidade_for) "
                      "values('"+nome_do_produto+"','"+codigo+"','"+preco+"','"+data_de_fabricacao+"','"+data_de_validade+"','"+unidade+"','"+fragrancia+"','"+nome_do_fornecedor+"','"+pais+"','"+estado+"','"+cidade+"')");
    }

    if(query.exec()){
        QMessageBox::information(this, "Bom trabalho!", "Dados salvos com sucesso!");
    }else{
        QMessageBox::warning(this, "ERRO", "Erro ao cadastrar o produto!");
        //qDebug() << query.lastError().text();
        //qDebug() << "Dados NÃO SALVOS";
    }


}

void cadastro::on_pushButton_Limpar_clicked()
{
    QDate date = QDate::currentDate();

    ui->comboBox_Secao->setCurrentIndex(0);
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
