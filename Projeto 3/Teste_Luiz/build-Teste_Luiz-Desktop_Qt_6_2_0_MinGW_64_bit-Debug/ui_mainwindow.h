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

class Ui_MainWindow
{
public:
    QAction *action_Cadastrar;
    QAction *action_Gerenciar_Produtos;
    QAction *actionSobre_o_Grupo;
    QAction *actionAgradecimentos;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
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
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"	background-color: rgb(8, 108, 162);\n"
"}\n"
"\n"
"QToolBar {\n"
"    background:rgb(8, 108, 162);\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"	padding: 5px 5px;\n"
"	border-color: rgb(8, 108, 162);\n"
"}\n"
"\n"
"QToolButton {\n"
"  background: transparent; \n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: rgb(100, 171, 208);\n"
"	border-radius: 3px;\n"
"}\n"
"\n"
"#centralwidget{\n"
"	background-color:rgb(100, 171, 208);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QMenuBar {\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(3, 69, 105);\n"
"    spacing: 3px; /* spacing between menu bar items */\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 1px 4px;\n"
"    background: transparent;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
" background:rgb(4, 92, 139);\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background:rgb(4, 92, 139);\n"
"}\n"
"#statusbar{\n"
"  background-colo"
                        "r: white;\n"
"}\n"
"\n"
"#tabWidget{\n"
"	background-color: white;\n"
"	border: 3px solid rgb(0, 85, 0);\n"
"	border-radius: 10px;\n"
"	border-color: rgb(255, 85, 0);\n"
"}\n"
"QTabWidget::pane {\n"
"  border: 1px solid rgb(8, 108, 162);\n"
"  border-bottom-left-radius: 10px;\n"
"  border-bottom-right-radius: 10px;\n"
"  top:-1px; \n"
"  background-image: url(:/imagem/Imagens/merchandising-de-mercearia.png) no-repeat center center fixed;\n"
"  background-size: 50px 50px;\n"
"\n"
"} \n"
"\n"
"QTabBar::tab {\n"
"  background: rgb(3, 69, 105); \n"
"  border: 1px solid rgb(8, 108, 162);\n"
"  border-top-left-radius: 10px;\n"
"  border-top-right-radius: 10px;\n"
"  color: rgb(255, 255, 255);\n"
"  padding: 5px;\n"
"  width: 150px;\n"
"  height:20px;\n"
"} \n"
"\n"
"QTabBar::tab:selected { \n"
"  background:rgb(100, 171, 208); \n"
"  font: 100 10pt \"MS Shell Dlg 2\";\n"
"  color: rgb(0, 0, 0);\n"
"  margin-bottom: -1px; \n"
"}"));
        action_Cadastrar = new QAction(MainWindow);
        action_Cadastrar->setObjectName(QString::fromUtf8("action_Cadastrar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagem/Imagens/adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cadastrar->setIcon(icon);
        action_Gerenciar_Produtos = new QAction(MainWindow);
        action_Gerenciar_Produtos->setObjectName(QString::fromUtf8("action_Gerenciar_Produtos"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagem/Imagens/relatorio.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Gerenciar_Produtos->setIcon(icon1);
        actionSobre_o_Grupo = new QAction(MainWindow);
        actionSobre_o_Grupo->setObjectName(QString::fromUtf8("actionSobre_o_Grupo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagem/Imagens/ponto-de-exclamacao.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre_o_Grupo->setIcon(icon2);
        actionAgradecimentos = new QAction(MainWindow);
        actionAgradecimentos->setObjectName(QString::fromUtf8("actionAgradecimentos"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 500));
        QFont font;
        font.setBold(false);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("#tabWidget{\n"
"	background-color: white;\n"
"	border-radius: 10px;\n"
"}"));
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setStyleSheet(QString::fromUtf8("<h1>\n"
"Vers\303\243o 1.0\n"
"<h1>\n"
"\n"
""));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 878, 18));
        menu_Produto = new QMenu(menubar);
        menu_Produto->setObjectName(QString::fromUtf8("menu_Produto"));
        menu_Relatorio = new QMenu(menubar);
        menu_Relatorio->setObjectName(QString::fromUtf8("menu_Relatorio"));
        menu_Funcionario = new QMenu(menubar);
        menu_Funcionario->setObjectName(QString::fromUtf8("menu_Funcionario"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(30, 30));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_Produto->menuAction());
        menubar->addAction(menu_Relatorio->menuAction());
        menubar->addAction(menu_Funcionario->menuAction());
        menu_Produto->addAction(action_Cadastrar);
        menu_Relatorio->addAction(action_Gerenciar_Produtos);
        menu_Funcionario->addAction(actionSobre_o_Grupo);
        menu_Funcionario->addAction(actionAgradecimentos);
        toolBar->addAction(action_Cadastrar);
        toolBar->addAction(action_Gerenciar_Produtos);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Estoque Master 2000", nullptr));
        action_Cadastrar->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
#if QT_CONFIG(tooltip)
        action_Cadastrar->setToolTip(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Gerenciar_Produtos->setText(QCoreApplication::translate("MainWindow", "Gerenciar Produtos", nullptr));
        actionSobre_o_Grupo->setText(QCoreApplication::translate("MainWindow", "Sobre o Grupo", nullptr));
        actionAgradecimentos->setText(QCoreApplication::translate("MainWindow", "Agradecimentos", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Vers\303\243o 1.0", nullptr));
        menu_Produto->setTitle(QCoreApplication::translate("MainWindow", "Produto", nullptr));
        menu_Relatorio->setTitle(QCoreApplication::translate("MainWindow", "Gerenciar", nullptr));
        menu_Funcionario->setTitle(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
