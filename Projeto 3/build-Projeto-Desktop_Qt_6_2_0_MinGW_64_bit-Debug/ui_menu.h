/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QAction *actionbtn_cadastrar;
    QAction *actionbtn_atualizar;
    QAction *actionbtn_relatorio;
    QAction *actionbtn_remover;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QMenu *menuArquivo;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(525, 295);
        actionbtn_cadastrar = new QAction(Menu);
        actionbtn_cadastrar->setObjectName(QString::fromUtf8("actionbtn_cadastrar"));
        actionbtn_cadastrar->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/Imagens/adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionbtn_cadastrar->setIcon(icon);
        actionbtn_atualizar = new QAction(Menu);
        actionbtn_atualizar->setObjectName(QString::fromUtf8("actionbtn_atualizar"));
        actionbtn_atualizar->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/Imagens/recarregar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionbtn_atualizar->setIcon(icon1);
        actionbtn_relatorio = new QAction(Menu);
        actionbtn_relatorio->setObjectName(QString::fromUtf8("actionbtn_relatorio"));
        actionbtn_relatorio->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/Imagens/relatorio.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionbtn_relatorio->setIcon(icon2);
        actionbtn_remover = new QAction(Menu);
        actionbtn_remover->setObjectName(QString::fromUtf8("actionbtn_remover"));
        actionbtn_remover->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/Imagens/lixeira.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionbtn_remover->setIcon(icon3);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);

        Menu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setEnabled(true);
        Menu->setStatusBar(statusbar);
        toolBar = new QToolBar(Menu);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Menu->addToolBar(Qt::TopToolBarArea, toolBar);
        menuBar = new QMenuBar(Menu);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 525, 20));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        Menu->setMenuBar(menuBar);

        toolBar->addAction(actionbtn_cadastrar);
        toolBar->addAction(actionbtn_atualizar);
        toolBar->addAction(actionbtn_relatorio);
        toolBar->addAction(actionbtn_remover);
        menuBar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionbtn_cadastrar);
        menuArquivo->addAction(actionbtn_atualizar);
        menuArquivo->addAction(actionbtn_relatorio);
        menuArquivo->addAction(actionbtn_remover);

        retranslateUi(Menu);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Mercearia", nullptr));
        actionbtn_cadastrar->setText(QCoreApplication::translate("Menu", "Cadastrar", nullptr));
        actionbtn_atualizar->setText(QCoreApplication::translate("Menu", "Atualizar", nullptr));
        actionbtn_relatorio->setText(QCoreApplication::translate("Menu", "Relatorio", nullptr));
        actionbtn_remover->setText(QCoreApplication::translate("Menu", "Remover", nullptr));
        label->setText(QCoreApplication::translate("Menu", "Escolha uma das sec\303\247\303\265es para trabalhar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Menu", "Mercearia", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Menu", "Padaria", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Menu", "Frios/A\303\247ougue", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Menu", "Bebidas", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Menu", "Limpeza", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Menu", "toolBar", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("Menu", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
