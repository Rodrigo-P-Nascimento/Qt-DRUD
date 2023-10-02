/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_cadastro
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFormLayout *formLayout_17;
    QLabel *label_19;
    QComboBox *comboBox_Secao;
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
    QPushButton *pushButton_Salvar;
    QPushButton *pushButton_Limpar;

    void setupUi(QWidget *cadastro)
    {
        if (cadastro->objectName().isEmpty())
            cadastro->setObjectName("cadastro");
        cadastro->resize(861, 441);
        verticalLayout = new QVBoxLayout(cadastro);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(cadastro);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 824, 518));
        horizontalLayout_6 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        scrollArea_2 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setMinimumSize(QSize(800, 500));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 804, 498));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(14);
        font.setBold(false);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        formLayout_17 = new QFormLayout();
        formLayout_17->setObjectName("formLayout_17");
        label_19 = new QLabel(scrollAreaWidgetContents_2);
        label_19->setObjectName("label_19");

        formLayout_17->setWidget(0, QFormLayout::LabelRole, label_19);

        comboBox_Secao = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_Secao->addItem(QString());
        comboBox_Secao->addItem(QString());
        comboBox_Secao->addItem(QString());
        comboBox_Secao->addItem(QString());
        comboBox_Secao->addItem(QString());
        comboBox_Secao->addItem(QString());
        comboBox_Secao->setObjectName("comboBox_Secao");

        formLayout_17->setWidget(0, QFormLayout::FieldRole, comboBox_Secao);


        verticalLayout_3->addLayout(formLayout_17);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_Nome_do_Produto = new QLabel(scrollAreaWidgetContents_2);
        label_Nome_do_Produto->setObjectName("label_Nome_do_Produto");
        label_Nome_do_Produto->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_Nome_do_Produto);

        lineEdit_Nome_de_Produto = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Nome_de_Produto->setObjectName("lineEdit_Nome_de_Produto");
        lineEdit_Nome_de_Produto->setEnabled(false);
        lineEdit_Nome_de_Produto->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_Nome_de_Produto);


        verticalLayout_3->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_Codigo = new QLabel(scrollAreaWidgetContents_2);
        label_Codigo->setObjectName("label_Codigo");
        label_Codigo->setEnabled(false);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_Codigo);

        spinBox_Codigo = new QSpinBox(scrollAreaWidgetContents_2);
        spinBox_Codigo->setObjectName("spinBox_Codigo");
        spinBox_Codigo->setEnabled(false);
        spinBox_Codigo->setMaximum(99999);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinBox_Codigo);


        horizontalLayout->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        label_Preco = new QLabel(scrollAreaWidgetContents_2);
        label_Preco->setObjectName("label_Preco");
        label_Preco->setEnabled(false);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_Preco);

        doubleSpinBox_Preco = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_Preco->setObjectName("doubleSpinBox_Preco");
        doubleSpinBox_Preco->setEnabled(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_Preco);


        horizontalLayout->addLayout(formLayout_3);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName("formLayout_4");
        label_Data_de_Fabricacao = new QLabel(scrollAreaWidgetContents_2);
        label_Data_de_Fabricacao->setObjectName("label_Data_de_Fabricacao");
        label_Data_de_Fabricacao->setEnabled(false);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_Data_de_Fabricacao);

        dateEdit_Data_de_Fabricacao = new QDateEdit(scrollAreaWidgetContents_2);
        dateEdit_Data_de_Fabricacao->setObjectName("dateEdit_Data_de_Fabricacao");
        dateEdit_Data_de_Fabricacao->setEnabled(false);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, dateEdit_Data_de_Fabricacao);


        horizontalLayout_2->addLayout(formLayout_4);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName("formLayout_5");
        label_Data_de_Validade = new QLabel(scrollAreaWidgetContents_2);
        label_Data_de_Validade->setObjectName("label_Data_de_Validade");
        label_Data_de_Validade->setEnabled(false);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_Data_de_Validade);

        dateEdit_Data_de_Validade = new QDateEdit(scrollAreaWidgetContents_2);
        dateEdit_Data_de_Validade->setObjectName("dateEdit_Data_de_Validade");
        dateEdit_Data_de_Validade->setEnabled(false);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, dateEdit_Data_de_Validade);


        horizontalLayout_2->addLayout(formLayout_5);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName("formLayout_6");
        label_Unidades = new QLabel(scrollAreaWidgetContents_2);
        label_Unidades->setObjectName("label_Unidades");
        label_Unidades->setEnabled(false);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_Unidades);

        spinBox_Unidades = new QSpinBox(scrollAreaWidgetContents_2);
        spinBox_Unidades->setObjectName("spinBox_Unidades");
        spinBox_Unidades->setEnabled(false);
        spinBox_Unidades->setMaximum(99999);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, spinBox_Unidades);


        horizontalLayout_3->addLayout(formLayout_6);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName("formLayout_7");
        label_Peso = new QLabel(scrollAreaWidgetContents_2);
        label_Peso->setObjectName("label_Peso");
        label_Peso->setEnabled(false);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_Peso);

        doubleSpinBox_Peso = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_Peso->setObjectName("doubleSpinBox_Peso");
        doubleSpinBox_Peso->setEnabled(false);
        doubleSpinBox_Peso->setDecimals(3);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_Peso);


        horizontalLayout_3->addLayout(formLayout_7);


        verticalLayout_3->addLayout(horizontalLayout_3);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName("formLayout_8");
        label_Volume_por_Unidade = new QLabel(scrollAreaWidgetContents_2);
        label_Volume_por_Unidade->setObjectName("label_Volume_por_Unidade");
        label_Volume_por_Unidade->setEnabled(false);

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_Volume_por_Unidade);

        doubleSpinBox_Volume_por_Unidade = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_Volume_por_Unidade->setObjectName("doubleSpinBox_Volume_por_Unidade");
        doubleSpinBox_Volume_por_Unidade->setEnabled(false);
        doubleSpinBox_Volume_por_Unidade->setDecimals(3);
        doubleSpinBox_Volume_por_Unidade->setMaximum(999.000000000000000);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_Volume_por_Unidade);


        verticalLayout_3->addLayout(formLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName("formLayout_9");
        label_Gluten = new QLabel(scrollAreaWidgetContents_2);
        label_Gluten->setObjectName("label_Gluten");
        label_Gluten->setEnabled(false);

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_Gluten);

        comboBox_Gluten = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_Gluten->addItem(QString());
        comboBox_Gluten->addItem(QString());
        comboBox_Gluten->addItem(QString());
        comboBox_Gluten->setObjectName("comboBox_Gluten");
        comboBox_Gluten->setEnabled(false);

        formLayout_9->setWidget(0, QFormLayout::FieldRole, comboBox_Gluten);


        horizontalLayout_4->addLayout(formLayout_9);

        formLayout_10 = new QFormLayout();
        formLayout_10->setObjectName("formLayout_10");
        label_Alcoolica = new QLabel(scrollAreaWidgetContents_2);
        label_Alcoolica->setObjectName("label_Alcoolica");
        label_Alcoolica->setEnabled(false);

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_Alcoolica);

        comboBox_Alcoolica = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_Alcoolica->addItem(QString());
        comboBox_Alcoolica->addItem(QString());
        comboBox_Alcoolica->addItem(QString());
        comboBox_Alcoolica->setObjectName("comboBox_Alcoolica");
        comboBox_Alcoolica->setEnabled(false);

        formLayout_10->setWidget(0, QFormLayout::FieldRole, comboBox_Alcoolica);


        horizontalLayout_4->addLayout(formLayout_10);

        formLayout_11 = new QFormLayout();
        formLayout_11->setObjectName("formLayout_11");
        label_Gaseificada = new QLabel(scrollAreaWidgetContents_2);
        label_Gaseificada->setObjectName("label_Gaseificada");
        label_Gaseificada->setEnabled(false);

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_Gaseificada);

        comboBox_Gaseificada = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_Gaseificada->addItem(QString());
        comboBox_Gaseificada->addItem(QString());
        comboBox_Gaseificada->addItem(QString());
        comboBox_Gaseificada->setObjectName("comboBox_Gaseificada");
        comboBox_Gaseificada->setEnabled(false);

        formLayout_11->setWidget(0, QFormLayout::FieldRole, comboBox_Gaseificada);


        horizontalLayout_4->addLayout(formLayout_11);


        verticalLayout_3->addLayout(horizontalLayout_4);

        formLayout_12 = new QFormLayout();
        formLayout_12->setObjectName("formLayout_12");
        label_Fragrancia = new QLabel(scrollAreaWidgetContents_2);
        label_Fragrancia->setObjectName("label_Fragrancia");
        label_Fragrancia->setEnabled(false);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, label_Fragrancia);

        lineEdit_Fragrancia = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Fragrancia->setObjectName("lineEdit_Fragrancia");
        lineEdit_Fragrancia->setEnabled(false);

        formLayout_12->setWidget(0, QFormLayout::FieldRole, lineEdit_Fragrancia);


        verticalLayout_3->addLayout(formLayout_12);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_Dados_do_Fornecedor = new QLabel(scrollAreaWidgetContents_2);
        label_Dados_do_Fornecedor->setObjectName("label_Dados_do_Fornecedor");
        label_Dados_do_Fornecedor->setEnabled(false);
        label_Dados_do_Fornecedor->setFont(font);

        verticalLayout_3->addWidget(label_Dados_do_Fornecedor);

        formLayout_15 = new QFormLayout();
        formLayout_15->setObjectName("formLayout_15");
        label_Nome_do_Fornecedor = new QLabel(scrollAreaWidgetContents_2);
        label_Nome_do_Fornecedor->setObjectName("label_Nome_do_Fornecedor");
        label_Nome_do_Fornecedor->setEnabled(false);

        formLayout_15->setWidget(0, QFormLayout::LabelRole, label_Nome_do_Fornecedor);

        lineEdit_Nome_do_Fornecedor = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Nome_do_Fornecedor->setObjectName("lineEdit_Nome_do_Fornecedor");
        lineEdit_Nome_do_Fornecedor->setEnabled(false);

        formLayout_15->setWidget(0, QFormLayout::FieldRole, lineEdit_Nome_do_Fornecedor);


        verticalLayout_3->addLayout(formLayout_15);

        formLayout_14 = new QFormLayout();
        formLayout_14->setObjectName("formLayout_14");
        label_Pais_Sede = new QLabel(scrollAreaWidgetContents_2);
        label_Pais_Sede->setObjectName("label_Pais_Sede");
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
        comboBox_Pais_Sede->setObjectName("comboBox_Pais_Sede");
        comboBox_Pais_Sede->setEnabled(false);

        formLayout_14->setWidget(0, QFormLayout::FieldRole, comboBox_Pais_Sede);


        verticalLayout_3->addLayout(formLayout_14);

        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName("formLayout_13");
        label_Estado_Sede = new QLabel(scrollAreaWidgetContents_2);
        label_Estado_Sede->setObjectName("label_Estado_Sede");
        label_Estado_Sede->setEnabled(false);

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_Estado_Sede);

        lineEdit_Estado_Sede = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Estado_Sede->setObjectName("lineEdit_Estado_Sede");
        lineEdit_Estado_Sede->setEnabled(false);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, lineEdit_Estado_Sede);


        verticalLayout_3->addLayout(formLayout_13);

        formLayout_16 = new QFormLayout();
        formLayout_16->setObjectName("formLayout_16");
        label_Cidade_Sede = new QLabel(scrollAreaWidgetContents_2);
        label_Cidade_Sede->setObjectName("label_Cidade_Sede");
        label_Cidade_Sede->setEnabled(false);

        formLayout_16->setWidget(0, QFormLayout::LabelRole, label_Cidade_Sede);

        lineEdit_Cidade_Sede = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Cidade_Sede->setObjectName("lineEdit_Cidade_Sede");
        lineEdit_Cidade_Sede->setEnabled(false);

        formLayout_16->setWidget(0, QFormLayout::FieldRole, lineEdit_Cidade_Sede);


        verticalLayout_3->addLayout(formLayout_16);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_Salvar = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_Salvar->setObjectName("pushButton_Salvar");
        pushButton_Salvar->setEnabled(false);

        horizontalLayout_5->addWidget(pushButton_Salvar);

        pushButton_Limpar = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_Limpar->setObjectName("pushButton_Limpar");

        horizontalLayout_5->addWidget(pushButton_Limpar);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout_3);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_6->addWidget(scrollArea_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, comboBox_Secao);
        QWidget::setTabOrder(comboBox_Secao, lineEdit_Nome_de_Produto);
        QWidget::setTabOrder(lineEdit_Nome_de_Produto, spinBox_Codigo);
        QWidget::setTabOrder(spinBox_Codigo, doubleSpinBox_Preco);
        QWidget::setTabOrder(doubleSpinBox_Preco, dateEdit_Data_de_Fabricacao);
        QWidget::setTabOrder(dateEdit_Data_de_Fabricacao, dateEdit_Data_de_Validade);
        QWidget::setTabOrder(dateEdit_Data_de_Validade, spinBox_Unidades);
        QWidget::setTabOrder(spinBox_Unidades, doubleSpinBox_Peso);
        QWidget::setTabOrder(doubleSpinBox_Peso, doubleSpinBox_Volume_por_Unidade);
        QWidget::setTabOrder(doubleSpinBox_Volume_por_Unidade, comboBox_Gluten);
        QWidget::setTabOrder(comboBox_Gluten, comboBox_Alcoolica);
        QWidget::setTabOrder(comboBox_Alcoolica, comboBox_Gaseificada);
        QWidget::setTabOrder(comboBox_Gaseificada, lineEdit_Fragrancia);
        QWidget::setTabOrder(lineEdit_Fragrancia, lineEdit_Nome_do_Fornecedor);
        QWidget::setTabOrder(lineEdit_Nome_do_Fornecedor, comboBox_Pais_Sede);
        QWidget::setTabOrder(comboBox_Pais_Sede, lineEdit_Estado_Sede);
        QWidget::setTabOrder(lineEdit_Estado_Sede, lineEdit_Cidade_Sede);
        QWidget::setTabOrder(lineEdit_Cidade_Sede, pushButton_Salvar);
        QWidget::setTabOrder(pushButton_Salvar, pushButton_Limpar);

        retranslateUi(cadastro);

        QMetaObject::connectSlotsByName(cadastro);
    } // setupUi

    void retranslateUi(QWidget *cadastro)
    {
        cadastro->setWindowTitle(QCoreApplication::translate("cadastro", "Form", nullptr));
        label->setText(QCoreApplication::translate("cadastro", "Dados do Produto", nullptr));
        label_19->setText(QCoreApplication::translate("cadastro", "Se\303\247\303\243o:", nullptr));
        comboBox_Secao->setItemText(0, QCoreApplication::translate("cadastro", "Selecionar", nullptr));
        comboBox_Secao->setItemText(1, QCoreApplication::translate("cadastro", "A\303\247ougue e Frios", nullptr));
        comboBox_Secao->setItemText(2, QCoreApplication::translate("cadastro", "Bebidas", nullptr));
        comboBox_Secao->setItemText(3, QCoreApplication::translate("cadastro", "Limpeza", nullptr));
        comboBox_Secao->setItemText(4, QCoreApplication::translate("cadastro", "Mercearia", nullptr));
        comboBox_Secao->setItemText(5, QCoreApplication::translate("cadastro", "Padaria", nullptr));

        label_Nome_do_Produto->setText(QCoreApplication::translate("cadastro", "Nome do Produto:", nullptr));
        label_Codigo->setText(QCoreApplication::translate("cadastro", "C\303\263digo:", nullptr));
        label_Preco->setText(QCoreApplication::translate("cadastro", "Pre\303\247o:", nullptr));
        label_Data_de_Fabricacao->setText(QCoreApplication::translate("cadastro", "Data de Fabrica\303\247\303\243o:", nullptr));
        label_Data_de_Validade->setText(QCoreApplication::translate("cadastro", "Data de Validade:", nullptr));
        label_Unidades->setText(QCoreApplication::translate("cadastro", "Unidades:", nullptr));
        label_Peso->setText(QCoreApplication::translate("cadastro", "Peso:", nullptr));
        label_Volume_por_Unidade->setText(QCoreApplication::translate("cadastro", "Volume em litros/Unidade:", nullptr));
        label_Gluten->setText(QCoreApplication::translate("cadastro", "Gl\303\272ten:", nullptr));
        comboBox_Gluten->setItemText(0, QCoreApplication::translate("cadastro", "Selecionar", nullptr));
        comboBox_Gluten->setItemText(1, QCoreApplication::translate("cadastro", "Sim", nullptr));
        comboBox_Gluten->setItemText(2, QCoreApplication::translate("cadastro", "N\303\243o", nullptr));

        label_Alcoolica->setText(QCoreApplication::translate("cadastro", "Alco\303\263lica:", nullptr));
        comboBox_Alcoolica->setItemText(0, QCoreApplication::translate("cadastro", "Selecionar", nullptr));
        comboBox_Alcoolica->setItemText(1, QCoreApplication::translate("cadastro", "Sim", nullptr));
        comboBox_Alcoolica->setItemText(2, QCoreApplication::translate("cadastro", "N\303\243o", nullptr));

        label_Gaseificada->setText(QCoreApplication::translate("cadastro", "Gaseificada:", nullptr));
        comboBox_Gaseificada->setItemText(0, QCoreApplication::translate("cadastro", "Selecionar", nullptr));
        comboBox_Gaseificada->setItemText(1, QCoreApplication::translate("cadastro", "Sim", nullptr));
        comboBox_Gaseificada->setItemText(2, QCoreApplication::translate("cadastro", "N\303\243o", nullptr));

        label_Fragrancia->setText(QCoreApplication::translate("cadastro", "Fragr\303\242ncia:", nullptr));
        label_Dados_do_Fornecedor->setText(QCoreApplication::translate("cadastro", "Dados do Fornecedor", nullptr));
        label_Nome_do_Fornecedor->setText(QCoreApplication::translate("cadastro", "Nome do Fornecedor:", nullptr));
        label_Pais_Sede->setText(QCoreApplication::translate("cadastro", "Pa\303\255s Sede:", nullptr));
        comboBox_Pais_Sede->setItemText(0, QCoreApplication::translate("cadastro", "Selecionar", nullptr));
        comboBox_Pais_Sede->setItemText(1, QCoreApplication::translate("cadastro", "Afeganist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(2, QCoreApplication::translate("cadastro", "\303\201frica do Sul", nullptr));
        comboBox_Pais_Sede->setItemText(3, QCoreApplication::translate("cadastro", "Alb\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(4, QCoreApplication::translate("cadastro", "Alemanha", nullptr));
        comboBox_Pais_Sede->setItemText(5, QCoreApplication::translate("cadastro", "Andorra", nullptr));
        comboBox_Pais_Sede->setItemText(6, QCoreApplication::translate("cadastro", "Angola", nullptr));
        comboBox_Pais_Sede->setItemText(7, QCoreApplication::translate("cadastro", "Anguilla", nullptr));
        comboBox_Pais_Sede->setItemText(8, QCoreApplication::translate("cadastro", "Antilhas Holandesas", nullptr));
        comboBox_Pais_Sede->setItemText(9, QCoreApplication::translate("cadastro", "Ant\303\241rctida", nullptr));
        comboBox_Pais_Sede->setItemText(10, QCoreApplication::translate("cadastro", "Ant\303\255gua e Barbuda", nullptr));
        comboBox_Pais_Sede->setItemText(11, QCoreApplication::translate("cadastro", "Argentina", nullptr));
        comboBox_Pais_Sede->setItemText(12, QCoreApplication::translate("cadastro", "Arg\303\251lia", nullptr));
        comboBox_Pais_Sede->setItemText(13, QCoreApplication::translate("cadastro", "Arm\303\252nia", nullptr));
        comboBox_Pais_Sede->setItemText(14, QCoreApplication::translate("cadastro", "Aruba", nullptr));
        comboBox_Pais_Sede->setItemText(15, QCoreApplication::translate("cadastro", "Ar\303\241bia Saudita", nullptr));
        comboBox_Pais_Sede->setItemText(16, QCoreApplication::translate("cadastro", "Austr\303\241lia", nullptr));
        comboBox_Pais_Sede->setItemText(17, QCoreApplication::translate("cadastro", "\303\201ustria", nullptr));
        comboBox_Pais_Sede->setItemText(18, QCoreApplication::translate("cadastro", "Azerbaij\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(19, QCoreApplication::translate("cadastro", "Bahamas", nullptr));
        comboBox_Pais_Sede->setItemText(20, QCoreApplication::translate("cadastro", "Bahrein", nullptr));
        comboBox_Pais_Sede->setItemText(21, QCoreApplication::translate("cadastro", "Bangladesh", nullptr));
        comboBox_Pais_Sede->setItemText(22, QCoreApplication::translate("cadastro", "Barbados", nullptr));
        comboBox_Pais_Sede->setItemText(23, QCoreApplication::translate("cadastro", "Belize", nullptr));
        comboBox_Pais_Sede->setItemText(24, QCoreApplication::translate("cadastro", "Benim", nullptr));
        comboBox_Pais_Sede->setItemText(25, QCoreApplication::translate("cadastro", "Bermudas", nullptr));
        comboBox_Pais_Sede->setItemText(26, QCoreApplication::translate("cadastro", "Bielorr\303\272ssia", nullptr));
        comboBox_Pais_Sede->setItemText(27, QCoreApplication::translate("cadastro", "Bol\303\255via", nullptr));
        comboBox_Pais_Sede->setItemText(28, QCoreApplication::translate("cadastro", "Botswana", nullptr));
        comboBox_Pais_Sede->setItemText(29, QCoreApplication::translate("cadastro", "Brasil", nullptr));
        comboBox_Pais_Sede->setItemText(30, QCoreApplication::translate("cadastro", "Brunei", nullptr));
        comboBox_Pais_Sede->setItemText(31, QCoreApplication::translate("cadastro", "Bulg\303\241ria", nullptr));
        comboBox_Pais_Sede->setItemText(32, QCoreApplication::translate("cadastro", "Burkina Faso", nullptr));
        comboBox_Pais_Sede->setItemText(33, QCoreApplication::translate("cadastro", "Burundi", nullptr));
        comboBox_Pais_Sede->setItemText(34, QCoreApplication::translate("cadastro", "But\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(35, QCoreApplication::translate("cadastro", "B\303\251lgica", nullptr));
        comboBox_Pais_Sede->setItemText(36, QCoreApplication::translate("cadastro", "B\303\263snia e Herzegovina", nullptr));
        comboBox_Pais_Sede->setItemText(37, QCoreApplication::translate("cadastro", "Cabo Verde", nullptr));
        comboBox_Pais_Sede->setItemText(38, QCoreApplication::translate("cadastro", "Camar\303\265es", nullptr));
        comboBox_Pais_Sede->setItemText(39, QCoreApplication::translate("cadastro", "Camboja", nullptr));
        comboBox_Pais_Sede->setItemText(40, QCoreApplication::translate("cadastro", "Canad\303\241", nullptr));
        comboBox_Pais_Sede->setItemText(41, QCoreApplication::translate("cadastro", "Catar", nullptr));
        comboBox_Pais_Sede->setItemText(42, QCoreApplication::translate("cadastro", "Cazaquist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(43, QCoreApplication::translate("cadastro", "Chade", nullptr));
        comboBox_Pais_Sede->setItemText(44, QCoreApplication::translate("cadastro", "Chile", nullptr));
        comboBox_Pais_Sede->setItemText(45, QCoreApplication::translate("cadastro", "China", nullptr));
        comboBox_Pais_Sede->setItemText(46, QCoreApplication::translate("cadastro", "Chipre", nullptr));
        comboBox_Pais_Sede->setItemText(47, QCoreApplication::translate("cadastro", "Col\303\264mbia", nullptr));
        comboBox_Pais_Sede->setItemText(48, QCoreApplication::translate("cadastro", "Comores", nullptr));
        comboBox_Pais_Sede->setItemText(49, QCoreApplication::translate("cadastro", "Coreia do Norte", nullptr));
        comboBox_Pais_Sede->setItemText(50, QCoreApplication::translate("cadastro", "Coreia do Sul", nullptr));
        comboBox_Pais_Sede->setItemText(51, QCoreApplication::translate("cadastro", "Costa do Marfim", nullptr));
        comboBox_Pais_Sede->setItemText(52, QCoreApplication::translate("cadastro", "Costa Rica", nullptr));
        comboBox_Pais_Sede->setItemText(53, QCoreApplication::translate("cadastro", "Cro\303\241cia", nullptr));
        comboBox_Pais_Sede->setItemText(54, QCoreApplication::translate("cadastro", "Cuba", nullptr));
        comboBox_Pais_Sede->setItemText(55, QCoreApplication::translate("cadastro", "Dinamarca", nullptr));
        comboBox_Pais_Sede->setItemText(56, QCoreApplication::translate("cadastro", "Djibouti", nullptr));
        comboBox_Pais_Sede->setItemText(57, QCoreApplication::translate("cadastro", "Dominica", nullptr));
        comboBox_Pais_Sede->setItemText(58, QCoreApplication::translate("cadastro", "Egito", nullptr));
        comboBox_Pais_Sede->setItemText(59, QCoreApplication::translate("cadastro", "El Salvador", nullptr));
        comboBox_Pais_Sede->setItemText(60, QCoreApplication::translate("cadastro", "Emirados \303\201rabes Unidos", nullptr));
        comboBox_Pais_Sede->setItemText(61, QCoreApplication::translate("cadastro", "Equador", nullptr));
        comboBox_Pais_Sede->setItemText(62, QCoreApplication::translate("cadastro", "Eritreia", nullptr));
        comboBox_Pais_Sede->setItemText(63, QCoreApplication::translate("cadastro", "Esc\303\263cia", nullptr));
        comboBox_Pais_Sede->setItemText(64, QCoreApplication::translate("cadastro", "Eslov\303\241quia", nullptr));
        comboBox_Pais_Sede->setItemText(65, QCoreApplication::translate("cadastro", "Eslov\303\252nia", nullptr));
        comboBox_Pais_Sede->setItemText(66, QCoreApplication::translate("cadastro", "Espanha", nullptr));
        comboBox_Pais_Sede->setItemText(67, QCoreApplication::translate("cadastro", "Estados Federados da Micron\303\251sia", nullptr));
        comboBox_Pais_Sede->setItemText(68, QCoreApplication::translate("cadastro", "Estados Unidos", nullptr));
        comboBox_Pais_Sede->setItemText(69, QCoreApplication::translate("cadastro", "Est\303\264nia", nullptr));
        comboBox_Pais_Sede->setItemText(70, QCoreApplication::translate("cadastro", "Eti\303\263pia", nullptr));
        comboBox_Pais_Sede->setItemText(71, QCoreApplication::translate("cadastro", "Fiji", nullptr));
        comboBox_Pais_Sede->setItemText(72, QCoreApplication::translate("cadastro", "Filipinas", nullptr));
        comboBox_Pais_Sede->setItemText(73, QCoreApplication::translate("cadastro", "Finl\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(74, QCoreApplication::translate("cadastro", "Fran\303\247a", nullptr));
        comboBox_Pais_Sede->setItemText(75, QCoreApplication::translate("cadastro", "Gab\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(76, QCoreApplication::translate("cadastro", "Gana", nullptr));
        comboBox_Pais_Sede->setItemText(77, QCoreApplication::translate("cadastro", "Ge\303\263rgia", nullptr));
        comboBox_Pais_Sede->setItemText(78, QCoreApplication::translate("cadastro", "Gibraltar", nullptr));
        comboBox_Pais_Sede->setItemText(79, QCoreApplication::translate("cadastro", "Granada", nullptr));
        comboBox_Pais_Sede->setItemText(80, QCoreApplication::translate("cadastro", "Gronel\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(81, QCoreApplication::translate("cadastro", "Gr\303\251cia", nullptr));
        comboBox_Pais_Sede->setItemText(82, QCoreApplication::translate("cadastro", "Guadalupe", nullptr));
        comboBox_Pais_Sede->setItemText(83, QCoreApplication::translate("cadastro", "Guam", nullptr));
        comboBox_Pais_Sede->setItemText(84, QCoreApplication::translate("cadastro", "Guatemala", nullptr));
        comboBox_Pais_Sede->setItemText(85, QCoreApplication::translate("cadastro", "Guernesei", nullptr));
        comboBox_Pais_Sede->setItemText(86, QCoreApplication::translate("cadastro", "Guiana", nullptr));
        comboBox_Pais_Sede->setItemText(87, QCoreApplication::translate("cadastro", "Guiana Francesa", nullptr));
        comboBox_Pais_Sede->setItemText(88, QCoreApplication::translate("cadastro", "Guin\303\251", nullptr));
        comboBox_Pais_Sede->setItemText(89, QCoreApplication::translate("cadastro", "Guin\303\251 Equatorial", nullptr));
        comboBox_Pais_Sede->setItemText(90, QCoreApplication::translate("cadastro", "Guin\303\251-Bissau", nullptr));
        comboBox_Pais_Sede->setItemText(91, QCoreApplication::translate("cadastro", "G\303\242mbia", nullptr));
        comboBox_Pais_Sede->setItemText(92, QCoreApplication::translate("cadastro", "Haiti", nullptr));
        comboBox_Pais_Sede->setItemText(93, QCoreApplication::translate("cadastro", "Honduras", nullptr));
        comboBox_Pais_Sede->setItemText(94, QCoreApplication::translate("cadastro", "Hong Kong", nullptr));
        comboBox_Pais_Sede->setItemText(95, QCoreApplication::translate("cadastro", "Hungria", nullptr));
        comboBox_Pais_Sede->setItemText(96, QCoreApplication::translate("cadastro", "Ilha Bouvet", nullptr));
        comboBox_Pais_Sede->setItemText(97, QCoreApplication::translate("cadastro", "Ilha de Man", nullptr));
        comboBox_Pais_Sede->setItemText(98, QCoreApplication::translate("cadastro", "Ilha do Natal", nullptr));
        comboBox_Pais_Sede->setItemText(99, QCoreApplication::translate("cadastro", "Ilha Heard e Ilhas McDonald", nullptr));
        comboBox_Pais_Sede->setItemText(100, QCoreApplication::translate("cadastro", "Ilha Norfolk", nullptr));
        comboBox_Pais_Sede->setItemText(101, QCoreApplication::translate("cadastro", "Ilhas Cayman", nullptr));
        comboBox_Pais_Sede->setItemText(102, QCoreApplication::translate("cadastro", "Ilhas Cocos (Keeling)", nullptr));
        comboBox_Pais_Sede->setItemText(103, QCoreApplication::translate("cadastro", "Ilhas Cook", nullptr));
        comboBox_Pais_Sede->setItemText(104, QCoreApplication::translate("cadastro", "Ilhas Fero\303\251", nullptr));
        comboBox_Pais_Sede->setItemText(105, QCoreApplication::translate("cadastro", "Ilhas Ge\303\263rgia do Sul e Sandwich do Sul", nullptr));
        comboBox_Pais_Sede->setItemText(106, QCoreApplication::translate("cadastro", "Ilhas Malvinas", nullptr));
        comboBox_Pais_Sede->setItemText(107, QCoreApplication::translate("cadastro", "Ilhas Marshall", nullptr));
        comboBox_Pais_Sede->setItemText(108, QCoreApplication::translate("cadastro", "Ilhas Menores Distantes dos Estados Unidos", nullptr));
        comboBox_Pais_Sede->setItemText(109, QCoreApplication::translate("cadastro", "Ilhas Salom\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(110, QCoreApplication::translate("cadastro", "Ilhas Virgens Americanas", nullptr));
        comboBox_Pais_Sede->setItemText(111, QCoreApplication::translate("cadastro", "Ilhas Virgens Brit\303\242nicas", nullptr));
        comboBox_Pais_Sede->setItemText(112, QCoreApplication::translate("cadastro", "Ilhas \303\205land", nullptr));
        comboBox_Pais_Sede->setItemText(113, QCoreApplication::translate("cadastro", "Indon\303\251sia", nullptr));
        comboBox_Pais_Sede->setItemText(114, QCoreApplication::translate("cadastro", "Inglaterra", nullptr));
        comboBox_Pais_Sede->setItemText(115, QCoreApplication::translate("cadastro", "\303\215ndia", nullptr));
        comboBox_Pais_Sede->setItemText(116, QCoreApplication::translate("cadastro", "Iraque", nullptr));
        comboBox_Pais_Sede->setItemText(117, QCoreApplication::translate("cadastro", "Irlanda do Norte", nullptr));
        comboBox_Pais_Sede->setItemText(118, QCoreApplication::translate("cadastro", "Irlanda", nullptr));
        comboBox_Pais_Sede->setItemText(119, QCoreApplication::translate("cadastro", "Ir\303\243", nullptr));
        comboBox_Pais_Sede->setItemText(120, QCoreApplication::translate("cadastro", "Isl\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(121, QCoreApplication::translate("cadastro", "Israel", nullptr));
        comboBox_Pais_Sede->setItemText(122, QCoreApplication::translate("cadastro", "It\303\241lia", nullptr));
        comboBox_Pais_Sede->setItemText(123, QCoreApplication::translate("cadastro", "I\303\252men", nullptr));
        comboBox_Pais_Sede->setItemText(124, QCoreApplication::translate("cadastro", "Jamaica", nullptr));
        comboBox_Pais_Sede->setItemText(125, QCoreApplication::translate("cadastro", "Jap\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(126, QCoreApplication::translate("cadastro", "Jersey", nullptr));
        comboBox_Pais_Sede->setItemText(127, QCoreApplication::translate("cadastro", "Jord\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(128, QCoreApplication::translate("cadastro", "Kiribati", nullptr));
        comboBox_Pais_Sede->setItemText(129, QCoreApplication::translate("cadastro", "Kuwait", nullptr));
        comboBox_Pais_Sede->setItemText(130, QCoreApplication::translate("cadastro", "Laos", nullptr));
        comboBox_Pais_Sede->setItemText(131, QCoreApplication::translate("cadastro", "Lesoto", nullptr));
        comboBox_Pais_Sede->setItemText(132, QCoreApplication::translate("cadastro", "Let\303\264nia", nullptr));
        comboBox_Pais_Sede->setItemText(133, QCoreApplication::translate("cadastro", "Lib\303\251ria", nullptr));
        comboBox_Pais_Sede->setItemText(134, QCoreApplication::translate("cadastro", "Liechtenstein", nullptr));
        comboBox_Pais_Sede->setItemText(135, QCoreApplication::translate("cadastro", "Litu\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(136, QCoreApplication::translate("cadastro", "Luxemburgo", nullptr));
        comboBox_Pais_Sede->setItemText(137, QCoreApplication::translate("cadastro", "L\303\255bano", nullptr));
        comboBox_Pais_Sede->setItemText(138, QCoreApplication::translate("cadastro", "L\303\255bia", nullptr));
        comboBox_Pais_Sede->setItemText(139, QCoreApplication::translate("cadastro", "Macau", nullptr));
        comboBox_Pais_Sede->setItemText(140, QCoreApplication::translate("cadastro", "Maced\303\264nia", nullptr));
        comboBox_Pais_Sede->setItemText(141, QCoreApplication::translate("cadastro", "Madag\303\241scar", nullptr));
        comboBox_Pais_Sede->setItemText(142, QCoreApplication::translate("cadastro", "Malawi", nullptr));
        comboBox_Pais_Sede->setItemText(143, QCoreApplication::translate("cadastro", "Maldivas", nullptr));
        comboBox_Pais_Sede->setItemText(144, QCoreApplication::translate("cadastro", "Mali", nullptr));
        comboBox_Pais_Sede->setItemText(145, QCoreApplication::translate("cadastro", "Malta", nullptr));
        comboBox_Pais_Sede->setItemText(146, QCoreApplication::translate("cadastro", "Mal\303\241sia", nullptr));
        comboBox_Pais_Sede->setItemText(147, QCoreApplication::translate("cadastro", "Marianas Setentrionais", nullptr));
        comboBox_Pais_Sede->setItemText(148, QCoreApplication::translate("cadastro", "Marrocos", nullptr));
        comboBox_Pais_Sede->setItemText(149, QCoreApplication::translate("cadastro", "Martinica", nullptr));
        comboBox_Pais_Sede->setItemText(150, QCoreApplication::translate("cadastro", "Maurit\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(151, QCoreApplication::translate("cadastro", "Maur\303\255cia", nullptr));
        comboBox_Pais_Sede->setItemText(152, QCoreApplication::translate("cadastro", "Mayotte", nullptr));
        comboBox_Pais_Sede->setItemText(153, QCoreApplication::translate("cadastro", "Mold\303\241via", nullptr));
        comboBox_Pais_Sede->setItemText(154, QCoreApplication::translate("cadastro", "Mong\303\263lia", nullptr));
        comboBox_Pais_Sede->setItemText(155, QCoreApplication::translate("cadastro", "Montenegro", nullptr));
        comboBox_Pais_Sede->setItemText(156, QCoreApplication::translate("cadastro", "Montserrat", nullptr));
        comboBox_Pais_Sede->setItemText(157, QCoreApplication::translate("cadastro", "Mo\303\247ambique", nullptr));
        comboBox_Pais_Sede->setItemText(158, QCoreApplication::translate("cadastro", "Myanmar", nullptr));
        comboBox_Pais_Sede->setItemText(159, QCoreApplication::translate("cadastro", "M\303\251xico", nullptr));
        comboBox_Pais_Sede->setItemText(160, QCoreApplication::translate("cadastro", "M\303\264naco", nullptr));
        comboBox_Pais_Sede->setItemText(161, QCoreApplication::translate("cadastro", "Nam\303\255bia", nullptr));
        comboBox_Pais_Sede->setItemText(162, QCoreApplication::translate("cadastro", "Nauru", nullptr));
        comboBox_Pais_Sede->setItemText(163, QCoreApplication::translate("cadastro", "Nepal", nullptr));
        comboBox_Pais_Sede->setItemText(164, QCoreApplication::translate("cadastro", "Nicar\303\241gua", nullptr));
        comboBox_Pais_Sede->setItemText(165, QCoreApplication::translate("cadastro", "Nig\303\251ria", nullptr));
        comboBox_Pais_Sede->setItemText(166, QCoreApplication::translate("cadastro", "Niue", nullptr));
        comboBox_Pais_Sede->setItemText(167, QCoreApplication::translate("cadastro", "Noruega", nullptr));
        comboBox_Pais_Sede->setItemText(168, QCoreApplication::translate("cadastro", "Nova Caled\303\264nia", nullptr));
        comboBox_Pais_Sede->setItemText(169, QCoreApplication::translate("cadastro", "Nova Zel\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(170, QCoreApplication::translate("cadastro", "N\303\255ger", nullptr));
        comboBox_Pais_Sede->setItemText(171, QCoreApplication::translate("cadastro", "Om\303\243", nullptr));
        comboBox_Pais_Sede->setItemText(172, QCoreApplication::translate("cadastro", "Palau", nullptr));
        comboBox_Pais_Sede->setItemText(173, QCoreApplication::translate("cadastro", "Palestina", nullptr));
        comboBox_Pais_Sede->setItemText(174, QCoreApplication::translate("cadastro", "Panam\303\241", nullptr));
        comboBox_Pais_Sede->setItemText(175, QCoreApplication::translate("cadastro", "Papua-Nova Guin\303\251", nullptr));
        comboBox_Pais_Sede->setItemText(176, QCoreApplication::translate("cadastro", "Paquist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(177, QCoreApplication::translate("cadastro", "Paraguai", nullptr));
        comboBox_Pais_Sede->setItemText(178, QCoreApplication::translate("cadastro", "Pa\303\255s de Gales", nullptr));
        comboBox_Pais_Sede->setItemText(179, QCoreApplication::translate("cadastro", "Pa\303\255ses Baixos", nullptr));
        comboBox_Pais_Sede->setItemText(180, QCoreApplication::translate("cadastro", "Peru", nullptr));
        comboBox_Pais_Sede->setItemText(181, QCoreApplication::translate("cadastro", "Pitcairn", nullptr));
        comboBox_Pais_Sede->setItemText(182, QCoreApplication::translate("cadastro", "Polin\303\251sia Francesa", nullptr));
        comboBox_Pais_Sede->setItemText(183, QCoreApplication::translate("cadastro", "Pol\303\264nia", nullptr));
        comboBox_Pais_Sede->setItemText(184, QCoreApplication::translate("cadastro", "Porto Rico", nullptr));
        comboBox_Pais_Sede->setItemText(185, QCoreApplication::translate("cadastro", "Portugal", nullptr));
        comboBox_Pais_Sede->setItemText(186, QCoreApplication::translate("cadastro", "Quirguist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(187, QCoreApplication::translate("cadastro", "Qu\303\252nia", nullptr));
        comboBox_Pais_Sede->setItemText(188, QCoreApplication::translate("cadastro", "Reino Unido", nullptr));
        comboBox_Pais_Sede->setItemText(189, QCoreApplication::translate("cadastro", "Rep\303\272blica Centro-Africana", nullptr));
        comboBox_Pais_Sede->setItemText(190, QCoreApplication::translate("cadastro", "Rep\303\272blica Checa", nullptr));
        comboBox_Pais_Sede->setItemText(191, QCoreApplication::translate("cadastro", "Rep\303\272blica Democr\303\241tica do Congo", nullptr));
        comboBox_Pais_Sede->setItemText(192, QCoreApplication::translate("cadastro", "Rep\303\272blica do Congo", nullptr));
        comboBox_Pais_Sede->setItemText(193, QCoreApplication::translate("cadastro", "Rep\303\272blica Dominicana", nullptr));
        comboBox_Pais_Sede->setItemText(194, QCoreApplication::translate("cadastro", "Reuni\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(195, QCoreApplication::translate("cadastro", "Rom\303\252nia", nullptr));
        comboBox_Pais_Sede->setItemText(196, QCoreApplication::translate("cadastro", "Ruanda", nullptr));
        comboBox_Pais_Sede->setItemText(197, QCoreApplication::translate("cadastro", "R\303\272ssia", nullptr));
        comboBox_Pais_Sede->setItemText(198, QCoreApplication::translate("cadastro", "Saara Ocidental", nullptr));
        comboBox_Pais_Sede->setItemText(199, QCoreApplication::translate("cadastro", "Saint Martin", nullptr));
        comboBox_Pais_Sede->setItemText(200, QCoreApplication::translate("cadastro", "Saint-Barth\303\251lemy", nullptr));
        comboBox_Pais_Sede->setItemText(201, QCoreApplication::translate("cadastro", "Saint-Pierre e Miquelon", nullptr));
        comboBox_Pais_Sede->setItemText(202, QCoreApplication::translate("cadastro", "Samoa Americana", nullptr));
        comboBox_Pais_Sede->setItemText(203, QCoreApplication::translate("cadastro", "Samoa", nullptr));
        comboBox_Pais_Sede->setItemText(204, QCoreApplication::translate("cadastro", "Santa Helena, Ascens\303\243o e Trist\303\243o da Cunha", nullptr));
        comboBox_Pais_Sede->setItemText(205, QCoreApplication::translate("cadastro", "Santa L\303\272cia", nullptr));
        comboBox_Pais_Sede->setItemText(206, QCoreApplication::translate("cadastro", "Senegal", nullptr));
        comboBox_Pais_Sede->setItemText(207, QCoreApplication::translate("cadastro", "Serra Leoa", nullptr));
        comboBox_Pais_Sede->setItemText(208, QCoreApplication::translate("cadastro", "Seychelles", nullptr));
        comboBox_Pais_Sede->setItemText(209, QCoreApplication::translate("cadastro", "Singapura", nullptr));
        comboBox_Pais_Sede->setItemText(210, QCoreApplication::translate("cadastro", "Som\303\241lia", nullptr));
        comboBox_Pais_Sede->setItemText(211, QCoreApplication::translate("cadastro", "Sri Lanka", nullptr));
        comboBox_Pais_Sede->setItemText(212, QCoreApplication::translate("cadastro", "Suazil\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(213, QCoreApplication::translate("cadastro", "Sud\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(214, QCoreApplication::translate("cadastro", "Suriname", nullptr));
        comboBox_Pais_Sede->setItemText(215, QCoreApplication::translate("cadastro", "Su\303\251cia", nullptr));
        comboBox_Pais_Sede->setItemText(216, QCoreApplication::translate("cadastro", "Su\303\255\303\247a", nullptr));
        comboBox_Pais_Sede->setItemText(217, QCoreApplication::translate("cadastro", "Svalbard e Jan Mayen", nullptr));
        comboBox_Pais_Sede->setItemText(218, QCoreApplication::translate("cadastro", "S\303\243o Crist\303\263v\303\243o e Nevis", nullptr));
        comboBox_Pais_Sede->setItemText(219, QCoreApplication::translate("cadastro", "S\303\243o Marino", nullptr));
        comboBox_Pais_Sede->setItemText(220, QCoreApplication::translate("cadastro", "S\303\243o Tom\303\251 e Pr\303\255ncipe", nullptr));
        comboBox_Pais_Sede->setItemText(221, QCoreApplication::translate("cadastro", "S\303\243o Vicente e Granadinas", nullptr));
        comboBox_Pais_Sede->setItemText(222, QCoreApplication::translate("cadastro", "S\303\251rvia", nullptr));
        comboBox_Pais_Sede->setItemText(223, QCoreApplication::translate("cadastro", "S\303\255ria", nullptr));
        comboBox_Pais_Sede->setItemText(224, QCoreApplication::translate("cadastro", "Tadjiquist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(225, QCoreApplication::translate("cadastro", "Tail\303\242ndia", nullptr));
        comboBox_Pais_Sede->setItemText(226, QCoreApplication::translate("cadastro", "Taiwan", nullptr));
        comboBox_Pais_Sede->setItemText(227, QCoreApplication::translate("cadastro", "Tanz\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(228, QCoreApplication::translate("cadastro", "Terras Austrais e Ant\303\241rticas Francesas", nullptr));
        comboBox_Pais_Sede->setItemText(229, QCoreApplication::translate("cadastro", "Territ\303\263rio Brit\303\242nico do Oceano \303\215ndico", nullptr));
        comboBox_Pais_Sede->setItemText(230, QCoreApplication::translate("cadastro", "Timor-Leste", nullptr));
        comboBox_Pais_Sede->setItemText(231, QCoreApplication::translate("cadastro", "Togo", nullptr));
        comboBox_Pais_Sede->setItemText(232, QCoreApplication::translate("cadastro", "Tonga", nullptr));
        comboBox_Pais_Sede->setItemText(233, QCoreApplication::translate("cadastro", "Toquelau", nullptr));
        comboBox_Pais_Sede->setItemText(234, QCoreApplication::translate("cadastro", "Trinidad e Tobago", nullptr));
        comboBox_Pais_Sede->setItemText(235, QCoreApplication::translate("cadastro", "Tun\303\255sia", nullptr));
        comboBox_Pais_Sede->setItemText(236, QCoreApplication::translate("cadastro", "Turcas e Caicos", nullptr));
        comboBox_Pais_Sede->setItemText(237, QCoreApplication::translate("cadastro", "Turquemenist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(238, QCoreApplication::translate("cadastro", "Turquia", nullptr));
        comboBox_Pais_Sede->setItemText(239, QCoreApplication::translate("cadastro", "Tuvalu", nullptr));
        comboBox_Pais_Sede->setItemText(240, QCoreApplication::translate("cadastro", "Ucr\303\242nia", nullptr));
        comboBox_Pais_Sede->setItemText(241, QCoreApplication::translate("cadastro", "Uganda", nullptr));
        comboBox_Pais_Sede->setItemText(242, QCoreApplication::translate("cadastro", "Uruguai", nullptr));
        comboBox_Pais_Sede->setItemText(243, QCoreApplication::translate("cadastro", "Uzbequist\303\243o", nullptr));
        comboBox_Pais_Sede->setItemText(244, QCoreApplication::translate("cadastro", "Vanuatu", nullptr));
        comboBox_Pais_Sede->setItemText(245, QCoreApplication::translate("cadastro", "Vaticano", nullptr));
        comboBox_Pais_Sede->setItemText(246, QCoreApplication::translate("cadastro", "Venezuela", nullptr));
        comboBox_Pais_Sede->setItemText(247, QCoreApplication::translate("cadastro", "Vietname", nullptr));
        comboBox_Pais_Sede->setItemText(248, QCoreApplication::translate("cadastro", "Wallis e Futuna", nullptr));
        comboBox_Pais_Sede->setItemText(249, QCoreApplication::translate("cadastro", "Zimbabwe", nullptr));
        comboBox_Pais_Sede->setItemText(250, QCoreApplication::translate("cadastro", "Z\303\242mbia", nullptr));

        label_Estado_Sede->setText(QCoreApplication::translate("cadastro", "Estado Sede:", nullptr));
        label_Cidade_Sede->setText(QCoreApplication::translate("cadastro", "Cidade Sede:", nullptr));
        pushButton_Salvar->setText(QCoreApplication::translate("cadastro", "Salvar", nullptr));
        pushButton_Limpar->setText(QCoreApplication::translate("cadastro", "Limpar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastro: public Ui_cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
