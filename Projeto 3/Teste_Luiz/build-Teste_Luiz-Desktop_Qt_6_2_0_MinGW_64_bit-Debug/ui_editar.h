/********************************************************************************
** Form generated from reading UI file 'editar.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITAR_H
#define UI_EDITAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editar
{
public:
    QHBoxLayout *horizontalLayout_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFormLayout *formLayout_17;
    QFormLayout *formLayout;
    QLabel *label_Nome_do_Produto;
    QLineEdit *lineEdit_Nome_de_Produto;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_Codigo;
    QSpinBox *spinBox_Codigo;
    QFormLayout *formLayout_3;
    QLabel *label_Preco;
    QDoubleSpinBox *doubleSpinBox_Preco;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout_4;
    QLabel *label_Data_de_Fabricacao;
    QDateEdit *dateEdit_Data_de_Fabricacao;
    QFormLayout *formLayout_5;
    QLabel *label_Data_de_Validade;
    QDateEdit *dateEdit_Data_de_Validade;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_6;
    QLabel *label_Unidades;
    QSpinBox *spinBox_Unidades;
    QFormLayout *formLayout_7;
    QLabel *label_Peso;
    QDoubleSpinBox *doubleSpinBox_Peso;
    QFormLayout *formLayout_8;
    QLabel *label_Volume_por_Unidade;
    QDoubleSpinBox *doubleSpinBox_Volume_por_Unidade;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout_9;
    QLabel *label_Gluten;
    QComboBox *comboBox_Gluten;
    QFormLayout *formLayout_10;
    QLabel *label_Alcoolica;
    QComboBox *comboBox_Alcoolica;
    QFormLayout *formLayout_11;
    QLabel *label_Gaseificada;
    QComboBox *comboBox_Gaseificada;
    QFormLayout *formLayout_12;
    QLabel *label_Fragrancia;
    QLineEdit *lineEdit_Fragrancia;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_Dados_do_Fornecedor;
    QFormLayout *formLayout_15;
    QLabel *label_Nome_do_Fornecedor;
    QLineEdit *lineEdit_Nome_do_Fornecedor;
    QFormLayout *formLayout_14;
    QLabel *label_Pais_Sede;
    QComboBox *comboBox_Pais_Sede;
    QFormLayout *formLayout_13;
    QLabel *label_Estado_Sede;
    QLineEdit *lineEdit_Estado_Sede;
    QFormLayout *formLayout_16;
    QLabel *label_Cidade_Sede;
    QLineEdit *lineEdit_Cidade_Sede;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *BTN_SALVAR;
    QPushButton *BTN_CALCELAR;

    void setupUi(QDialog *editar)
    {
        if (editar->objectName().isEmpty())
            editar->setObjectName(QString::fromUtf8("editar"));
        editar->resize(853, 628);
        editar->setMinimumSize(QSize(800, 600));
        horizontalLayout_7 = new QHBoxLayout(editar);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        scrollArea = new QScrollArea(editar);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 833, 608));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea_2 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setMinimumSize(QSize(800, 500));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 813, 588));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        formLayout_17 = new QFormLayout();
        formLayout_17->setObjectName(QString::fromUtf8("formLayout_17"));

        verticalLayout_3->addLayout(formLayout_17);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_Nome_do_Produto = new QLabel(scrollAreaWidgetContents_2);
        label_Nome_do_Produto->setObjectName(QString::fromUtf8("label_Nome_do_Produto"));
        label_Nome_do_Produto->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_Nome_do_Produto);

        lineEdit_Nome_de_Produto = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Nome_de_Produto->setObjectName(QString::fromUtf8("lineEdit_Nome_de_Produto"));
        lineEdit_Nome_de_Produto->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_Nome_de_Produto);


        verticalLayout_3->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_Codigo = new QLabel(scrollAreaWidgetContents_2);
        label_Codigo->setObjectName(QString::fromUtf8("label_Codigo"));
        label_Codigo->setEnabled(false);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_Codigo);

        spinBox_Codigo = new QSpinBox(scrollAreaWidgetContents_2);
        spinBox_Codigo->setObjectName(QString::fromUtf8("spinBox_Codigo"));
        spinBox_Codigo->setEnabled(false);
        spinBox_Codigo->setMaximum(99999);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinBox_Codigo);


        horizontalLayout->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_Preco = new QLabel(scrollAreaWidgetContents_2);
        label_Preco->setObjectName(QString::fromUtf8("label_Preco"));
        label_Preco->setEnabled(false);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_Preco);

        doubleSpinBox_Preco = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_Preco->setObjectName(QString::fromUtf8("doubleSpinBox_Preco"));
        doubleSpinBox_Preco->setEnabled(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_Preco);


        horizontalLayout->addLayout(formLayout_3);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_Data_de_Fabricacao = new QLabel(scrollAreaWidgetContents_2);
        label_Data_de_Fabricacao->setObjectName(QString::fromUtf8("label_Data_de_Fabricacao"));
        label_Data_de_Fabricacao->setEnabled(false);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_Data_de_Fabricacao);

        dateEdit_Data_de_Fabricacao = new QDateEdit(scrollAreaWidgetContents_2);
        dateEdit_Data_de_Fabricacao->setObjectName(QString::fromUtf8("dateEdit_Data_de_Fabricacao"));
        dateEdit_Data_de_Fabricacao->setEnabled(false);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, dateEdit_Data_de_Fabricacao);


        horizontalLayout_2->addLayout(formLayout_4);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_Data_de_Validade = new QLabel(scrollAreaWidgetContents_2);
        label_Data_de_Validade->setObjectName(QString::fromUtf8("label_Data_de_Validade"));
        label_Data_de_Validade->setEnabled(false);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_Data_de_Validade);

        dateEdit_Data_de_Validade = new QDateEdit(scrollAreaWidgetContents_2);
        dateEdit_Data_de_Validade->setObjectName(QString::fromUtf8("dateEdit_Data_de_Validade"));
        dateEdit_Data_de_Validade->setEnabled(false);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, dateEdit_Data_de_Validade);


        horizontalLayout_2->addLayout(formLayout_5);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_Unidades = new QLabel(scrollAreaWidgetContents_2);
        label_Unidades->setObjectName(QString::fromUtf8("label_Unidades"));
        label_Unidades->setEnabled(false);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_Unidades);

        spinBox_Unidades = new QSpinBox(scrollAreaWidgetContents_2);
        spinBox_Unidades->setObjectName(QString::fromUtf8("spinBox_Unidades"));
        spinBox_Unidades->setEnabled(false);
        spinBox_Unidades->setMaximum(99999);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, spinBox_Unidades);


        horizontalLayout_3->addLayout(formLayout_6);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label_Peso = new QLabel(scrollAreaWidgetContents_2);
        label_Peso->setObjectName(QString::fromUtf8("label_Peso"));
        label_Peso->setEnabled(false);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_Peso);

        doubleSpinBox_Peso = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_Peso->setObjectName(QString::fromUtf8("doubleSpinBox_Peso"));
        doubleSpinBox_Peso->setEnabled(false);
        doubleSpinBox_Peso->setDecimals(3);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_Peso);


        horizontalLayout_3->addLayout(formLayout_7);


        verticalLayout_3->addLayout(horizontalLayout_3);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        label_Volume_por_Unidade = new QLabel(scrollAreaWidgetContents_2);
        label_Volume_por_Unidade->setObjectName(QString::fromUtf8("label_Volume_por_Unidade"));
        label_Volume_por_Unidade->setEnabled(false);

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_Volume_por_Unidade);

        doubleSpinBox_Volume_por_Unidade = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_Volume_por_Unidade->setObjectName(QString::fromUtf8("doubleSpinBox_Volume_por_Unidade"));
        doubleSpinBox_Volume_por_Unidade->setEnabled(false);
        doubleSpinBox_Volume_por_Unidade->setDecimals(3);
        doubleSpinBox_Volume_por_Unidade->setMaximum(999.000000000000000);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_Volume_por_Unidade);


        verticalLayout_3->addLayout(formLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        label_Gluten = new QLabel(scrollAreaWidgetContents_2);
        label_Gluten->setObjectName(QString::fromUtf8("label_Gluten"));
        label_Gluten->setEnabled(false);

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_Gluten);

        comboBox_Gluten = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_Gluten->addItem(QString());
        comboBox_Gluten->addItem(QString());
        comboBox_Gluten->addItem(QString());
        comboBox_Gluten->setObjectName(QString::fromUtf8("comboBox_Gluten"));
        comboBox_Gluten->setEnabled(false);

        formLayout_9->setWidget(0, QFormLayout::FieldRole, comboBox_Gluten);


        horizontalLayout_4->addLayout(formLayout_9);

        formLayout_10 = new QFormLayout();
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        label_Alcoolica = new QLabel(scrollAreaWidgetContents_2);
        label_Alcoolica->setObjectName(QString::fromUtf8("label_Alcoolica"));
        label_Alcoolica->setEnabled(false);

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_Alcoolica);

        comboBox_Alcoolica = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_Alcoolica->addItem(QString());
        comboBox_Alcoolica->addItem(QString());
        comboBox_Alcoolica->addItem(QString());
        comboBox_Alcoolica->setObjectName(QString::fromUtf8("comboBox_Alcoolica"));
        comboBox_Alcoolica->setEnabled(false);

        formLayout_10->setWidget(0, QFormLayout::FieldRole, comboBox_Alcoolica);


        horizontalLayout_4->addLayout(formLayout_10);

        formLayout_11 = new QFormLayout();
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        label_Gaseificada = new QLabel(scrollAreaWidgetContents_2);
        label_Gaseificada->setObjectName(QString::fromUtf8("label_Gaseificada"));
        label_Gaseificada->setEnabled(false);

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_Gaseificada);

        comboBox_Gaseificada = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_Gaseificada->addItem(QString());
        comboBox_Gaseificada->addItem(QString());
        comboBox_Gaseificada->addItem(QString());
        comboBox_Gaseificada->setObjectName(QString::fromUtf8("comboBox_Gaseificada"));
        comboBox_Gaseificada->setEnabled(false);

        formLayout_11->setWidget(0, QFormLayout::FieldRole, comboBox_Gaseificada);


        horizontalLayout_4->addLayout(formLayout_11);


        verticalLayout_3->addLayout(horizontalLayout_4);

        formLayout_12 = new QFormLayout();
        formLayout_12->setObjectName(QString::fromUtf8("formLayout_12"));
        label_Fragrancia = new QLabel(scrollAreaWidgetContents_2);
        label_Fragrancia->setObjectName(QString::fromUtf8("label_Fragrancia"));
        label_Fragrancia->setEnabled(false);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, label_Fragrancia);

        lineEdit_Fragrancia = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Fragrancia->setObjectName(QString::fromUtf8("lineEdit_Fragrancia"));
        lineEdit_Fragrancia->setEnabled(false);

        formLayout_12->setWidget(0, QFormLayout::FieldRole, lineEdit_Fragrancia);


        verticalLayout_3->addLayout(formLayout_12);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_Dados_do_Fornecedor = new QLabel(scrollAreaWidgetContents_2);
        label_Dados_do_Fornecedor->setObjectName(QString::fromUtf8("label_Dados_do_Fornecedor"));
        label_Dados_do_Fornecedor->setEnabled(false);
        label_Dados_do_Fornecedor->setFont(font);

        verticalLayout_3->addWidget(label_Dados_do_Fornecedor);

        formLayout_15 = new QFormLayout();
        formLayout_15->setObjectName(QString::fromUtf8("formLayout_15"));
        label_Nome_do_Fornecedor = new QLabel(scrollAreaWidgetContents_2);
        label_Nome_do_Fornecedor->setObjectName(QString::fromUtf8("label_Nome_do_Fornecedor"));
        label_Nome_do_Fornecedor->setEnabled(false);

        formLayout_15->setWidget(0, QFormLayout::LabelRole, label_Nome_do_Fornecedor);

        lineEdit_Nome_do_Fornecedor = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Nome_do_Fornecedor->setObjectName(QString::fromUtf8("lineEdit_Nome_do_Fornecedor"));
        lineEdit_Nome_do_Fornecedor->setEnabled(false);

        formLayout_15->setWidget(0, QFormLayout::FieldRole, lineEdit_Nome_do_Fornecedor);


        verticalLayout_3->addLayout(formLayout_15);

        formLayout_14 = new QFormLayout();
        formLayout_14->setObjectName(QString::fromUtf8("formLayout_14"));
        label_Pais_Sede = new QLabel(scrollAreaWidgetContents_2);
        label_Pais_Sede->setObjectName(QString::fromUtf8("label_Pais_Sede"));
        label_Pais_Sede->setEnabled(false);

        formLayout_14->setWidget(0, QFormLayout::LabelRole, label_Pais_Sede);

        comboBox_Pais_Sede = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->addItem(QString());
        comboBox_Pais_Sede->setObjectName(QString::fromUtf8("comboBox_Pais_Sede"));
        comboBox_Pais_Sede->setEnabled(false);

        formLayout_14->setWidget(0, QFormLayout::FieldRole, comboBox_Pais_Sede);


        verticalLayout_3->addLayout(formLayout_14);

        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        label_Estado_Sede = new QLabel(scrollAreaWidgetContents_2);
        label_Estado_Sede->setObjectName(QString::fromUtf8("label_Estado_Sede"));
        label_Estado_Sede->setEnabled(false);

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_Estado_Sede);

        lineEdit_Estado_Sede = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Estado_Sede->setObjectName(QString::fromUtf8("lineEdit_Estado_Sede"));
        lineEdit_Estado_Sede->setEnabled(false);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, lineEdit_Estado_Sede);


        verticalLayout_3->addLayout(formLayout_13);

        formLayout_16 = new QFormLayout();
        formLayout_16->setObjectName(QString::fromUtf8("formLayout_16"));
        label_Cidade_Sede = new QLabel(scrollAreaWidgetContents_2);
        label_Cidade_Sede->setObjectName(QString::fromUtf8("label_Cidade_Sede"));
        label_Cidade_Sede->setEnabled(false);

        formLayout_16->setWidget(0, QFormLayout::LabelRole, label_Cidade_Sede);

        lineEdit_Cidade_Sede = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Cidade_Sede->setObjectName(QString::fromUtf8("lineEdit_Cidade_Sede"));
        lineEdit_Cidade_Sede->setEnabled(false);

        formLayout_16->setWidget(0, QFormLayout::FieldRole, lineEdit_Cidade_Sede);


        verticalLayout_3->addLayout(formLayout_16);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        BTN_SALVAR = new QPushButton(scrollAreaWidgetContents_2);
        BTN_SALVAR->setObjectName(QString::fromUtf8("BTN_SALVAR"));
        BTN_SALVAR->setEnabled(true);

        horizontalLayout_5->addWidget(BTN_SALVAR);

        BTN_CALCELAR = new QPushButton(scrollAreaWidgetContents_2);
        BTN_CALCELAR->setObjectName(QString::fromUtf8("BTN_CALCELAR"));

        horizontalLayout_5->addWidget(BTN_CALCELAR);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout_3);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_7->addWidget(scrollArea);


        retranslateUi(editar);

        QMetaObject::connectSlotsByName(editar);
    } // setupUi

    void retranslateUi(QDialog *editar)
    {
        editar->setWindowTitle(QCoreApplication::translate("editar", "Editar", nullptr));
        label->setText(QCoreApplication::translate("editar", "Dados do Produto", nullptr));
        label_Nome_do_Produto->setText(QCoreApplication::translate("editar", "Nome do Produto:", nullptr));
        label_Codigo->setText(QCoreApplication::translate("editar", "C\303\263digo:", nullptr));
        label_Preco->setText(QCoreApplication::translate("editar", "Pre\303\247o:", nullptr));
        label_Data_de_Fabricacao->setText(QCoreApplication::translate("editar", "Data de Fabrica\303\247\303\243o:", nullptr));
        label_Data_de_Validade->setText(QCoreApplication::translate("editar", "Data de Validade:", nullptr));
        label_Unidades->setText(QCoreApplication::translate("editar", "Unidades:", nullptr));
        label_Peso->setText(QCoreApplication::translate("editar", "Peso:", nullptr));
        label_Volume_por_Unidade->setText(QCoreApplication::translate("editar", "Volume em litros/Unidade:", nullptr));
        label_Gluten->setText(QCoreApplication::translate("editar", "Gl\303\272ten:", nullptr));
        comboBox_Gluten->setItemText(0, QCoreApplication::translate("editar", "Selecionar", nullptr));
        comboBox_Gluten->setItemText(1, QCoreApplication::translate("editar", "Sim", nullptr));
        comboBox_Gluten->setItemText(2, QCoreApplication::translate("editar", "N\303\243o", nullptr));

        label_Alcoolica->setText(QCoreApplication::translate("editar", "Alco\303\263lica:", nullptr));
        comboBox_Alcoolica->setItemText(0, QCoreApplication::translate("editar", "Selecionar", nullptr));
        comboBox_Alcoolica->setItemText(1, QCoreApplication::translate("editar", "Sim", nullptr));
        comboBox_Alcoolica->setItemText(2, QCoreApplication::translate("editar", "N\303\243o", nullptr));

        label_Gaseificada->setText(QCoreApplication::translate("editar", "Gaseificada:", nullptr));
        comboBox_Gaseificada->setItemText(0, QCoreApplication::translate("editar", "Selecionar", nullptr));
        comboBox_Gaseificada->setItemText(1, QCoreApplication::translate("editar", "Sim", nullptr));
        comboBox_Gaseificada->setItemText(2, QCoreApplication::translate("editar", "N\303\243o", nullptr));

        label_Fragrancia->setText(QCoreApplication::translate("editar", "Fragr\303\242ncia:", nullptr));
        label_Dados_do_Fornecedor->setText(QCoreApplication::translate("editar", "Dados do Fornecedor", nullptr));
        label_Nome_do_Fornecedor->setText(QCoreApplication::translate("editar", "Nome do Fornecedor:", nullptr));
        label_Pais_Sede->setText(QCoreApplication::translate("editar", "Pa\303\255s Sede:", nullptr));
        comboBox_Pais_Sede->setItemText(0, QCoreApplication::translate("editar", "Selecionar", nullptr));
        comboBox_Pais_Sede->setItemText(1, QCoreApplication::translate("editar", "Afeganist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(2, QCoreApplication::translate("editar", "\303\201frica do Sul", nullptr));
        comboBox_Pais_Sede->setItemText(3, QCoreApplication::translate("editar", "Alb\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(4, QCoreApplication::translate("editar", "Alemanha", nullptr));
        comboBox_Pais_Sede->setItemText(5, QCoreApplication::translate("editar", "Andorra", nullptr));
        comboBox_Pais_Sede->setItemText(6, QCoreApplication::translate("editar", "Angola", nullptr));
        comboBox_Pais_Sede->setItemText(7, QCoreApplication::translate("editar", "Anguilla", nullptr));
        comboBox_Pais_Sede->setItemText(8, QCoreApplication::translate("editar", "Antilhas Holandesas", nullptr));
        comboBox_Pais_Sede->setItemText(9, QCoreApplication::translate("editar", "Ant\303\241rctida", nullptr));
        comboBox_Pais_Sede->setItemText(10, QCoreApplication::translate("editar", "Ant\303\255gua e Barbuda", nullptr));
        comboBox_Pais_Sede->setItemText(11, QCoreApplication::translate("editar", "Argentina", nullptr));
        comboBox_Pais_Sede->setItemText(12, QCoreApplication::translate("editar", "Arg\303\251lia", nullptr));
        comboBox_Pais_Sede->setItemText(13, QCoreApplication::translate("editar", "Arm\303\252nia", nullptr));
        comboBox_Pais_Sede->setItemText(14, QCoreApplication::translate("editar", "Aruba", nullptr));
        comboBox_Pais_Sede->setItemText(15, QCoreApplication::translate("editar", "Ar\303\241bia Saudita", nullptr));
        comboBox_Pais_Sede->setItemText(16, QCoreApplication::translate("editar", "Austr\303\241lia", nullptr));
        comboBox_Pais_Sede->setItemText(17, QCoreApplication::translate("editar", "\303\201ustria", nullptr));
        comboBox_Pais_Sede->setItemText(18, QCoreApplication::translate("editar", "Azerbaij\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(19, QCoreApplication::translate("editar", "Bahamas", nullptr));
        comboBox_Pais_Sede->setItemText(20, QCoreApplication::translate("editar", "Bahrein", nullptr));
        comboBox_Pais_Sede->setItemText(21, QCoreApplication::translate("editar", "Bangladesh", nullptr));
        comboBox_Pais_Sede->setItemText(22, QCoreApplication::translate("editar", "Barbados", nullptr));
        comboBox_Pais_Sede->setItemText(23, QCoreApplication::translate("editar", "Belize", nullptr));
        comboBox_Pais_Sede->setItemText(24, QCoreApplication::translate("editar", "Benim", nullptr));
        comboBox_Pais_Sede->setItemText(25, QCoreApplication::translate("editar", "Bermudas", nullptr));
        comboBox_Pais_Sede->setItemText(26, QCoreApplication::translate("editar", "Bielorr\303\272ssia", nullptr));
        comboBox_Pais_Sede->setItemText(27, QCoreApplication::translate("editar", "Bol\303\255via", nullptr));
        comboBox_Pais_Sede->setItemText(28, QCoreApplication::translate("editar", "Botswana", nullptr));
        comboBox_Pais_Sede->setItemText(29, QCoreApplication::translate("editar", "Brasil", nullptr));
        comboBox_Pais_Sede->setItemText(30, QCoreApplication::translate("editar", "Brunei", nullptr));
        comboBox_Pais_Sede->setItemText(31, QCoreApplication::translate("editar", "Bulg\303\241ria", nullptr));
        comboBox_Pais_Sede->setItemText(32, QCoreApplication::translate("editar", "Burkina Faso", nullptr));
        comboBox_Pais_Sede->setItemText(33, QCoreApplication::translate("editar", "Burundi", nullptr));
        comboBox_Pais_Sede->setItemText(34, QCoreApplication::translate("editar", "But\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(35, QCoreApplication::translate("editar", "B\303\251lgica", nullptr));
        comboBox_Pais_Sede->setItemText(36, QCoreApplication::translate("editar", "B\303\263snia e Herzegovina", nullptr));
        comboBox_Pais_Sede->setItemText(37, QCoreApplication::translate("editar", "Cabo Verde", nullptr));
        comboBox_Pais_Sede->setItemText(38, QCoreApplication::translate("editar", "Camar\303\265es", nullptr));
        comboBox_Pais_Sede->setItemText(39, QCoreApplication::translate("editar", "Camboja", nullptr));
        comboBox_Pais_Sede->setItemText(40, QCoreApplication::translate("editar", "Canad\303\241", nullptr));
        comboBox_Pais_Sede->setItemText(41, QCoreApplication::translate("editar", "Catar", nullptr));
        comboBox_Pais_Sede->setItemText(42, QCoreApplication::translate("editar", "Cazaquist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(43, QCoreApplication::translate("editar", "Chade", nullptr));
        comboBox_Pais_Sede->setItemText(44, QCoreApplication::translate("editar", "Chile", nullptr));
        comboBox_Pais_Sede->setItemText(45, QCoreApplication::translate("editar", "China", nullptr));
        comboBox_Pais_Sede->setItemText(46, QCoreApplication::translate("editar", "Chipre", nullptr));
        comboBox_Pais_Sede->setItemText(47, QCoreApplication::translate("editar", "Col\303\264mbia", nullptr));
        comboBox_Pais_Sede->setItemText(48, QCoreApplication::translate("editar", "Comores", nullptr));
        comboBox_Pais_Sede->setItemText(49, QCoreApplication::translate("editar", "Coreia do Norte", nullptr));
        comboBox_Pais_Sede->setItemText(50, QCoreApplication::translate("editar", "Coreia do Sul", nullptr));
        comboBox_Pais_Sede->setItemText(51, QCoreApplication::translate("editar", "Costa do Marfim", nullptr));
        comboBox_Pais_Sede->setItemText(52, QCoreApplication::translate("editar", "Costa Rica", nullptr));
        comboBox_Pais_Sede->setItemText(53, QCoreApplication::translate("editar", "Cro\303\241cia", nullptr));
        comboBox_Pais_Sede->setItemText(54, QCoreApplication::translate("editar", "Cuba", nullptr));
        comboBox_Pais_Sede->setItemText(55, QCoreApplication::translate("editar", "Dinamarca", nullptr));
        comboBox_Pais_Sede->setItemText(56, QCoreApplication::translate("editar", "Djibouti", nullptr));
        comboBox_Pais_Sede->setItemText(57, QCoreApplication::translate("editar", "Dominica", nullptr));
        comboBox_Pais_Sede->setItemText(58, QCoreApplication::translate("editar", "Egito", nullptr));
        comboBox_Pais_Sede->setItemText(59, QCoreApplication::translate("editar", "El Salvador", nullptr));
        comboBox_Pais_Sede->setItemText(60, QCoreApplication::translate("editar", "Emirados \303\201rabes Unidos", nullptr));
        comboBox_Pais_Sede->setItemText(61, QCoreApplication::translate("editar", "Equador", nullptr));
        comboBox_Pais_Sede->setItemText(62, QCoreApplication::translate("editar", "Eritreia", nullptr));
        comboBox_Pais_Sede->setItemText(63, QCoreApplication::translate("editar", "Esc\303\263cia", nullptr));
        comboBox_Pais_Sede->setItemText(64, QCoreApplication::translate("editar", "Eslov\303\241quia", nullptr));
        comboBox_Pais_Sede->setItemText(65, QCoreApplication::translate("editar", "Eslov\303\252nia", nullptr));
        comboBox_Pais_Sede->setItemText(66, QCoreApplication::translate("editar", "Espanha", nullptr));
        comboBox_Pais_Sede->setItemText(67, QCoreApplication::translate("editar", "Estados Federados da Micron\303\251sia", nullptr));
        comboBox_Pais_Sede->setItemText(68, QCoreApplication::translate("editar", "Estados Unidos", nullptr));
        comboBox_Pais_Sede->setItemText(69, QCoreApplication::translate("editar", "Est\303\264nia", nullptr));
        comboBox_Pais_Sede->setItemText(70, QCoreApplication::translate("editar", "Eti\303\263pia", nullptr));
        comboBox_Pais_Sede->setItemText(71, QCoreApplication::translate("editar", "Fiji", nullptr));
        comboBox_Pais_Sede->setItemText(72, QCoreApplication::translate("editar", "Filipinas", nullptr));
        comboBox_Pais_Sede->setItemText(73, QCoreApplication::translate("editar", "Finl\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(74, QCoreApplication::translate("editar", "Fran\303\247a", nullptr));
        comboBox_Pais_Sede->setItemText(75, QCoreApplication::translate("editar", "Gab\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(76, QCoreApplication::translate("editar", "Gana", nullptr));
        comboBox_Pais_Sede->setItemText(77, QCoreApplication::translate("editar", "Ge\303\263rgia", nullptr));
        comboBox_Pais_Sede->setItemText(78, QCoreApplication::translate("editar", "Gibraltar", nullptr));
        comboBox_Pais_Sede->setItemText(79, QCoreApplication::translate("editar", "Granada", nullptr));
        comboBox_Pais_Sede->setItemText(80, QCoreApplication::translate("editar", "Gronel\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(81, QCoreApplication::translate("editar", "Gr\303\251cia", nullptr));
        comboBox_Pais_Sede->setItemText(82, QCoreApplication::translate("editar", "Guadalupe", nullptr));
        comboBox_Pais_Sede->setItemText(83, QCoreApplication::translate("editar", "Guam", nullptr));
        comboBox_Pais_Sede->setItemText(84, QCoreApplication::translate("editar", "Guatemala", nullptr));
        comboBox_Pais_Sede->setItemText(85, QCoreApplication::translate("editar", "Guernesei", nullptr));
        comboBox_Pais_Sede->setItemText(86, QCoreApplication::translate("editar", "Guiana", nullptr));
        comboBox_Pais_Sede->setItemText(87, QCoreApplication::translate("editar", "Guiana Francesa", nullptr));
        comboBox_Pais_Sede->setItemText(88, QCoreApplication::translate("editar", "Guin\303\251", nullptr));
        comboBox_Pais_Sede->setItemText(89, QCoreApplication::translate("editar", "Guin\303\251 Equatorial", nullptr));
        comboBox_Pais_Sede->setItemText(90, QCoreApplication::translate("editar", "Guin\303\251-Bissau", nullptr));
        comboBox_Pais_Sede->setItemText(91, QCoreApplication::translate("editar", "G\303\242mbia", nullptr));
        comboBox_Pais_Sede->setItemText(92, QCoreApplication::translate("editar", "Haiti", nullptr));
        comboBox_Pais_Sede->setItemText(93, QCoreApplication::translate("editar", "Honduras", nullptr));
        comboBox_Pais_Sede->setItemText(94, QCoreApplication::translate("editar", "Hong Kong", nullptr));
        comboBox_Pais_Sede->setItemText(95, QCoreApplication::translate("editar", "Hungria", nullptr));
        comboBox_Pais_Sede->setItemText(96, QCoreApplication::translate("editar", "Ilha Bouvet", nullptr));
        comboBox_Pais_Sede->setItemText(97, QCoreApplication::translate("editar", "Ilha de Man", nullptr));
        comboBox_Pais_Sede->setItemText(98, QCoreApplication::translate("editar", "Ilha do Natal", nullptr));
        comboBox_Pais_Sede->setItemText(99, QCoreApplication::translate("editar", "Ilha Heard e Ilhas McDonald", nullptr));
        comboBox_Pais_Sede->setItemText(100, QCoreApplication::translate("editar", "Ilha Norfolk", nullptr));
        comboBox_Pais_Sede->setItemText(101, QCoreApplication::translate("editar", "Ilhas Cayman", nullptr));
        comboBox_Pais_Sede->setItemText(102, QCoreApplication::translate("editar", "Ilhas Cocos (Keeling)", nullptr));
        comboBox_Pais_Sede->setItemText(103, QCoreApplication::translate("editar", "Ilhas Cook", nullptr));
        comboBox_Pais_Sede->setItemText(104, QCoreApplication::translate("editar", "Ilhas Fero\303\251", nullptr));
        comboBox_Pais_Sede->setItemText(105, QCoreApplication::translate("editar", "Ilhas Ge\303\263rgia do Sul e Sandwich do Sul", nullptr));
        comboBox_Pais_Sede->setItemText(106, QCoreApplication::translate("editar", "Ilhas Malvinas", nullptr));
        comboBox_Pais_Sede->setItemText(107, QCoreApplication::translate("editar", "Ilhas Marshall", nullptr));
        comboBox_Pais_Sede->setItemText(108, QCoreApplication::translate("editar", "Ilhas Menores Distantes dos Estados Unidos", nullptr));
        comboBox_Pais_Sede->setItemText(109, QCoreApplication::translate("editar", "Ilhas Salom\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(110, QCoreApplication::translate("editar", "Ilhas Virgens Americanas", nullptr));
        comboBox_Pais_Sede->setItemText(111, QCoreApplication::translate("editar", "Ilhas Virgens Brit\303\242nicas", nullptr));
        comboBox_Pais_Sede->setItemText(112, QCoreApplication::translate("editar", "Ilhas \303\205land", nullptr));
        comboBox_Pais_Sede->setItemText(113, QCoreApplication::translate("editar", "Indon\303\251sia", nullptr));
        comboBox_Pais_Sede->setItemText(114, QCoreApplication::translate("editar", "Inglaterra", nullptr));
        comboBox_Pais_Sede->setItemText(115, QCoreApplication::translate("editar", "\303\215ndia", nullptr));
        comboBox_Pais_Sede->setItemText(116, QCoreApplication::translate("editar", "Iraque", nullptr));
        comboBox_Pais_Sede->setItemText(117, QCoreApplication::translate("editar", "Irlanda do Norte", nullptr));
        comboBox_Pais_Sede->setItemText(118, QCoreApplication::translate("editar", "Irlanda", nullptr));
        comboBox_Pais_Sede->setItemText(119, QCoreApplication::translate("editar", "Ir\303\243", nullptr));
        comboBox_Pais_Sede->setItemText(120, QCoreApplication::translate("editar", "Isl\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(121, QCoreApplication::translate("editar", "Israel", nullptr));
        comboBox_Pais_Sede->setItemText(122, QCoreApplication::translate("editar", "It\303\241lia", nullptr));
        comboBox_Pais_Sede->setItemText(123, QCoreApplication::translate("editar", "I\303\252men", nullptr));
        comboBox_Pais_Sede->setItemText(124, QCoreApplication::translate("editar", "Jamaica", nullptr));
        comboBox_Pais_Sede->setItemText(125, QCoreApplication::translate("editar", "Jap\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(126, QCoreApplication::translate("editar", "Jersey", nullptr));
        comboBox_Pais_Sede->setItemText(127, QCoreApplication::translate("editar", "Jord\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(128, QCoreApplication::translate("editar", "Kiribati", nullptr));
        comboBox_Pais_Sede->setItemText(129, QCoreApplication::translate("editar", "Kuwait", nullptr));
        comboBox_Pais_Sede->setItemText(130, QCoreApplication::translate("editar", "Laos", nullptr));
        comboBox_Pais_Sede->setItemText(131, QCoreApplication::translate("editar", "Lesoto", nullptr));
        comboBox_Pais_Sede->setItemText(132, QCoreApplication::translate("editar", "Let\303\264nia", nullptr));
        comboBox_Pais_Sede->setItemText(133, QCoreApplication::translate("editar", "Lib\303\251ria", nullptr));
        comboBox_Pais_Sede->setItemText(134, QCoreApplication::translate("editar", "Liechtenstein", nullptr));
        comboBox_Pais_Sede->setItemText(135, QCoreApplication::translate("editar", "Litu\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(136, QCoreApplication::translate("editar", "Luxemburgo", nullptr));
        comboBox_Pais_Sede->setItemText(137, QCoreApplication::translate("editar", "L\303\255bano", nullptr));
        comboBox_Pais_Sede->setItemText(138, QCoreApplication::translate("editar", "L\303\255bia", nullptr));
        comboBox_Pais_Sede->setItemText(139, QCoreApplication::translate("editar", "Macau", nullptr));
        comboBox_Pais_Sede->setItemText(140, QCoreApplication::translate("editar", "Maced\303\264nia", nullptr));
        comboBox_Pais_Sede->setItemText(141, QCoreApplication::translate("editar", "Madag\303\241scar", nullptr));
        comboBox_Pais_Sede->setItemText(142, QCoreApplication::translate("editar", "Malawi", nullptr));
        comboBox_Pais_Sede->setItemText(143, QCoreApplication::translate("editar", "Maldivas", nullptr));
        comboBox_Pais_Sede->setItemText(144, QCoreApplication::translate("editar", "Mali", nullptr));
        comboBox_Pais_Sede->setItemText(145, QCoreApplication::translate("editar", "Malta", nullptr));
        comboBox_Pais_Sede->setItemText(146, QCoreApplication::translate("editar", "Mal\303\241sia", nullptr));
        comboBox_Pais_Sede->setItemText(147, QCoreApplication::translate("editar", "Marianas Setentrionais", nullptr));
        comboBox_Pais_Sede->setItemText(148, QCoreApplication::translate("editar", "Marrocos", nullptr));
        comboBox_Pais_Sede->setItemText(149, QCoreApplication::translate("editar", "Martinica", nullptr));
        comboBox_Pais_Sede->setItemText(150, QCoreApplication::translate("editar", "Maurit\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(151, QCoreApplication::translate("editar", "Maur\303\255cia", nullptr));
        comboBox_Pais_Sede->setItemText(152, QCoreApplication::translate("editar", "Mayotte", nullptr));
        comboBox_Pais_Sede->setItemText(153, QCoreApplication::translate("editar", "Mold\303\241via", nullptr));
        comboBox_Pais_Sede->setItemText(154, QCoreApplication::translate("editar", "Mong\303\263lia", nullptr));
        comboBox_Pais_Sede->setItemText(155, QCoreApplication::translate("editar", "Montenegro", nullptr));
        comboBox_Pais_Sede->setItemText(156, QCoreApplication::translate("editar", "Montserrat", nullptr));
        comboBox_Pais_Sede->setItemText(157, QCoreApplication::translate("editar", "Mo\303\247ambique", nullptr));
        comboBox_Pais_Sede->setItemText(158, QCoreApplication::translate("editar", "Myanmar", nullptr));
        comboBox_Pais_Sede->setItemText(159, QCoreApplication::translate("editar", "M\303\251xico", nullptr));
        comboBox_Pais_Sede->setItemText(160, QCoreApplication::translate("editar", "M\303\264naco", nullptr));
        comboBox_Pais_Sede->setItemText(161, QCoreApplication::translate("editar", "Nam\303\255bia", nullptr));
        comboBox_Pais_Sede->setItemText(162, QCoreApplication::translate("editar", "Nauru", nullptr));
        comboBox_Pais_Sede->setItemText(163, QCoreApplication::translate("editar", "Nepal", nullptr));
        comboBox_Pais_Sede->setItemText(164, QCoreApplication::translate("editar", "Nicar\303\241gua", nullptr));
        comboBox_Pais_Sede->setItemText(165, QCoreApplication::translate("editar", "Nig\303\251ria", nullptr));
        comboBox_Pais_Sede->setItemText(166, QCoreApplication::translate("editar", "Niue", nullptr));
        comboBox_Pais_Sede->setItemText(167, QCoreApplication::translate("editar", "Noruega", nullptr));
        comboBox_Pais_Sede->setItemText(168, QCoreApplication::translate("editar", "Nova Caled\303\264nia", nullptr));
        comboBox_Pais_Sede->setItemText(169, QCoreApplication::translate("editar", "Nova Zel\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(170, QCoreApplication::translate("editar", "N\303\255ger", nullptr));
        comboBox_Pais_Sede->setItemText(171, QCoreApplication::translate("editar", "Om\303\243", nullptr));
        comboBox_Pais_Sede->setItemText(172, QCoreApplication::translate("editar", "Palau", nullptr));
        comboBox_Pais_Sede->setItemText(173, QCoreApplication::translate("editar", "Palestina", nullptr));
        comboBox_Pais_Sede->setItemText(174, QCoreApplication::translate("editar", "Panam\303\241", nullptr));
        comboBox_Pais_Sede->setItemText(175, QCoreApplication::translate("editar", "Papua-Nova Guin\303\251", nullptr));
        comboBox_Pais_Sede->setItemText(176, QCoreApplication::translate("editar", "Paquist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(177, QCoreApplication::translate("editar", "Paraguai", nullptr));
        comboBox_Pais_Sede->setItemText(178, QCoreApplication::translate("editar", "Pa\303\255s de Gales", nullptr));
        comboBox_Pais_Sede->setItemText(179, QCoreApplication::translate("editar", "Pa\303\255ses Baixos", nullptr));
        comboBox_Pais_Sede->setItemText(180, QCoreApplication::translate("editar", "Peru", nullptr));
        comboBox_Pais_Sede->setItemText(181, QCoreApplication::translate("editar", "Pitcairn", nullptr));
        comboBox_Pais_Sede->setItemText(182, QCoreApplication::translate("editar", "Polin\303\251sia Francesa", nullptr));
        comboBox_Pais_Sede->setItemText(183, QCoreApplication::translate("editar", "Pol\303\264nia", nullptr));
        comboBox_Pais_Sede->setItemText(184, QCoreApplication::translate("editar", "Porto Rico", nullptr));
        comboBox_Pais_Sede->setItemText(185, QCoreApplication::translate("editar", "Portugal", nullptr));
        comboBox_Pais_Sede->setItemText(186, QCoreApplication::translate("editar", "Quirguist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(187, QCoreApplication::translate("editar", "Qu\303\252nia", nullptr));
        comboBox_Pais_Sede->setItemText(188, QCoreApplication::translate("editar", "Reino Unido", nullptr));
        comboBox_Pais_Sede->setItemText(189, QCoreApplication::translate("editar", "Rep\303\272blica Centro-Africana", nullptr));
        comboBox_Pais_Sede->setItemText(190, QCoreApplication::translate("editar", "Rep\303\272blica Checa", nullptr));
        comboBox_Pais_Sede->setItemText(191, QCoreApplication::translate("editar", "Rep\303\272blica Democr\303\241tica do Congo", nullptr));
        comboBox_Pais_Sede->setItemText(192, QCoreApplication::translate("editar", "Rep\303\272blica do Congo", nullptr));
        comboBox_Pais_Sede->setItemText(193, QCoreApplication::translate("editar", "Rep\303\272blica Dominicana", nullptr));
        comboBox_Pais_Sede->setItemText(194, QCoreApplication::translate("editar", "Reuni\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(195, QCoreApplication::translate("editar", "Rom\303\252nia", nullptr));
        comboBox_Pais_Sede->setItemText(196, QCoreApplication::translate("editar", "Ruanda", nullptr));
        comboBox_Pais_Sede->setItemText(197, QCoreApplication::translate("editar", "R\303\272ssia", nullptr));
        comboBox_Pais_Sede->setItemText(198, QCoreApplication::translate("editar", "Saara Ocidental", nullptr));
        comboBox_Pais_Sede->setItemText(199, QCoreApplication::translate("editar", "Saint Martin", nullptr));
        comboBox_Pais_Sede->setItemText(200, QCoreApplication::translate("editar", "Saint-Barth\303\251lemy", nullptr));
        comboBox_Pais_Sede->setItemText(201, QCoreApplication::translate("editar", "Saint-Pierre e Miquelon", nullptr));
        comboBox_Pais_Sede->setItemText(202, QCoreApplication::translate("editar", "Samoa Americana", nullptr));
        comboBox_Pais_Sede->setItemText(203, QCoreApplication::translate("editar", "Samoa", nullptr));
        comboBox_Pais_Sede->setItemText(204, QCoreApplication::translate("editar", "Santa Helena, Ascens\303\243o e Trist\303\243o da Cunha", nullptr));
        comboBox_Pais_Sede->setItemText(205, QCoreApplication::translate("editar", "Santa L\303\272cia", nullptr));
        comboBox_Pais_Sede->setItemText(206, QCoreApplication::translate("editar", "Senegal", nullptr));
        comboBox_Pais_Sede->setItemText(207, QCoreApplication::translate("editar", "Serra Leoa", nullptr));
        comboBox_Pais_Sede->setItemText(208, QCoreApplication::translate("editar", "Seychelles", nullptr));
        comboBox_Pais_Sede->setItemText(209, QCoreApplication::translate("editar", "Singapura", nullptr));
        comboBox_Pais_Sede->setItemText(210, QCoreApplication::translate("editar", "Som\303\241lia", nullptr));
        comboBox_Pais_Sede->setItemText(211, QCoreApplication::translate("editar", "Sri Lanka", nullptr));
        comboBox_Pais_Sede->setItemText(212, QCoreApplication::translate("editar", "Suazil\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(213, QCoreApplication::translate("editar", "Sud\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(214, QCoreApplication::translate("editar", "Suriname", nullptr));
        comboBox_Pais_Sede->setItemText(215, QCoreApplication::translate("editar", "Su\303\251cia", nullptr));
        comboBox_Pais_Sede->setItemText(216, QCoreApplication::translate("editar", "Su\303\255\303\247a", nullptr));
        comboBox_Pais_Sede->setItemText(217, QCoreApplication::translate("editar", "Svalbard e Jan Mayen", nullptr));
        comboBox_Pais_Sede->setItemText(218, QCoreApplication::translate("editar", "S\303\243o Crist\303\263v\303\243o e Nevis", nullptr));
        comboBox_Pais_Sede->setItemText(219, QCoreApplication::translate("editar", "S\303\243o Marino", nullptr));
        comboBox_Pais_Sede->setItemText(220, QCoreApplication::translate("editar", "S\303\243o Tom\303\251 e Pr\303\255ncipe", nullptr));
        comboBox_Pais_Sede->setItemText(221, QCoreApplication::translate("editar", "S\303\243o Vicente e Granadinas", nullptr));
        comboBox_Pais_Sede->setItemText(222, QCoreApplication::translate("editar", "S\303\251rvia", nullptr));
        comboBox_Pais_Sede->setItemText(223, QCoreApplication::translate("editar", "S\303\255ria", nullptr));
        comboBox_Pais_Sede->setItemText(224, QCoreApplication::translate("editar", "Tadjiquist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(225, QCoreApplication::translate("editar", "Tail\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(226, QCoreApplication::translate("editar", "Taiwan", nullptr));
        comboBox_Pais_Sede->setItemText(227, QCoreApplication::translate("editar", "Tanz\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(228, QCoreApplication::translate("editar", "Terras Austrais e Ant\303\241rticas Francesas", nullptr));
        comboBox_Pais_Sede->setItemText(229, QCoreApplication::translate("editar", "Territ\303\263rio Brit\303\242nico do Oceano \303\215ndico", nullptr));
        comboBox_Pais_Sede->setItemText(230, QCoreApplication::translate("editar", "Timor-Leste", nullptr));
        comboBox_Pais_Sede->setItemText(231, QCoreApplication::translate("editar", "Togo", nullptr));
        comboBox_Pais_Sede->setItemText(232, QCoreApplication::translate("editar", "Tonga", nullptr));
        comboBox_Pais_Sede->setItemText(233, QCoreApplication::translate("editar", "Toquelau", nullptr));
        comboBox_Pais_Sede->setItemText(234, QCoreApplication::translate("editar", "Trinidad e Tobago", nullptr));
        comboBox_Pais_Sede->setItemText(235, QCoreApplication::translate("editar", "Tun\303\255sia", nullptr));
        comboBox_Pais_Sede->setItemText(236, QCoreApplication::translate("editar", "Turcas e Caicos", nullptr));
        comboBox_Pais_Sede->setItemText(237, QCoreApplication::translate("editar", "Turquemenist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(238, QCoreApplication::translate("editar", "Turquia", nullptr));
        comboBox_Pais_Sede->setItemText(239, QCoreApplication::translate("editar", "Tuvalu", nullptr));
        comboBox_Pais_Sede->setItemText(240, QCoreApplication::translate("editar", "Ucr\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(241, QCoreApplication::translate("editar", "Uganda", nullptr));
        comboBox_Pais_Sede->setItemText(242, QCoreApplication::translate("editar", "Uruguai", nullptr));
        comboBox_Pais_Sede->setItemText(243, QCoreApplication::translate("editar", "Uzbequist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(244, QCoreApplication::translate("editar", "Vanuatu", nullptr));
        comboBox_Pais_Sede->setItemText(245, QCoreApplication::translate("editar", "Vaticano", nullptr));
        comboBox_Pais_Sede->setItemText(246, QCoreApplication::translate("editar", "Venezuela", nullptr));
        comboBox_Pais_Sede->setItemText(247, QCoreApplication::translate("editar", "Vietname", nullptr));
        comboBox_Pais_Sede->setItemText(248, QCoreApplication::translate("editar", "Wallis e Futuna", nullptr));
        comboBox_Pais_Sede->setItemText(249, QCoreApplication::translate("editar", "Zimbabwe", nullptr));
        comboBox_Pais_Sede->setItemText(250, QCoreApplication::translate("editar", "Z\303\242mbia", nullptr));

        label_Estado_Sede->setText(QCoreApplication::translate("editar", "Estado Sede:", nullptr));
        label_Cidade_Sede->setText(QCoreApplication::translate("editar", "Cidade Sede:", nullptr));
        BTN_SALVAR->setText(QCoreApplication::translate("editar", "Salvar", nullptr));
        BTN_CALCELAR->setText(QCoreApplication::translate("editar", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editar: public Ui_editar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITAR_H
