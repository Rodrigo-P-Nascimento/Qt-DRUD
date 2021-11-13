#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastro.h"
#include "ui_cadastro.h"
#include "relatorio_de_produtos.h"
#include "ui_relatorio_de_produtos.h"
#include "relatorio_de_fornecedores.h"
#include "ui_relatorio_de_fornecedores.h"
#include "atualizar.h"
#include "ui_atualizar.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

void MainWindow::on_action_Cadastrar_triggered()
{
    ui->tabWidget->addTab(new cadastro(), "Cadastrar");
}

void MainWindow::on_action_Atualizar_Produto_triggered()
{
    ui->tabWidget->addTab(new atualizar(), "Atualizar Produto");
}

void MainWindow::on_action_Relatorio_Produtos_triggered()
{
    ui->tabWidget->addTab(new relatorio_de_produtos(), "Relatório de Produtos");
}

void MainWindow::on_action_Relatorio_Fornecedor_triggered()
{
    ui->tabWidget->addTab(new relatorio_de_fornecedores(), "Relatório de Fornecedores");
}
