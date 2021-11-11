#include "cadastro.h"
#include "ui_cadastro.h"
#include "QMessageBox"

static QSqlDatabase dbdados = QSqlDatabase::addDatabase("QSQLITE");
static QDate date = QDate::currentDate();

CadastroMercearia::CadastroMercearia(QWidget *parent, int secao) :
    QDialog(parent),
    ui(new Ui::CadastroMercearia)
{
    ui->setupUi(this);

    ui->DAFA->setDate(date);
    ui->DAVA->setDate(date);

    dbdados.setDatabaseName("C:/Users/rodri/Documents/GitHub/ProjetoLP1/Projeto 3/Projeto/dados.db");
    //dbdados.setDatabaseName("./dados.db");


    if(!dbdados.open()){
        qDebug() << "Não foi possível abrir o DB";
    }else{
        qDebug() << "DB aberto";
    }

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
        QString cod = ui->SPIN_CODIGO->text();
        QString prec = ui->SPIN_PRECO->text();
        QString daFab = ui->DAFA->text();
        QString daVal = ui->DAVA->text();
        QString uni = ui->SPIN_UNIDADE->text();
        QString name_For = ui->LINE_NOME_FORNECEDOR->text();
        QString country = ui->COMBOBOX_PAIS->currentText();
        QString estate = ui->LINE_ESTADO->text();
        QString city = ui->LINE_CIDADE->text();

        QSqlQuery query;

        //query.prepare("insert into mercearia(nome,codigo,preco,dataFab,dataVal,unidade,nome_for,pais,estado,cidade) "
                     // "values('"+nome+"','"+codigo+"','"+preco+"','"+dataFab+"','"+dataVal+"','"+unidade+"','"+nome_Fornecedor+"','"+pais+"','"+estado+"','"+cidade+"')");
        query.prepare("insert into mercearia(nome) values('"+nome+"')");
        query.prepare("insert into mercearia(codigo) values('"+cod+"')");
        if(query.exec()){
            qDebug() << "Dados salvos";
        }else{
            qDebug() << query.lastError().text();
            qDebug() << "Dados NÃO SALVOS";
        }
}
void CadastroMercearia::on_BTN_LIMPAR_clicked(){
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
    dbdados.close();
    delete ui;
}
