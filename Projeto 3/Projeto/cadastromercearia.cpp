#include "cadastromercearia.h"
#include "ui_cadastromercearia.h"
#include "QMessageBox"
#include "variaveis.cpp"

CadastroMercearia::CadastroMercearia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadastroMercearia)
{
    ui->setupUi(this);
}

void CadastroMercearia::on_BTN_SALVAR_MERC_clicked(){
    //Informações do produto
    QString nomeProduto = ui->LINE_NOME_MERC->text();
    QString codigo = ui->SPIN_MERC->text();
    QString preco = ui->DOUBLE_SPIN_MERC->text();
    QString dataFa = ui->DAFA_MERC->text();
    QString dataVA = ui->DAVA_MERC->text();
    QString unidade = ui->SPIN2_MERC->text();
    //Informações do Fornecedor
    QString nomeFornecedor = ui->LINE_NOME_FORNECEDOR->text();
    QString pais = ui->LINE_PAIS->text();
    QString estado = ui->LINE_ESTADO->text();
    QString cidade = ui->LINE_CIDADE->text();

    QMessageBox::information(this, "Dados Salvos", "Nome: " + nomeProduto+
                             "\nCodigo: "+codigo+"\nPreço: "+preco+
                             "\nData Fabricação: "+dataFa+"\nData Validade: "+dataVA+
                             "\nUnidade(s): "+unidade+"\n\nFornecedor: "+nomeFornecedor+
                             "\nPais: "+pais+"\nEstado: "+estado+"\nCidade: "+cidade);
    mercearia.push_back(new Mercearia(nomeProduto, codigo, preco, unidade, dataFa, dataVA));
    //Debugar a saida manos
    qDebug()  << "Nome: " << mercearia[mercearia.size()-1]->getNome() <<" Codigo: " <<mercearia[mercearia.size()-1]->getCodigo();

}
void CadastroMercearia::on_BTN_CANCELAR_MERC_clicked(){
    ui->LINE_NOME_MERC->clear();
    ui->SPIN_MERC->clear();
    ui->DOUBLE_SPIN_MERC->clear();
    ui->DAFA_MERC->clear();
    ui->DAVA_MERC->clear();
    ui->SPIN2_MERC->clear();

    ui->LINE_NOME_FORNECEDOR->clear();
    ui->LINE_PAIS->clear();
    ui->LINE_ESTADO->clear();
    ui->LINE_CIDADE->clear();

    ui->LINE_NOME_MERC->setFocus();
}
CadastroMercearia::~CadastroMercearia()
{
    delete ui;
}
