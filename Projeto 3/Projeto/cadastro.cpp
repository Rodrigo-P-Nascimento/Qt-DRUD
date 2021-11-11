#include "cadastro.h"
#include "ui_cadastro.h"
#include "QMessageBox"



CadastroMercearia::CadastroMercearia(QWidget *parent, int secao) :
    QDialog(parent),
    ui(new Ui::CadastroMercearia)
{
    ui->setupUi(this);

    QDate date = QDate::currentDate();

    ui->DAFA->setDate(date);
    ui->DAVA->setDate(date);



    if(secao == 1){
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

void CadastroMercearia::on_BTN_SALVAR_clicked(){
        //SALVAR DADOS NA TABELA

        QString nome = ui->LINE_NOME->text();
        QString codigo = ui->SPIN_CODIGO->text();
        QString preco = ui->SPIN_PRECO->text();
        QString dataFab = ui->DAFA->text();
        QString dataVal = ui->DAVA->text();
        QString unidade = ui->SPIN_UNIDADE->text();
        QString nome_for = ui->LINE_NOME_FORNECEDOR->text();
        QString pais = ui->COMBOBOX_PAIS->currentText();
        QString estado = ui->LINE_ESTADO->text();
        QString cidade = ui->LINE_CIDADE->text();

        QSqlQuery query;

        query.prepare("insert into mercearia(nome,codigo,preco,dataFab,dataVal,unidade,nome_for,pais_for,estado_for,cidade_for) "
                      "values('"+nome+"','"+codigo+"','"+preco+"','"+dataFab+"','"+dataVal+"','"+unidade+"','"+nome_for+"','"+pais+"','"+estado+"','"+cidade+"')");

        if(query.exec()){
            QMessageBox::information(this, "Resultado", "Dados salvos com sucesso");
        }else{
            qDebug() << query.lastError().text();
            qDebug() << "Dados NÃO SALVOS";
        }
}
void CadastroMercearia::on_BTN_LIMPAR_clicked(){
        QDate date = QDate::currentDate();

        ui->LINE_NOME->clear();
        ui->SPIN_CODIGO->setValue(0);
        ui->SPIN_PRECO->setValue(0);
        ui->DAFA->setDate(date);
        ui->DAVA->setDate(date);
        ui->SPIN_UNIDADE->setValue(0);
        ui->LINE_NOME_FORNECEDOR->clear();
        ui->COMBOBOX_PAIS->setCurrentIndex(0);
        ui->LINE_ESTADO->clear();
        ui->LINE_CIDADE->clear();

}
CadastroMercearia::~CadastroMercearia()
{
    delete ui;
}
