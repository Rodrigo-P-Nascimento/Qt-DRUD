#include "relatorio_de_produtos.h"
#include "ui_relatorio_de_produtos.h"

relatorio_de_produtos::relatorio_de_produtos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::relatorio_de_produtos)
{
    ui->setupUi(this);
}

relatorio_de_produtos::~relatorio_de_produtos()
{
    delete ui;
}

void relatorio_de_produtos::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->tableWidget_Produtos->setEnabled(true);

    QSqlQuery query;
    QAbstractItemModel* const mdl = ui->tableWidget_Produtos->model();

    mdl->removeRows(0,mdl->rowCount());
    mdl->removeColumns(0,mdl->columnCount());

    if(arg1 == "Açougue e Frios"){
        ui->BTN_EDITAR->setEnabled(true);
        ui->BTN_EXCLUIR->setEnabled(true);
        query.prepare("select * from frios");

        if(query.exec()){
            int linha=0;
            ui->tableWidget_Produtos->setColumnCount(10);
            ui->tableWidget_Produtos->setColumnWidth(0, 150);
            ui->tableWidget_Produtos->setColumnWidth(1, 60);
            ui->tableWidget_Produtos->setColumnWidth(2, 50);
            ui->tableWidget_Produtos->setColumnWidth(3, 110);
            ui->tableWidget_Produtos->setColumnWidth(4, 100);
            ui->tableWidget_Produtos->setColumnWidth(5, 50);           
            ui->tableWidget_Produtos->setColumnWidth(6, 150);
            ui->tableWidget_Produtos->setColumnWidth(7, 120);
            ui->tableWidget_Produtos->setColumnWidth(8, 120);
            ui->tableWidget_Produtos->setColumnWidth(9, 120);


            while(query.next()){
                ui->tableWidget_Produtos->insertRow(linha);
                ui->tableWidget_Produtos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget_Produtos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget_Produtos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tableWidget_Produtos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tableWidget_Produtos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->tableWidget_Produtos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->tableWidget_Produtos->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->tableWidget_Produtos->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->tableWidget_Produtos->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->tableWidget_Produtos->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));

                ui->tableWidget_Produtos->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Peso", "Fornecedor", "País", "Estado", "Cidade"};

            ui->tableWidget_Produtos->sortItems(0);
            ui->tableWidget_Produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tableWidget_Produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableWidget_Produtos->setAlternatingRowColors(true);
        }else{
            //qDebug() << query.lastError().text();
            QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
        }

    }else if(arg1 == "Bebidas"){
        ui->BTN_EDITAR->setEnabled(true);
        ui->BTN_EXCLUIR->setEnabled(true);
        query.prepare("select * from bebidas");

        if(query.exec()){
            int linha=0;
            ui->tableWidget_Produtos->setColumnCount(13);
            ui->tableWidget_Produtos->setColumnWidth(0, 150);
            ui->tableWidget_Produtos->setColumnWidth(1, 60);
            ui->tableWidget_Produtos->setColumnWidth(2, 50);
            ui->tableWidget_Produtos->setColumnWidth(3, 110);
            ui->tableWidget_Produtos->setColumnWidth(4, 100);
            ui->tableWidget_Produtos->setColumnWidth(5, 60);
            ui->tableWidget_Produtos->setColumnWidth(6, 70);
            ui->tableWidget_Produtos->setColumnWidth(7, 70);
            ui->tableWidget_Produtos->setColumnWidth(8, 70);
            ui->tableWidget_Produtos->setColumnWidth(9, 150);
            ui->tableWidget_Produtos->setColumnWidth(10, 120);
            ui->tableWidget_Produtos->setColumnWidth(11, 120);
            ui->tableWidget_Produtos->setColumnWidth(12, 120);

            while(query.next()){
                ui->tableWidget_Produtos->insertRow(linha);
                ui->tableWidget_Produtos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget_Produtos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget_Produtos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tableWidget_Produtos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tableWidget_Produtos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->tableWidget_Produtos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->tableWidget_Produtos->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->tableWidget_Produtos->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->tableWidget_Produtos->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->tableWidget_Produtos->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));
                ui->tableWidget_Produtos->setItem(linha, 10, new QTableWidgetItem(query.value(10).toString()));
                ui->tableWidget_Produtos->setItem(linha, 11, new QTableWidgetItem(query.value(11).toString()));
                ui->tableWidget_Produtos->setItem(linha, 12, new QTableWidgetItem(query.value(12).toString()));

                ui->tableWidget_Produtos->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Unidade", "Volume/L", "Alcoolizada", "Gaseificada", "Fornecedor", "País", "Estado", "Cidade"};

            ui->tableWidget_Produtos->sortItems(0);
            ui->tableWidget_Produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tableWidget_Produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableWidget_Produtos->setAlternatingRowColors(true);
        }else{
            //qDebug() << query.lastError().text();
            QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
        }
    }else if(arg1 == "Limpeza"){
        ui->BTN_EDITAR->setEnabled(true);
        ui->BTN_EXCLUIR->setEnabled(true);
        query.prepare("select * from limpeza");

        if(query.exec()){
            int linha=0;
            ui->tableWidget_Produtos->setColumnCount(11);
            ui->tableWidget_Produtos->setColumnWidth(0, 150);
            ui->tableWidget_Produtos->setColumnWidth(1, 60);
            ui->tableWidget_Produtos->setColumnWidth(2, 50);
            ui->tableWidget_Produtos->setColumnWidth(3, 110);
            ui->tableWidget_Produtos->setColumnWidth(4, 100);
            ui->tableWidget_Produtos->setColumnWidth(5, 60);
            ui->tableWidget_Produtos->setColumnWidth(6, 100);
            ui->tableWidget_Produtos->setColumnWidth(7, 150);
            ui->tableWidget_Produtos->setColumnWidth(8, 120);
            ui->tableWidget_Produtos->setColumnWidth(9, 120);
            ui->tableWidget_Produtos->setColumnWidth(10, 120);

            while(query.next()){
                ui->tableWidget_Produtos->insertRow(linha);
                ui->tableWidget_Produtos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget_Produtos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget_Produtos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tableWidget_Produtos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tableWidget_Produtos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->tableWidget_Produtos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->tableWidget_Produtos->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->tableWidget_Produtos->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->tableWidget_Produtos->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->tableWidget_Produtos->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));
                ui->tableWidget_Produtos->setItem(linha, 10, new QTableWidgetItem(query.value(10).toString()));

                ui->tableWidget_Produtos->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Unidade", "Fragrância", "Fornecedor", "País", "Estado", "Cidade"};

            ui->tableWidget_Produtos->sortItems(0);
            ui->tableWidget_Produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tableWidget_Produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableWidget_Produtos->setAlternatingRowColors(true);
        }else{
            //qDebug() << query.lastError().text();
            QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
        }
    }else if(arg1 == "Mercearia"){
        ui->BTN_EDITAR->setEnabled(true);
        ui->BTN_EXCLUIR->setEnabled(true);
        query.prepare("select * from mercearia");

        if(query.exec()){
            int linha=0;
            ui->tableWidget_Produtos->setColumnCount(10);
            ui->tableWidget_Produtos->setColumnWidth(0, 150);
            ui->tableWidget_Produtos->setColumnWidth(1, 60);
            ui->tableWidget_Produtos->setColumnWidth(2, 50);
            ui->tableWidget_Produtos->setColumnWidth(3, 110);
            ui->tableWidget_Produtos->setColumnWidth(4, 100);
            ui->tableWidget_Produtos->setColumnWidth(5, 60);
            ui->tableWidget_Produtos->setColumnWidth(6, 150);
            ui->tableWidget_Produtos->setColumnWidth(7, 120);
            ui->tableWidget_Produtos->setColumnWidth(8, 120);
            ui->tableWidget_Produtos->setColumnWidth(9, 120);

            while(query.next()){
                ui->tableWidget_Produtos->insertRow(linha);
                ui->tableWidget_Produtos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget_Produtos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget_Produtos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tableWidget_Produtos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tableWidget_Produtos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->tableWidget_Produtos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->tableWidget_Produtos->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->tableWidget_Produtos->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->tableWidget_Produtos->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->tableWidget_Produtos->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));

                ui->tableWidget_Produtos->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Unidade", "Fornecedor", "País", "Estado", "Cidade"};

            ui->tableWidget_Produtos->sortItems(0);
            ui->tableWidget_Produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tableWidget_Produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableWidget_Produtos->setAlternatingRowColors(true);
        }else{
            //qDebug() << query.lastError().text();
            QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
        }
    }else if(arg1 == "Padaria"){
        ui->BTN_EDITAR->setEnabled(true);
        ui->BTN_EXCLUIR->setEnabled(true);
        query.prepare("select * from padaria");

        if(query.exec()){
            int linha=0;
            ui->tableWidget_Produtos->setColumnCount(11);
            ui->tableWidget_Produtos->setColumnWidth(0, 150);
            ui->tableWidget_Produtos->setColumnWidth(1, 60);
            ui->tableWidget_Produtos->setColumnWidth(2, 50);
            ui->tableWidget_Produtos->setColumnWidth(3, 110);
            ui->tableWidget_Produtos->setColumnWidth(4, 100);
            ui->tableWidget_Produtos->setColumnWidth(5, 50);
            ui->tableWidget_Produtos->setColumnWidth(6, 60);
            ui->tableWidget_Produtos->setColumnWidth(7, 150);
            ui->tableWidget_Produtos->setColumnWidth(8, 120);
            ui->tableWidget_Produtos->setColumnWidth(9, 120);
            ui->tableWidget_Produtos->setColumnWidth(10, 120);

            while(query.next()){
                ui->tableWidget_Produtos->insertRow(linha);
                ui->tableWidget_Produtos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget_Produtos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget_Produtos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tableWidget_Produtos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tableWidget_Produtos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
                ui->tableWidget_Produtos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
                ui->tableWidget_Produtos->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
                ui->tableWidget_Produtos->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
                ui->tableWidget_Produtos->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
                ui->tableWidget_Produtos->setItem(linha, 9, new QTableWidgetItem(query.value(9).toString()));
                ui->tableWidget_Produtos->setItem(linha, 10, new QTableWidgetItem(query.value(10).toString()));


                ui->tableWidget_Produtos->setRowHeight(linha, 20);
                linha++;
            }
            QStringList cabecalho = {"Nome", "Código", "Preço", "Data de Fabricação", "Data de Validade", "Peso", "Glúten", "Fornecedor", "País", "Estado", "Cidade"};

            ui->tableWidget_Produtos->sortItems(0);
            ui->tableWidget_Produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tableWidget_Produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableWidget_Produtos->setAlternatingRowColors(true);
        }else{
            //qDebug() << query.lastError().text();
            QMessageBox::information(this, "Aviso", "Banco de dados não esta aberto");
        }
    }else if(arg1 == "Selecionar"){
        ui->BTN_EDITAR->setEnabled(false);
        ui->BTN_EXCLUIR->setEnabled(false);
        ui->tableWidget_Produtos->setEnabled(false);
    }

}


