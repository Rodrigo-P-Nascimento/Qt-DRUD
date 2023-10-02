/********************************************************************************
** Form generated from reading UI file 'relatorio_de_produtos.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_relatorio_de_produtos
{
public:
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QTableWidget *tableWidget_Produtos;
    QHBoxLayout *horizontalLayout;
    QPushButton *BTN_EXCLUIR;
    QPushButton *BTN_EDITAR;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *relatorio_de_produtos)
    {
        if (relatorio_de_produtos->objectName().isEmpty())
            relatorio_de_produtos->setObjectName("relatorio_de_produtos");
        relatorio_de_produtos->resize(800, 600);
        relatorio_de_produtos->setMinimumSize(QSize(0, 0));
        horizontalLayout_3 = new QHBoxLayout(relatorio_de_produtos);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        scrollArea = new QScrollArea(relatorio_de_produtos);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 818, 563));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea_2 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setMinimumSize(QSize(800, 500));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 798, 543));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(scrollAreaWidgetContents_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        verticalLayout->addLayout(formLayout);

        tableWidget_Produtos = new QTableWidget(scrollAreaWidgetContents_2);
        tableWidget_Produtos->setObjectName("tableWidget_Produtos");
        tableWidget_Produtos->setEnabled(false);
        tableWidget_Produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Produtos->setAlternatingRowColors(true);
        tableWidget_Produtos->setSortingEnabled(true);

        verticalLayout->addWidget(tableWidget_Produtos);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        BTN_EXCLUIR = new QPushButton(scrollAreaWidgetContents_2);
        BTN_EXCLUIR->setObjectName("BTN_EXCLUIR");
        BTN_EXCLUIR->setEnabled(false);

        horizontalLayout->addWidget(BTN_EXCLUIR);

        BTN_EDITAR = new QPushButton(scrollAreaWidgetContents_2);
        BTN_EDITAR->setObjectName("BTN_EDITAR");
        BTN_EDITAR->setEnabled(false);

        horizontalLayout->addWidget(BTN_EDITAR);

        horizontalSpacer = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_3->addWidget(scrollArea);


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

        BTN_EXCLUIR->setText(QCoreApplication::translate("relatorio_de_produtos", "Excluir", nullptr));
        BTN_EDITAR->setText(QCoreApplication::translate("relatorio_de_produtos", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class relatorio_de_produtos: public Ui_relatorio_de_produtos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATORIO_DE_PRODUTOS_H
