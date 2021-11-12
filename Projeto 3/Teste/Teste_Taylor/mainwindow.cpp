#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastro.h"
#include "ui_cadastro.h"

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

void MainWindow::on_action_Novo_Produto_triggered()
{
    ui->tabWidget->addTab(new cadastro(), "Novo Produto");
}
