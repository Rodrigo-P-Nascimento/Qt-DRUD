#include "remover.h"
#include "ui_remover.h"
#include <QMessageBox>

remover::remover(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::remover)
{
    ui->setupUi(this);



}

remover::~remover()
{
    delete ui;
}


void remover::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->tw_produtos->setEnabled(true);

    QSqlQuery query;
    QAbstractItemModel* const mdl = ui->tw_produtos->model();

    mdl->removeRows(0,mdl->rowCount());
    mdl->removeColumns(0,mdl->columnCount());

    if(arg1 == "Açougue e Frios"){
        query.prepare("select * from frios");

        if(query.exec()){
            int linha=0;
            ui->tw_produtos->setColumnCount(10);
            ui->tw_produtos->setColumnWidth(0, 100);
            ui->tw_produtos->setColumnWidth(1, 60);
            ui->tw_produtos->setColumnWidth(2, 50);
            ui->tw_produtos->setColumnWidth(3, 110);
            ui->tw_produtos->setColumnWidth(4, 100);
            ui->tw_produtos->setColumnWidth(5, 50);
            ui->tw_produtos->setColumnWidth(6, 150);
            ui->tw_produtos->setColumnWidth(7, 120);
            ui->tw_produtos->setColumnWidth(8, 120);
            ui->tw_produtos->setColumnWidth(9, 120);


            while(query.next()){
                ui->tw_produtos->insertRow(linha);
                ui->tw_produtos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tw_produtos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tw_produtos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tw_produtos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tw_produtos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->tw_produtos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->tw_produtos->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->tw_produtos->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->tw_produtos->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->tw_produtos->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));

                ui->tw_produtos->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Peso", "Fornecedor", "País", "Estado", "Cidade"};

            ui->tw_produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tw_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_produtos->setAlternatingRowColors(true);
        }else{
            qDebug() << query.lastError().text();
            QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
        }

    }else if(arg1 == "Bebidas"){
        query.prepare("select * from bebidas");

        if(query.exec()){
            int linha=0;
            ui->tw_produtos->setColumnCount(13);
            ui->tw_produtos->setColumnWidth(0, 100);
            ui->tw_produtos->setColumnWidth(1, 60);
            ui->tw_produtos->setColumnWidth(2, 50);
            ui->tw_produtos->setColumnWidth(3, 110);
            ui->tw_produtos->setColumnWidth(4, 100);
            ui->tw_produtos->setColumnWidth(5, 60);
            ui->tw_produtos->setColumnWidth(6, 70);
            ui->tw_produtos->setColumnWidth(7, 70);
            ui->tw_produtos->setColumnWidth(8, 70);
            ui->tw_produtos->setColumnWidth(9, 150);
            ui->tw_produtos->setColumnWidth(10, 120);
            ui->tw_produtos->setColumnWidth(11, 120);
            ui->tw_produtos->setColumnWidth(12, 120);

            while(query.next()){
                ui->tw_produtos->insertRow(linha);
                ui->tw_produtos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tw_produtos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tw_produtos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tw_produtos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tw_produtos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->tw_produtos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->tw_produtos->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->tw_produtos->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->tw_produtos->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->tw_produtos->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));
                ui->tw_produtos->setItem(linha, 10, new QTableWidgetItem(query.value(10).toString()));
                ui->tw_produtos->setItem(linha, 11, new QTableWidgetItem(query.value(11).toString()));
                ui->tw_produtos->setItem(linha, 12, new QTableWidgetItem(query.value(12).toString()));

                ui->tw_produtos->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Unidade", "Volume/L", "Alcoolizada", "Gaseificada", "Fornecedor", "País", "Estado", "Cidade"};

            ui->tw_produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tw_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_produtos->setAlternatingRowColors(true);
        }else{
            qDebug() << query.lastError().text();
            QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
        }
    }else if(arg1 == "Limpeza"){
        query.prepare("select * from limpeza");

        if(query.exec()){
            int linha=0;
            ui->tw_produtos->setColumnCount(11);
            ui->tw_produtos->setColumnWidth(0, 100);
            ui->tw_produtos->setColumnWidth(1, 60);
            ui->tw_produtos->setColumnWidth(2, 50);
            ui->tw_produtos->setColumnWidth(3, 110);
            ui->tw_produtos->setColumnWidth(4, 100);
            ui->tw_produtos->setColumnWidth(5, 60);
            ui->tw_produtos->setColumnWidth(6, 100);
            ui->tw_produtos->setColumnWidth(7, 150);
            ui->tw_produtos->setColumnWidth(8, 120);
            ui->tw_produtos->setColumnWidth(9, 120);
            ui->tw_produtos->setColumnWidth(10, 120);

            while(query.next()){
                ui->tw_produtos->insertRow(linha);
                ui->tw_produtos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tw_produtos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tw_produtos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tw_produtos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tw_produtos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->tw_produtos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->tw_produtos->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->tw_produtos->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->tw_produtos->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->tw_produtos->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));
                ui->tw_produtos->setItem(linha, 10, new QTableWidgetItem(query.value(10).toString()));

                ui->tw_produtos->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Unidade", "Fragrância", "Fornecedor", "País", "Estado", "Cidade"};

            ui->tw_produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tw_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_produtos->setAlternatingRowColors(true);
        }else{
            qDebug() << query.lastError().text();
            QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
        }
    }else if(arg1 == "Mercearia"){

        query.prepare("select * from mercearia");

        if(query.exec()){
            int linha=0;
            ui->tw_produtos->setColumnCount(10);
            ui->tw_produtos->setColumnWidth(0, 100);
            ui->tw_produtos->setColumnWidth(1, 60);
            ui->tw_produtos->setColumnWidth(2, 50);
            ui->tw_produtos->setColumnWidth(3, 110);
            ui->tw_produtos->setColumnWidth(4, 100);
            ui->tw_produtos->setColumnWidth(5, 60);
            ui->tw_produtos->setColumnWidth(6, 150);
            ui->tw_produtos->setColumnWidth(7, 120);
            ui->tw_produtos->setColumnWidth(8, 120);
            ui->tw_produtos->setColumnWidth(9, 120);

            while(query.next()){
                ui->tw_produtos->insertRow(linha);
                ui->tw_produtos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tw_produtos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tw_produtos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tw_produtos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tw_produtos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->tw_produtos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->tw_produtos->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->tw_produtos->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->tw_produtos->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->tw_produtos->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));

                ui->tw_produtos->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Unidade", "Fornecedor", "País", "Estado", "Cidade"};

            ui->tw_produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tw_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_produtos->setAlternatingRowColors(true);
        }else{
            qDebug() << query.lastError().text();
            QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
        }
    }else if(arg1 == "Padaria"){
        query.prepare("select * from padaria");

        if(query.exec()){
            int linha=0;
            ui->tw_produtos->setColumnCount(11);
            ui->tw_produtos->setColumnWidth(0, 100);
            ui->tw_produtos->setColumnWidth(1, 60);
            ui->tw_produtos->setColumnWidth(2, 50);
            ui->tw_produtos->setColumnWidth(3, 110);
            ui->tw_produtos->setColumnWidth(4, 100);
            ui->tw_produtos->setColumnWidth(5, 50);
            ui->tw_produtos->setColumnWidth(6, 60);
            ui->tw_produtos->setColumnWidth(7, 150);
            ui->tw_produtos->setColumnWidth(8, 120);
            ui->tw_produtos->setColumnWidth(9, 120);
            ui->tw_produtos->setColumnWidth(10, 120);

            while(query.next()){
                ui->tw_produtos->insertRow(linha);
                ui->tw_produtos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tw_produtos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tw_produtos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tw_produtos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tw_produtos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->tw_produtos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->tw_produtos->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->tw_produtos->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->tw_produtos->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->tw_produtos->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));
                ui->tw_produtos->setItem(linha, 10, new QTableWidgetItem(query.value(10).toString()));


                ui->tw_produtos->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Peso", "Glúten", "Fornecedor", "País", "Estado", "Cidade"};

            ui->tw_produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tw_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_produtos->setAlternatingRowColors(true);
        }else{
            qDebug() << query.lastError().text();
            QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
        }
    }else if(arg1 == "Selecionar"){
        ui->tw_produtos->setEnabled(false);
    }
}


void remover::on_btn_excluir_clicked()
{
    int linha = ui->tw_produtos->currentRow();
    QString secao = ui->comboBox->currentText();
    QString codigo = ui->tw_produtos->item(linha, 1)->text();

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
    qDebug() << secao;
    qDebug() << codigo;

    QSqlQuery query;
    query.prepare("delete from "+secao+" where codigo="+codigo);
    if (query.exec()){
        ui->tw_produtos->removeRow(linha);
    }
    else {
        qDebug() << "Erro ao excluir produto!";
    }

}

