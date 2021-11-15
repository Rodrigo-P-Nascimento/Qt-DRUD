/********************************************************************************
** Form generated from reading UI file 'relatorio_de_produtos.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELATORIO_DE_PRODUTOS_H
#define UI_RELATORIO_DE_PRODUTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_relatorio_de_produtos
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QTableWidget *tableWidget_Produtos;

    void setupUi(QWidget *relatorio_de_produtos)
    {
        if (relatorio_de_produtos->objectName().isEmpty())
            relatorio_de_produtos->setObjectName(QString::fromUtf8("relatorio_de_produtos"));
        relatorio_de_produtos->resize(800, 600);
        relatorio_de_produtos->setMinimumSize(QSize(800, 600));
        verticalLayout_2 = new QVBoxLayout(relatorio_de_produtos);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(relatorio_de_produtos);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 580));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea_2 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 760, 560));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(scrollAreaWidgetContents_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        verticalLayout_3->addLayout(formLayout);

        tableWidget_Produtos = new QTableWidget(scrollAreaWidgetContents_2);
        tableWidget_Produtos->setObjectName(QString::fromUtf8("tableWidget_Produtos"));
        tableWidget_Produtos->setEnabled(false);
        tableWidget_Produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Produtos->setAlternatingRowColors(true);
        tableWidget_Produtos->setSortingEnabled(false);

        verticalLayout_3->addWidget(tableWidget_Produtos);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(relatorio_de_produtos);

        QMetaObject::connectSlotsByName(relatorio_de_produtos);
    } // setupUi

    void retranslateUi(QWidget *relatorio_de_produtos)
    {
        relatorio_de_produtos->setWindowTitle(QCoreApplication::translate("relatorio_de_produtos", "Form", nullptr));
        label->setText(QCoreApplication::translate("relatorio_de_produtos", "Se\303\247\303\243o:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("relatorio_de_produtos", "Selecionar", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("relatorio_de_produtos", "A\303\247ougue e Frios", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("relatorio_de_produtos", "Bebidas", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("relatorio_de_produtos", "Limpeza", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("relatorio_de_produtos", "Mercearia", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("relatorio_de_produtos", "Padaria", nullptr));

    } // retranslateUi

};

namespace Ui {
    class relatorio_de_produtos: public Ui_relatorio_de_produtos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATORIO_DE_PRODUTOS_H
