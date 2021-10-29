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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *BTN_CADS_MERC;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(800, 600);
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
        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 171, 221));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        BTN_CADS_MERC = new QPushButton(gridLayoutWidget_2);
        BTN_CADS_MERC->setObjectName(QString::fromUtf8("BTN_CADS_MERC"));

        gridLayout_2->addWidget(BTN_CADS_MERC, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_2->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_2->addWidget(pushButton_9, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_2->addWidget(pushButton_8, 1, 0, 1, 1);

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
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Menu->setStatusBar(statusbar);

        retranslateUi(Menu);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Menu", nullptr));
        label->setText(QCoreApplication::translate("Menu", "Escolha uma das sec\303\247\303\265es para trabalhar", nullptr));
        BTN_CADS_MERC->setText(QCoreApplication::translate("Menu", "Cadastrar", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Menu", "Remover", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Menu", "Imprimir Relatorio", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Menu", "Atualizar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Menu", "Mercearia", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Menu", "Padaria", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Menu", "Frios/A\303\247ougue", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Menu", "Bebidas", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Menu", "Limpeza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
