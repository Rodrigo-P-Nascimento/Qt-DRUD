#include "mainwindow.h"
#include "ui_mainwindow.h"

static QSqlDatabase dbdados = QSqlDatabase::addDatabase("QSQLITE");

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->addPermanentWidget(ui->label);

    //dbdados.setDatabaseName("C:/Users/taylo/OneDrive/Documentos/GitHub/ProjetoLP1/Projeto 3/Teste/Teste_Taylor/dados.db");
    //dbdados.setDatabaseName("C:/Users/PC/Documents/GitHub/ProjetoLP1/Projeto 3/Teste_Luiz/ProjetoCont/dados.db");
    //dbdados.setDatabaseName("C:/Users/rodri/Documents/GitHub/ProjetoLP1/Projeto 3/Teste_Luiz/ProjetoCont/dados.db");
    dbdados.setDatabaseName("dados.db");

    if(!dbdados.open()){
        qDebug() << "Não foi possível abrir o DB";
    }else{
        qDebug() << "DB aberto.";
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
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
}

void MainWindow::on_action_Gerenciar_Produtos_triggered()
{
    ui->tabWidget->addTab(new relatorio_de_produtos(), "Gerenciar Produtos");
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
}

void MainWindow::on_actionSobre_o_Grupo_triggered()
{
    Sobre *about = new Sobre();
    about->show();
}


void MainWindow::on_actionAgradecimentos_triggered()
{
    Agradecimentos *agrade = new Agradecimentos();
    agrade->show();
}

