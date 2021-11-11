#include "menu.h"
#include "ui_menu.h"
#include "verifica.h"
#include "ui_verifica.h"
#include "produtos.h"

static QSqlDatabase dbdados = QSqlDatabase::addDatabase("QSQLITE");

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);

    dbdados.setDatabaseName("C:/Users/rodri/Documents/GitHub/ProjetoLP1/Projeto 3/Projeto/dados.db");
    //dbdados.setDatabaseName("./dados.db");

    if(!dbdados.open()){
        qDebug() << "Não foi possível abrir o DB";
    }else{
        qDebug() << "DB aberto";
    }


}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_actionbtn_cadastrar_triggered()
{
    if(!dbdados.isOpen()){
        qDebug() << "Não tá aberto para Cadastro";
    }

    Verifica *verif = new Verifica();
    verif->show();
}


void Menu::on_actionbtn_relatorio_triggered()
{

    if(dbdados.isOpen()){
        ui->TABELA_MERC->setEnabled(true);

        QSqlQuery query;
        query.prepare("select * from mercearia");

        if(query.exec()){
            int linha=0;
            ui->TABELA_MERC->setColumnCount(10);
            ui->TABELA_MERC->setColumnWidth(0, 100);
            ui->TABELA_MERC->setColumnWidth(1, 60);
            ui->TABELA_MERC->setColumnWidth(2, 50);
            ui->TABELA_MERC->setColumnWidth(3, 110);
            ui->TABELA_MERC->setColumnWidth(4, 100);
            ui->TABELA_MERC->setColumnWidth(5, 60);

            while(query.next()){
                ui->TABELA_MERC->insertRow(linha);
                ui->TABELA_MERC->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->TABELA_MERC->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->TABELA_MERC->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->TABELA_MERC->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->TABELA_MERC->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->TABELA_MERC->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->TABELA_MERC->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->TABELA_MERC->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->TABELA_MERC->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->TABELA_MERC->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));

                ui->TABELA_MERC->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Unidade",
                                    "Fornecedor", "Pais", "Estado", "Cidade"};
            ui->TABELA_MERC->setHorizontalHeaderLabels(cabecalho);
            ui->TABELA_MERC->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->TABELA_MERC->setAlternatingRowColors(true);

    }else{
        qDebug() << query.lastError().text();
        QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
    }
    }
}

