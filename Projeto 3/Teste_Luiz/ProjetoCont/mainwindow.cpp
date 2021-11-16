#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastro.h"
#include "ui_cadastro.h"
#include "relatorio_de_produtos.h"
#include "ui_relatorio_de_produtos.h"

static QSqlDatabase dbdados = QSqlDatabase::addDatabase("QSQLITE");

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //dbdados.setDatabaseName("C:/Users/taylo/OneDrive/Documentos/GitHub/ProjetoLP1/Projeto 3/Teste/Teste_Taylor/dados.db");
    dbdados.setDatabaseName("C:/Users/PC/Documents/GitHub/ProjetoLP1/Projeto 3/Teste_Luiz/ProjetoCont/dados.db");
    //dbdados.setDatabaseName("C:/Users/rodri/Documents/GitHub/ProjetoLP1/Projeto 3/Teste_Luiz/ProjetoCont/dados.db");
    //dbdados.setDatabaseName("./dados.db");

    if(!dbdados.open()){
        qDebug() << "Não foi possível abrir o DB";
    }else{
        qDebug() << "DB aberto";
    }
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

void MainWindow::on_action_Gerenciar_Produtos_triggered()
{
    ui->tabWidget->addTab(new relatorio_de_produtos(), "Gerenciar Produtos");
}

