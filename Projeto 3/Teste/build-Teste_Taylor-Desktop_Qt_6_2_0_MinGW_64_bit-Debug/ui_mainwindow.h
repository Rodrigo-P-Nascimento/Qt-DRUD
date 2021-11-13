/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Cadastrar;
    QAction *action_Atualizar_Produto;
    QAction *action_Remover_Produto;
    QAction *action_Relatorio_Produtos;
    QAction *action_Relatorio_Fornecedor;
    QAction *action_Adicionar_Cargo;
    QAction *action_Editar_Permissao;
    QAction *action_Remover_Funcinario;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu_Produto;
    QMenu *menu_Relatorio;
    QMenu *menu_Funcionario;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(878, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        action_Cadastrar = new QAction(MainWindow);
        action_Cadastrar->setObjectName(QString::fromUtf8("action_Cadastrar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagem/Imagens/adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cadastrar->setIcon(icon);
        action_Atualizar_Produto = new QAction(MainWindow);
        action_Atualizar_Produto->setObjectName(QString::fromUtf8("action_Atualizar_Produto"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagem/Imagens/recarregar.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Atualizar_Produto->setIcon(icon1);
        action_Remover_Produto = new QAction(MainWindow);
        action_Remover_Produto->setObjectName(QString::fromUtf8("action_Remover_Produto"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagem/Imagens/lixeira.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Remover_Produto->setIcon(icon2);
        action_Relatorio_Produtos = new QAction(MainWindow);
        action_Relatorio_Produtos->setObjectName(QString::fromUtf8("action_Relatorio_Produtos"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagem/Imagens/relatorio.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Relatorio_Produtos->setIcon(icon3);
        action_Relatorio_Fornecedor = new QAction(MainWindow);
        action_Relatorio_Fornecedor->setObjectName(QString::fromUtf8("action_Relatorio_Fornecedor"));
        action_Relatorio_Fornecedor->setIcon(icon3);
        action_Adicionar_Cargo = new QAction(MainWindow);
        action_Adicionar_Cargo->setObjectName(QString::fromUtf8("action_Adicionar_Cargo"));
        action_Adicionar_Cargo->setIcon(icon);
        action_Editar_Permissao = new QAction(MainWindow);
        action_Editar_Permissao->setObjectName(QString::fromUtf8("action_Editar_Permissao"));
        action_Editar_Permissao->setIcon(icon1);
        action_Remover_Funcinario = new QAction(MainWindow);
        action_Remover_Funcinario->setObjectName(QString::fromUtf8("action_Remover_Funcinario"));
        action_Remover_Funcinario->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 861, 500));
        tabWidget->setMinimumSize(QSize(800, 500));
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 878, 21));
        menu_Produto = new QMenu(menubar);
        menu_Produto->setObjectName(QString::fromUtf8("menu_Produto"));
        menu_Relatorio = new QMenu(menubar);
        menu_Relatorio->setObjectName(QString::fromUtf8("menu_Relatorio"));
        menu_Funcionario = new QMenu(menubar);
        menu_Funcionario->setObjectName(QString::fromUtf8("menu_Funcionario"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_Produto->menuAction());
        menubar->addAction(menu_Relatorio->menuAction());
        menubar->addAction(menu_Funcionario->menuAction());
        menu_Produto->addAction(action_Cadastrar);
        menu_Produto->addAction(action_Atualizar_Produto);
        menu_Produto->addAction(action_Remover_Produto);
        menu_Relatorio->addAction(action_Relatorio_Produtos);
        menu_Relatorio->addAction(action_Relatorio_Fornecedor);
        menu_Funcionario->addAction(action_Adicionar_Cargo);
        menu_Funcionario->addAction(action_Editar_Permissao);
        menu_Funcionario->addAction(action_Remover_Funcinario);
        toolBar->addAction(action_Cadastrar);
        toolBar->addAction(action_Atualizar_Produto);
        toolBar->addAction(action_Relatorio_Produtos);
        toolBar->addAction(action_Remover_Produto);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Cadastrar->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
#if QT_CONFIG(tooltip)
        action_Cadastrar->setToolTip(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Atualizar_Produto->setText(QCoreApplication::translate("MainWindow", "Atualizar Produto", nullptr));
        action_Remover_Produto->setText(QCoreApplication::translate("MainWindow", "Remover Produto", nullptr));
        action_Relatorio_Produtos->setText(QCoreApplication::translate("MainWindow", "Relat\303\263rio Produtos", nullptr));
        action_Relatorio_Fornecedor->setText(QCoreApplication::translate("MainWindow", "Relat\303\263rio Fornecedores", nullptr));
        action_Adicionar_Cargo->setText(QCoreApplication::translate("MainWindow", "Adicionar Cargo", nullptr));
        action_Editar_Permissao->setText(QCoreApplication::translate("MainWindow", "Editar Permiss\303\243o", nullptr));
        action_Remover_Funcinario->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        menu_Produto->setTitle(QCoreApplication::translate("MainWindow", "Produto", nullptr));
        menu_Relatorio->setTitle(QCoreApplication::translate("MainWindow", "Relat\303\263rio", nullptr));
        menu_Funcionario->setTitle(QCoreApplication::translate("MainWindow", "Funcion\303\241rio", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
