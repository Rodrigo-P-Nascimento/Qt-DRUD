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
#include <QtWidgets/QFormLayout>
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
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QPushButton *BTN_CADS_MERC;
    QLabel *label_3;
    QPushButton *BTN_ATLZ_MERC;
    QLabel *label_4;
    QPushButton *BTN_IMRT_MERC;
    QLabel *label_5;
    QPushButton *BTN_REMV_MERC;
    QLabel *label_6;
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
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 211, 131));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(20, 20));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imagens/Imagens/adicionar.png")));
        label_2->setScaledContents(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        BTN_CADS_MERC = new QPushButton(formLayoutWidget);
        BTN_CADS_MERC->setObjectName(QString::fromUtf8("BTN_CADS_MERC"));

        formLayout->setWidget(0, QFormLayout::FieldRole, BTN_CADS_MERC);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(20, 20));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagens/Imagens/recarregar.png")));
        label_3->setScaledContents(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        BTN_ATLZ_MERC = new QPushButton(formLayoutWidget);
        BTN_ATLZ_MERC->setObjectName(QString::fromUtf8("BTN_ATLZ_MERC"));

        formLayout->setWidget(1, QFormLayout::FieldRole, BTN_ATLZ_MERC);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(20, 20));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imagens/Imagens/relatorio.png")));
        label_4->setScaledContents(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        BTN_IMRT_MERC = new QPushButton(formLayoutWidget);
        BTN_IMRT_MERC->setObjectName(QString::fromUtf8("BTN_IMRT_MERC"));

        formLayout->setWidget(2, QFormLayout::FieldRole, BTN_IMRT_MERC);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(20, 20));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/imagens/Imagens/lixeira.png")));
        label_5->setScaledContents(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        BTN_REMV_MERC = new QPushButton(formLayoutWidget);
        BTN_REMV_MERC->setObjectName(QString::fromUtf8("BTN_REMV_MERC"));

        formLayout->setWidget(3, QFormLayout::FieldRole, BTN_REMV_MERC);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(470, 160, 300, 300));
        label_6->setMinimumSize(QSize(300, 300));
        label_6->setMaximumSize(QSize(300, 300));
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAutoFillBackground(false);
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/imagens/Imagens/mercearia.png")));
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
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
        label_2->setText(QString());
        BTN_CADS_MERC->setText(QCoreApplication::translate("Menu", "Cadastrar", nullptr));
        label_3->setText(QString());
        BTN_ATLZ_MERC->setText(QCoreApplication::translate("Menu", "Atualizar", nullptr));
        label_4->setText(QString());
        BTN_IMRT_MERC->setText(QCoreApplication::translate("Menu", "Imprimir Relatorio", nullptr));
        label_5->setText(QString());
        BTN_REMV_MERC->setText(QCoreApplication::translate("Menu", "Remover", nullptr));
        label_6->setText(QString());
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