void relatorio_de_produtos::on_BTN_EXCLUIR_clicked()
{   
    int linha = ui->tableWidget_Produtos->currentRow();

    if (linha == -1){
        QMessageBox::information(this, "Produto não selecionado", "Selecione um produto para poder realizar sua remoção.");
        return;
    }

    QString secao = ui->comboBox->currentText();
    QString codigo = ui->tableWidget_Produtos->item(linha, 1)->text();

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
    //qDebug() << secao;
    //qDebug() << codigo;

    QSqlQuery query;
    query.prepare("delete from "+secao+" where codigo="+codigo);
    if (query.exec()){
        ui->tableWidget_Produtos->removeRow(linha);
    }
    else {
        QMessageBox::information(this, "ERRO", "Erro ao excluir produto!");
        //qDebug() << "Erro ao excluir produto!";
    }
}


void relatorio_de_produtos::on_BTN_EDITAR_clicked()
{
    int linha = ui->tableWidget_Produtos->currentRow();

    if (linha == -1){
        QMessageBox::information(this, "Produto não selecionado", "Selecione um produto para poder realizar sua edição.");
        return;
    }

    QString secao = ui->comboBox->currentText();
    QString codigo = ui->tableWidget_Produtos->item(linha, 1)->text();

    editar ed(this, secao, codigo);
    ed.exec();

    QMessageBox::information(this, "Dados Editados", "Seus dados foram editados com sucesso!");
    relatorio_de_produtos::on_comboBox_currentTextChanged(ui->comboBox->currentText());
}

