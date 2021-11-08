/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QDate>
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastroMercearia
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QFormLayout *formLayout_10;
    QLabel *label;
    QLineEdit *LINE_NOME;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QSpinBox *SPIN_CODIGO;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *SPIN_PRECO;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QDateEdit *DAFA;
    QFormLayout *formLayout_5;
    QLabel *label_5;
    QDateEdit *DAVA;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout_6;
    QLabel *LABEL_UNIDADE;
    QSpinBox *SPIN_UNIDADE;
    QFormLayout *formLayout_7;
    QLabel *LABEL_PESO;
    QDoubleSpinBox *SPIN_PESO;
    QFormLayout *formLayout_11;
    QLabel *LABEL_VOLUME;
    QDoubleSpinBox *SPIN_VOLUME;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *formLayout_12;
    QLabel *LABEL_GLUTEN;
    QComboBox *COMBO_GLUTEN;
    QFormLayout *formLayout_8;
    QLabel *LABEL_ALCOOLICA;
    QComboBox *COMBO_ALCOOLICA;
    QFormLayout *formLayout_9;
    QLabel *LABEL_GAS;
    QComboBox *COMBO_GAS;
    QFormLayout *formLayout_13;
    QLabel *LABEL_FRAGRANCIA;
    QLineEdit *LINE_FRAGRANCIA;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_12;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *LINE_NOME_FORNECEDOR;
    QFormLayout *formLayout_14;
    QLabel *label_8;
    QComboBox *COMBOBOX_PAIS;
    QFormLayout *formLayout_15;
    QLabel *label_9;
    QLineEdit *LINE_ESTADO;
    QFormLayout *formLayout_16;
    QLabel *label_10;
    QLineEdit *LINE_CIDADE;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *BTN_SALVAR_MERC;
    QPushButton *BTN_CANCELAR_MERC;

    void setupUi(QDialog *CadastroMercearia)
    {
        if (CadastroMercearia->objectName().isEmpty())
            CadastroMercearia->setObjectName(QString::fromUtf8("CadastroMercearia"));
        CadastroMercearia->setEnabled(true);
        CadastroMercearia->resize(644, 545);
        widget = new QWidget(CadastroMercearia);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 11, 621, 531));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_11->setFont(font);

        verticalLayout->addWidget(label_11);

        formLayout_10 = new QFormLayout();
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label);

        LINE_NOME = new QLineEdit(widget);
        LINE_NOME->setObjectName(QString::fromUtf8("LINE_NOME"));

        formLayout_10->setWidget(0, QFormLayout::FieldRole, LINE_NOME);


        verticalLayout->addLayout(formLayout_10);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        SPIN_CODIGO = new QSpinBox(widget);
        SPIN_CODIGO->setObjectName(QString::fromUtf8("SPIN_CODIGO"));
        SPIN_CODIGO->setMaximum(9999);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, SPIN_CODIGO);


        horizontalLayout_2->addLayout(formLayout_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        SPIN_PRECO = new QDoubleSpinBox(widget);
        SPIN_PRECO->setObjectName(QString::fromUtf8("SPIN_PRECO"));
        SPIN_PRECO->setDecimals(2);
        SPIN_PRECO->setMaximum(100000000.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, SPIN_PRECO);


        horizontalLayout_2->addLayout(formLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        DAFA = new QDateEdit(widget);
        DAFA->setObjectName(QString::fromUtf8("DAFA"));
        DAFA->setEnabled(true);
        DAFA->setCalendarPopup(false);
        DAFA->setCurrentSectionIndex(0);
        DAFA->setTimeSpec(Qt::LocalTime);
        DAFA->setDate(QDate(2000, 1, 1));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, DAFA);


        horizontalLayout_3->addLayout(formLayout_4);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_5);

        DAVA = new QDateEdit(widget);
        DAVA->setObjectName(QString::fromUtf8("DAVA"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, DAVA);


        horizontalLayout_3->addLayout(formLayout_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        LABEL_UNIDADE = new QLabel(widget);
        LABEL_UNIDADE->setObjectName(QString::fromUtf8("LABEL_UNIDADE"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, LABEL_UNIDADE);

        SPIN_UNIDADE = new QSpinBox(widget);
        SPIN_UNIDADE->setObjectName(QString::fromUtf8("SPIN_UNIDADE"));
        SPIN_UNIDADE->setEnabled(true);
        SPIN_UNIDADE->setMaximum(1000);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, SPIN_UNIDADE);


        horizontalLayout_4->addLayout(formLayout_6);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        LABEL_PESO = new QLabel(widget);
        LABEL_PESO->setObjectName(QString::fromUtf8("LABEL_PESO"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, LABEL_PESO);

        SPIN_PESO = new QDoubleSpinBox(widget);
        SPIN_PESO->setObjectName(QString::fromUtf8("SPIN_PESO"));
        SPIN_PESO->setEnabled(true);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, SPIN_PESO);


        horizontalLayout_4->addLayout(formLayout_7);


        verticalLayout->addLayout(horizontalLayout_4);

        formLayout_11 = new QFormLayout();
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        LABEL_VOLUME = new QLabel(widget);
        LABEL_VOLUME->setObjectName(QString::fromUtf8("LABEL_VOLUME"));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, LABEL_VOLUME);

        SPIN_VOLUME = new QDoubleSpinBox(widget);
        SPIN_VOLUME->setObjectName(QString::fromUtf8("SPIN_VOLUME"));

        formLayout_11->setWidget(0, QFormLayout::FieldRole, SPIN_VOLUME);


        verticalLayout->addLayout(formLayout_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        formLayout_12 = new QFormLayout();
        formLayout_12->setObjectName(QString::fromUtf8("formLayout_12"));
        LABEL_GLUTEN = new QLabel(widget);
        LABEL_GLUTEN->setObjectName(QString::fromUtf8("LABEL_GLUTEN"));
        QFont font1;
        font1.setKerning(false);
        LABEL_GLUTEN->setFont(font1);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, LABEL_GLUTEN);

        COMBO_GLUTEN = new QComboBox(widget);
        COMBO_GLUTEN->addItem(QString());
        COMBO_GLUTEN->addItem(QString());
        COMBO_GLUTEN->addItem(QString());
        COMBO_GLUTEN->setObjectName(QString::fromUtf8("COMBO_GLUTEN"));

        formLayout_12->setWidget(0, QFormLayout::FieldRole, COMBO_GLUTEN);


        horizontalLayout_5->addLayout(formLayout_12);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        LABEL_ALCOOLICA = new QLabel(widget);
        LABEL_ALCOOLICA->setObjectName(QString::fromUtf8("LABEL_ALCOOLICA"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, LABEL_ALCOOLICA);

        COMBO_ALCOOLICA = new QComboBox(widget);
        COMBO_ALCOOLICA->addItem(QString());
        COMBO_ALCOOLICA->addItem(QString());
        COMBO_ALCOOLICA->addItem(QString());
        COMBO_ALCOOLICA->setObjectName(QString::fromUtf8("COMBO_ALCOOLICA"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, COMBO_ALCOOLICA);


        horizontalLayout_5->addLayout(formLayout_8);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        LABEL_GAS = new QLabel(widget);
        LABEL_GAS->setObjectName(QString::fromUtf8("LABEL_GAS"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, LABEL_GAS);

        COMBO_GAS = new QComboBox(widget);
        COMBO_GAS->addItem(QString());
        COMBO_GAS->addItem(QString());
        COMBO_GAS->addItem(QString());
        COMBO_GAS->setObjectName(QString::fromUtf8("COMBO_GAS"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, COMBO_GAS);


        horizontalLayout_5->addLayout(formLayout_9);


        verticalLayout->addLayout(horizontalLayout_5);

        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        LABEL_FRAGRANCIA = new QLabel(widget);
        LABEL_FRAGRANCIA->setObjectName(QString::fromUtf8("LABEL_FRAGRANCIA"));

        formLayout_13->setWidget(0, QFormLayout::LabelRole, LABEL_FRAGRANCIA);

        LINE_FRAGRANCIA = new QLineEdit(widget);
        LINE_FRAGRANCIA->setObjectName(QString::fromUtf8("LINE_FRAGRANCIA"));

        formLayout_13->setWidget(0, QFormLayout::FieldRole, LINE_FRAGRANCIA);


        verticalLayout->addLayout(formLayout_13);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        verticalLayout->addWidget(label_12);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        LINE_NOME_FORNECEDOR = new QLineEdit(widget);
        LINE_NOME_FORNECEDOR->setObjectName(QString::fromUtf8("LINE_NOME_FORNECEDOR"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, LINE_NOME_FORNECEDOR);


        verticalLayout->addLayout(formLayout_2);

        formLayout_14 = new QFormLayout();
        formLayout_14->setObjectName(QString::fromUtf8("formLayout_14"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_14->setWidget(0, QFormLayout::LabelRole, label_8);

        COMBOBOX_PAIS = new QComboBox(widget);
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->addItem(QString());
        COMBOBOX_PAIS->setObjectName(QString::fromUtf8("COMBOBOX_PAIS"));

        formLayout_14->setWidget(0, QFormLayout::FieldRole, COMBOBOX_PAIS);


        verticalLayout->addLayout(formLayout_14);

        formLayout_15 = new QFormLayout();
        formLayout_15->setObjectName(QString::fromUtf8("formLayout_15"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_15->setWidget(0, QFormLayout::LabelRole, label_9);

        LINE_ESTADO = new QLineEdit(widget);
        LINE_ESTADO->setObjectName(QString::fromUtf8("LINE_ESTADO"));

        formLayout_15->setWidget(0, QFormLayout::FieldRole, LINE_ESTADO);


        verticalLayout->addLayout(formLayout_15);

        formLayout_16 = new QFormLayout();
        formLayout_16->setObjectName(QString::fromUtf8("formLayout_16"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_16->setWidget(0, QFormLayout::LabelRole, label_10);

        LINE_CIDADE = new QLineEdit(widget);
        LINE_CIDADE->setObjectName(QString::fromUtf8("LINE_CIDADE"));

        formLayout_16->setWidget(0, QFormLayout::FieldRole, LINE_CIDADE);


        verticalLayout->addLayout(formLayout_16);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BTN_SALVAR_MERC = new QPushButton(widget);
        BTN_SALVAR_MERC->setObjectName(QString::fromUtf8("BTN_SALVAR_MERC"));

        horizontalLayout->addWidget(BTN_SALVAR_MERC);

        BTN_CANCELAR_MERC = new QPushButton(widget);
        BTN_CANCELAR_MERC->setObjectName(QString::fromUtf8("BTN_CANCELAR_MERC"));

        horizontalLayout->addWidget(BTN_CANCELAR_MERC);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(LINE_NOME, SPIN_CODIGO);
        QWidget::setTabOrder(SPIN_CODIGO, SPIN_PRECO);
        QWidget::setTabOrder(SPIN_PRECO, DAFA);
        QWidget::setTabOrder(DAFA, DAVA);
        QWidget::setTabOrder(DAVA, SPIN_UNIDADE);
        QWidget::setTabOrder(SPIN_UNIDADE, LINE_NOME_FORNECEDOR);
        QWidget::setTabOrder(LINE_NOME_FORNECEDOR, LINE_ESTADO);
        QWidget::setTabOrder(LINE_ESTADO, LINE_CIDADE);
        QWidget::setTabOrder(LINE_CIDADE, BTN_SALVAR_MERC);
        QWidget::setTabOrder(BTN_SALVAR_MERC, BTN_CANCELAR_MERC);

        retranslateUi(CadastroMercearia);

        QMetaObject::connectSlotsByName(CadastroMercearia);
    } // setupUi

    void retranslateUi(QDialog *CadastroMercearia)
    {
        CadastroMercearia->setWindowTitle(QCoreApplication::translate("CadastroMercearia", "Cadastrar", nullptr));
        label_11->setText(QCoreApplication::translate("CadastroMercearia", "Dados do Produto", nullptr));
        label->setText(QCoreApplication::translate("CadastroMercearia", "Nome do Produto:", nullptr));
        label_3->setText(QCoreApplication::translate("CadastroMercearia", "C\303\263digo:", nullptr));
        label_2->setText(QCoreApplication::translate("CadastroMercearia", "Pre\303\247o:", nullptr));
        label_4->setText(QCoreApplication::translate("CadastroMercearia", "Data de Fabrica\303\247\303\243o:", nullptr));
        label_5->setText(QCoreApplication::translate("CadastroMercearia", "Data de Validade:", nullptr));
        LABEL_UNIDADE->setText(QCoreApplication::translate("CadastroMercearia", "Unidades:", nullptr));
#if QT_CONFIG(tooltip)
        SPIN_UNIDADE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LABEL_PESO->setText(QCoreApplication::translate("CadastroMercearia", "Peso:", nullptr));
        LABEL_VOLUME->setText(QCoreApplication::translate("CadastroMercearia", "Volume/Unidade:", nullptr));
        LABEL_GLUTEN->setText(QCoreApplication::translate("CadastroMercearia", "Gl\303\272ten:", nullptr));
        COMBO_GLUTEN->setItemText(0, QCoreApplication::translate("CadastroMercearia", "Selecionar", nullptr));
        COMBO_GLUTEN->setItemText(1, QCoreApplication::translate("CadastroMercearia", "Sim", nullptr));
        COMBO_GLUTEN->setItemText(2, QCoreApplication::translate("CadastroMercearia", "N\303\243o", nullptr));

        LABEL_ALCOOLICA->setText(QCoreApplication::translate("CadastroMercearia", "Alco\303\263lica:", nullptr));
        COMBO_ALCOOLICA->setItemText(0, QCoreApplication::translate("CadastroMercearia", "Selecionar", nullptr));
        COMBO_ALCOOLICA->setItemText(1, QCoreApplication::translate("CadastroMercearia", "Sim", nullptr));
        COMBO_ALCOOLICA->setItemText(2, QCoreApplication::translate("CadastroMercearia", "N\303\243o", nullptr));

        LABEL_GAS->setText(QCoreApplication::translate("CadastroMercearia", "Gaseificada:", nullptr));
        COMBO_GAS->setItemText(0, QCoreApplication::translate("CadastroMercearia", "Selecionar", nullptr));
        COMBO_GAS->setItemText(1, QCoreApplication::translate("CadastroMercearia", "Sim", nullptr));
        COMBO_GAS->setItemText(2, QCoreApplication::translate("CadastroMercearia", "N\303\243o", nullptr));

        LABEL_FRAGRANCIA->setText(QCoreApplication::translate("CadastroMercearia", "Fragr\303\242ncia:", nullptr));
        label_12->setText(QCoreApplication::translate("CadastroMercearia", "Dados do Fornecedor", nullptr));
        label_7->setText(QCoreApplication::translate("CadastroMercearia", "Nome do Fornecedor:", nullptr));
        label_8->setText(QCoreApplication::translate("CadastroMercearia", "Pa\303\255s Sede:", nullptr));
        COMBOBOX_PAIS->setItemText(0, QCoreApplication::translate("CadastroMercearia", "Afeganist\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(1, QCoreApplication::translate("CadastroMercearia", "\303\201frica do Sul", nullptr));
        COMBOBOX_PAIS->setItemText(2, QCoreApplication::translate("CadastroMercearia", "Alb\303\242nia", nullptr));
        COMBOBOX_PAIS->setItemText(3, QCoreApplication::translate("CadastroMercearia", "Alemanha", nullptr));
        COMBOBOX_PAIS->setItemText(4, QCoreApplication::translate("CadastroMercearia", "Andorra", nullptr));
        COMBOBOX_PAIS->setItemText(5, QCoreApplication::translate("CadastroMercearia", "Angola", nullptr));
        COMBOBOX_PAIS->setItemText(6, QCoreApplication::translate("CadastroMercearia", "Anguilla", nullptr));
        COMBOBOX_PAIS->setItemText(7, QCoreApplication::translate("CadastroMercearia", "Antilhas Holandesas", nullptr));
        COMBOBOX_PAIS->setItemText(8, QCoreApplication::translate("CadastroMercearia", "Ant\303\241rctida", nullptr));
        COMBOBOX_PAIS->setItemText(9, QCoreApplication::translate("CadastroMercearia", "Ant\303\255gua e Barbuda", nullptr));
        COMBOBOX_PAIS->setItemText(10, QCoreApplication::translate("CadastroMercearia", "Argentina", nullptr));
        COMBOBOX_PAIS->setItemText(11, QCoreApplication::translate("CadastroMercearia", "Arg\303\251lia", nullptr));
        COMBOBOX_PAIS->setItemText(12, QCoreApplication::translate("CadastroMercearia", "Arm\303\252nia", nullptr));
        COMBOBOX_PAIS->setItemText(13, QCoreApplication::translate("CadastroMercearia", "Aruba", nullptr));
        COMBOBOX_PAIS->setItemText(14, QCoreApplication::translate("CadastroMercearia", "Ar\303\241bia Saudita", nullptr));
        COMBOBOX_PAIS->setItemText(15, QCoreApplication::translate("CadastroMercearia", "Austr\303\241lia", nullptr));
        COMBOBOX_PAIS->setItemText(16, QCoreApplication::translate("CadastroMercearia", "\303\201ustria", nullptr));
        COMBOBOX_PAIS->setItemText(17, QCoreApplication::translate("CadastroMercearia", "Azerbaij\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(18, QCoreApplication::translate("CadastroMercearia", "Bahamas", nullptr));
        COMBOBOX_PAIS->setItemText(19, QCoreApplication::translate("CadastroMercearia", "Bahrein", nullptr));
        COMBOBOX_PAIS->setItemText(20, QCoreApplication::translate("CadastroMercearia", "Bangladesh", nullptr));
        COMBOBOX_PAIS->setItemText(21, QCoreApplication::translate("CadastroMercearia", "Barbados", nullptr));
        COMBOBOX_PAIS->setItemText(22, QCoreApplication::translate("CadastroMercearia", "Belize", nullptr));
        COMBOBOX_PAIS->setItemText(23, QCoreApplication::translate("CadastroMercearia", "Benim", nullptr));
        COMBOBOX_PAIS->setItemText(24, QCoreApplication::translate("CadastroMercearia", "Bermudas", nullptr));
        COMBOBOX_PAIS->setItemText(25, QCoreApplication::translate("CadastroMercearia", "Bielorr\303\272ssia", nullptr));
        COMBOBOX_PAIS->setItemText(26, QCoreApplication::translate("CadastroMercearia", "Bol\303\255via", nullptr));
        COMBOBOX_PAIS->setItemText(27, QCoreApplication::translate("CadastroMercearia", "Botswana", nullptr));
        COMBOBOX_PAIS->setItemText(28, QCoreApplication::translate("CadastroMercearia", "Brasil", nullptr));
        COMBOBOX_PAIS->setItemText(29, QCoreApplication::translate("CadastroMercearia", "Brunei", nullptr));
        COMBOBOX_PAIS->setItemText(30, QCoreApplication::translate("CadastroMercearia", "Bulg\303\241ria", nullptr));
        COMBOBOX_PAIS->setItemText(31, QCoreApplication::translate("CadastroMercearia", "Burkina Faso", nullptr));
        COMBOBOX_PAIS->setItemText(32, QCoreApplication::translate("CadastroMercearia", "Burundi", nullptr));
        COMBOBOX_PAIS->setItemText(33, QCoreApplication::translate("CadastroMercearia", "But\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(34, QCoreApplication::translate("CadastroMercearia", "B\303\251lgica", nullptr));
        COMBOBOX_PAIS->setItemText(35, QCoreApplication::translate("CadastroMercearia", "B\303\263snia e Herzegovina", nullptr));
        COMBOBOX_PAIS->setItemText(36, QCoreApplication::translate("CadastroMercearia", "Cabo Verde", nullptr));
        COMBOBOX_PAIS->setItemText(37, QCoreApplication::translate("CadastroMercearia", "Camar\303\265es", nullptr));
        COMBOBOX_PAIS->setItemText(38, QCoreApplication::translate("CadastroMercearia", "Camboja", nullptr));
        COMBOBOX_PAIS->setItemText(39, QCoreApplication::translate("CadastroMercearia", "Canad\303\241", nullptr));
        COMBOBOX_PAIS->setItemText(40, QCoreApplication::translate("CadastroMercearia", "Catar", nullptr));
        COMBOBOX_PAIS->setItemText(41, QCoreApplication::translate("CadastroMercearia", "Cazaquist\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(42, QCoreApplication::translate("CadastroMercearia", "Chade", nullptr));
        COMBOBOX_PAIS->setItemText(43, QCoreApplication::translate("CadastroMercearia", "Chile", nullptr));
        COMBOBOX_PAIS->setItemText(44, QCoreApplication::translate("CadastroMercearia", "China", nullptr));
        COMBOBOX_PAIS->setItemText(45, QCoreApplication::translate("CadastroMercearia", "Chipre", nullptr));
        COMBOBOX_PAIS->setItemText(46, QCoreApplication::translate("CadastroMercearia", "Col\303\264mbia", nullptr));
        COMBOBOX_PAIS->setItemText(47, QCoreApplication::translate("CadastroMercearia", "Comores", nullptr));
        COMBOBOX_PAIS->setItemText(48, QCoreApplication::translate("CadastroMercearia", "Coreia do Norte", nullptr));
        COMBOBOX_PAIS->setItemText(49, QCoreApplication::translate("CadastroMercearia", "Coreia do Sul", nullptr));
        COMBOBOX_PAIS->setItemText(50, QCoreApplication::translate("CadastroMercearia", "Costa do Marfim", nullptr));
        COMBOBOX_PAIS->setItemText(51, QCoreApplication::translate("CadastroMercearia", "Costa Rica", nullptr));
        COMBOBOX_PAIS->setItemText(52, QCoreApplication::translate("CadastroMercearia", "Cro\303\241cia", nullptr));
        COMBOBOX_PAIS->setItemText(53, QCoreApplication::translate("CadastroMercearia", "Cuba", nullptr));
        COMBOBOX_PAIS->setItemText(54, QCoreApplication::translate("CadastroMercearia", "Dinamarca", nullptr));
        COMBOBOX_PAIS->setItemText(55, QCoreApplication::translate("CadastroMercearia", "Djibouti", nullptr));
        COMBOBOX_PAIS->setItemText(56, QCoreApplication::translate("CadastroMercearia", "Dominica", nullptr));
        COMBOBOX_PAIS->setItemText(57, QCoreApplication::translate("CadastroMercearia", "Egito", nullptr));
        COMBOBOX_PAIS->setItemText(58, QCoreApplication::translate("CadastroMercearia", "El Salvador", nullptr));
        COMBOBOX_PAIS->setItemText(59, QCoreApplication::translate("CadastroMercearia", "Emirados \303\201rabes Unidos", nullptr));
        COMBOBOX_PAIS->setItemText(60, QCoreApplication::translate("CadastroMercearia", "Equador", nullptr));
        COMBOBOX_PAIS->setItemText(61, QCoreApplication::translate("CadastroMercearia", "Eritreia", nullptr));
        COMBOBOX_PAIS->setItemText(62, QCoreApplication::translate("CadastroMercearia", "Esc\303\263cia", nullptr));
        COMBOBOX_PAIS->setItemText(63, QCoreApplication::translate("CadastroMercearia", "Eslov\303\241quia", nullptr));
        COMBOBOX_PAIS->setItemText(64, QCoreApplication::translate("CadastroMercearia", "Eslov\303\252nia", nullptr));
        COMBOBOX_PAIS->setItemText(65, QCoreApplication::translate("CadastroMercearia", "Espanha", nullptr));
        COMBOBOX_PAIS->setItemText(66, QCoreApplication::translate("CadastroMercearia", "Estados Federados da Micron\303\251sia", nullptr));
        COMBOBOX_PAIS->setItemText(67, QCoreApplication::translate("CadastroMercearia", "Estados Unidos", nullptr));
        COMBOBOX_PAIS->setItemText(68, QCoreApplication::translate("CadastroMercearia", "Est\303\264nia", nullptr));
        COMBOBOX_PAIS->setItemText(69, QCoreApplication::translate("CadastroMercearia", "Eti\303\263pia", nullptr));
        COMBOBOX_PAIS->setItemText(70, QCoreApplication::translate("CadastroMercearia", "Fiji", nullptr));
        COMBOBOX_PAIS->setItemText(71, QCoreApplication::translate("CadastroMercearia", "Filipinas", nullptr));
        COMBOBOX_PAIS->setItemText(72, QCoreApplication::translate("CadastroMercearia", "Finl\303\242ndia", nullptr));
        COMBOBOX_PAIS->setItemText(73, QCoreApplication::translate("CadastroMercearia", "Fran\303\247a", nullptr));
        COMBOBOX_PAIS->setItemText(74, QCoreApplication::translate("CadastroMercearia", "Gab\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(75, QCoreApplication::translate("CadastroMercearia", "Gana", nullptr));
        COMBOBOX_PAIS->setItemText(76, QCoreApplication::translate("CadastroMercearia", "Ge\303\263rgia", nullptr));
        COMBOBOX_PAIS->setItemText(77, QCoreApplication::translate("CadastroMercearia", "Gibraltar", nullptr));
        COMBOBOX_PAIS->setItemText(78, QCoreApplication::translate("CadastroMercearia", "Granada", nullptr));
        COMBOBOX_PAIS->setItemText(79, QCoreApplication::translate("CadastroMercearia", "Gronel\303\242ndia", nullptr));
        COMBOBOX_PAIS->setItemText(80, QCoreApplication::translate("CadastroMercearia", "Gr\303\251cia", nullptr));
        COMBOBOX_PAIS->setItemText(81, QCoreApplication::translate("CadastroMercearia", "Guadalupe", nullptr));
        COMBOBOX_PAIS->setItemText(82, QCoreApplication::translate("CadastroMercearia", "Guam", nullptr));
        COMBOBOX_PAIS->setItemText(83, QCoreApplication::translate("CadastroMercearia", "Guatemala", nullptr));
        COMBOBOX_PAIS->setItemText(84, QCoreApplication::translate("CadastroMercearia", "Guernesei", nullptr));
        COMBOBOX_PAIS->setItemText(85, QCoreApplication::translate("CadastroMercearia", "Guiana", nullptr));
        COMBOBOX_PAIS->setItemText(86, QCoreApplication::translate("CadastroMercearia", "Guiana Francesa", nullptr));
        COMBOBOX_PAIS->setItemText(87, QCoreApplication::translate("CadastroMercearia", "Guin\303\251", nullptr));
        COMBOBOX_PAIS->setItemText(88, QCoreApplication::translate("CadastroMercearia", "Guin\303\251 Equatorial", nullptr));
        COMBOBOX_PAIS->setItemText(89, QCoreApplication::translate("CadastroMercearia", "Guin\303\251-Bissau", nullptr));
        COMBOBOX_PAIS->setItemText(90, QCoreApplication::translate("CadastroMercearia", "G\303\242mbia", nullptr));
        COMBOBOX_PAIS->setItemText(91, QCoreApplication::translate("CadastroMercearia", "Haiti", nullptr));
        COMBOBOX_PAIS->setItemText(92, QCoreApplication::translate("CadastroMercearia", "Honduras", nullptr));
        COMBOBOX_PAIS->setItemText(93, QCoreApplication::translate("CadastroMercearia", "Hong Kong", nullptr));
        COMBOBOX_PAIS->setItemText(94, QCoreApplication::translate("CadastroMercearia", "Hungria", nullptr));
        COMBOBOX_PAIS->setItemText(95, QCoreApplication::translate("CadastroMercearia", "Ilha Bouvet", nullptr));
        COMBOBOX_PAIS->setItemText(96, QCoreApplication::translate("CadastroMercearia", "Ilha de Man", nullptr));
        COMBOBOX_PAIS->setItemText(97, QCoreApplication::translate("CadastroMercearia", "Ilha do Natal", nullptr));
        COMBOBOX_PAIS->setItemText(98, QCoreApplication::translate("CadastroMercearia", "Ilha Heard e Ilhas McDonald", nullptr));
        COMBOBOX_PAIS->setItemText(99, QCoreApplication::translate("CadastroMercearia", "Ilha Norfolk", nullptr));
        COMBOBOX_PAIS->setItemText(100, QCoreApplication::translate("CadastroMercearia", "Ilhas Cayman", nullptr));
        COMBOBOX_PAIS->setItemText(101, QCoreApplication::translate("CadastroMercearia", "Ilhas Cocos (Keeling)", nullptr));
        COMBOBOX_PAIS->setItemText(102, QCoreApplication::translate("CadastroMercearia", "Ilhas Cook", nullptr));
        COMBOBOX_PAIS->setItemText(103, QCoreApplication::translate("CadastroMercearia", "Ilhas Fero\303\251", nullptr));
        COMBOBOX_PAIS->setItemText(104, QCoreApplication::translate("CadastroMercearia", "Ilhas Ge\303\263rgia do Sul e Sandwich do Sul", nullptr));
        COMBOBOX_PAIS->setItemText(105, QCoreApplication::translate("CadastroMercearia", "Ilhas Malvinas", nullptr));
        COMBOBOX_PAIS->setItemText(106, QCoreApplication::translate("CadastroMercearia", "Ilhas Marshall", nullptr));
        COMBOBOX_PAIS->setItemText(107, QCoreApplication::translate("CadastroMercearia", "Ilhas Menores Distantes dos Estados Unidos", nullptr));
        COMBOBOX_PAIS->setItemText(108, QCoreApplication::translate("CadastroMercearia", "Ilhas Salom\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(109, QCoreApplication::translate("CadastroMercearia", "Ilhas Virgens Americanas", nullptr));
        COMBOBOX_PAIS->setItemText(110, QCoreApplication::translate("CadastroMercearia", "Ilhas Virgens Brit\303\242nicas", nullptr));
        COMBOBOX_PAIS->setItemText(111, QCoreApplication::translate("CadastroMercearia", "Ilhas \303\205land", nullptr));
        COMBOBOX_PAIS->setItemText(112, QCoreApplication::translate("CadastroMercearia", "Indon\303\251sia", nullptr));
        COMBOBOX_PAIS->setItemText(113, QCoreApplication::translate("CadastroMercearia", "Inglaterra", nullptr));
        COMBOBOX_PAIS->setItemText(114, QCoreApplication::translate("CadastroMercearia", "\303\215ndia", nullptr));
        COMBOBOX_PAIS->setItemText(115, QCoreApplication::translate("CadastroMercearia", "Iraque", nullptr));
        COMBOBOX_PAIS->setItemText(116, QCoreApplication::translate("CadastroMercearia", "Irlanda do Norte", nullptr));
        COMBOBOX_PAIS->setItemText(117, QCoreApplication::translate("CadastroMercearia", "Irlanda", nullptr));
        COMBOBOX_PAIS->setItemText(118, QCoreApplication::translate("CadastroMercearia", "Ir\303\243", nullptr));
        COMBOBOX_PAIS->setItemText(119, QCoreApplication::translate("CadastroMercearia", "Isl\303\242ndia", nullptr));
        COMBOBOX_PAIS->setItemText(120, QCoreApplication::translate("CadastroMercearia", "Israel", nullptr));
        COMBOBOX_PAIS->setItemText(121, QCoreApplication::translate("CadastroMercearia", "It\303\241lia", nullptr));
        COMBOBOX_PAIS->setItemText(122, QCoreApplication::translate("CadastroMercearia", "I\303\252men", nullptr));
        COMBOBOX_PAIS->setItemText(123, QCoreApplication::translate("CadastroMercearia", "Jamaica", nullptr));
        COMBOBOX_PAIS->setItemText(124, QCoreApplication::translate("CadastroMercearia", "Jap\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(125, QCoreApplication::translate("CadastroMercearia", "Jersey", nullptr));
        COMBOBOX_PAIS->setItemText(126, QCoreApplication::translate("CadastroMercearia", "Jord\303\242nia", nullptr));
        COMBOBOX_PAIS->setItemText(127, QCoreApplication::translate("CadastroMercearia", "Kiribati", nullptr));
        COMBOBOX_PAIS->setItemText(128, QCoreApplication::translate("CadastroMercearia", "Kuwait", nullptr));
        COMBOBOX_PAIS->setItemText(129, QCoreApplication::translate("CadastroMercearia", "Laos", nullptr));
        COMBOBOX_PAIS->setItemText(130, QCoreApplication::translate("CadastroMercearia", "Lesoto", nullptr));
        COMBOBOX_PAIS->setItemText(131, QCoreApplication::translate("CadastroMercearia", "Let\303\264nia", nullptr));
        COMBOBOX_PAIS->setItemText(132, QCoreApplication::translate("CadastroMercearia", "Lib\303\251ria", nullptr));
        COMBOBOX_PAIS->setItemText(133, QCoreApplication::translate("CadastroMercearia", "Liechtenstein", nullptr));
        COMBOBOX_PAIS->setItemText(134, QCoreApplication::translate("CadastroMercearia", "Litu\303\242nia", nullptr));
        COMBOBOX_PAIS->setItemText(135, QCoreApplication::translate("CadastroMercearia", "Luxemburgo", nullptr));
        COMBOBOX_PAIS->setItemText(136, QCoreApplication::translate("CadastroMercearia", "L\303\255bano", nullptr));
        COMBOBOX_PAIS->setItemText(137, QCoreApplication::translate("CadastroMercearia", "L\303\255bia", nullptr));
        COMBOBOX_PAIS->setItemText(138, QCoreApplication::translate("CadastroMercearia", "Macau", nullptr));
        COMBOBOX_PAIS->setItemText(139, QCoreApplication::translate("CadastroMercearia", "Maced\303\264nia", nullptr));
        COMBOBOX_PAIS->setItemText(140, QCoreApplication::translate("CadastroMercearia", "Madag\303\241scar", nullptr));
        COMBOBOX_PAIS->setItemText(141, QCoreApplication::translate("CadastroMercearia", "Malawi", nullptr));
        COMBOBOX_PAIS->setItemText(142, QCoreApplication::translate("CadastroMercearia", "Maldivas", nullptr));
        COMBOBOX_PAIS->setItemText(143, QCoreApplication::translate("CadastroMercearia", "Mali", nullptr));
        COMBOBOX_PAIS->setItemText(144, QCoreApplication::translate("CadastroMercearia", "Malta", nullptr));
        COMBOBOX_PAIS->setItemText(145, QCoreApplication::translate("CadastroMercearia", "Mal\303\241sia", nullptr));
        COMBOBOX_PAIS->setItemText(146, QCoreApplication::translate("CadastroMercearia", "Marianas Setentrionais", nullptr));
        COMBOBOX_PAIS->setItemText(147, QCoreApplication::translate("CadastroMercearia", "Marrocos", nullptr));
        COMBOBOX_PAIS->setItemText(148, QCoreApplication::translate("CadastroMercearia", "Martinica", nullptr));
        COMBOBOX_PAIS->setItemText(149, QCoreApplication::translate("CadastroMercearia", "Maurit\303\242nia", nullptr));
        COMBOBOX_PAIS->setItemText(150, QCoreApplication::translate("CadastroMercearia", "Maur\303\255cia", nullptr));
        COMBOBOX_PAIS->setItemText(151, QCoreApplication::translate("CadastroMercearia", "Mayotte", nullptr));
        COMBOBOX_PAIS->setItemText(152, QCoreApplication::translate("CadastroMercearia", "Mold\303\241via", nullptr));
        COMBOBOX_PAIS->setItemText(153, QCoreApplication::translate("CadastroMercearia", "Mong\303\263lia", nullptr));
        COMBOBOX_PAIS->setItemText(154, QCoreApplication::translate("CadastroMercearia", "Montenegro", nullptr));
        COMBOBOX_PAIS->setItemText(155, QCoreApplication::translate("CadastroMercearia", "Montserrat", nullptr));
        COMBOBOX_PAIS->setItemText(156, QCoreApplication::translate("CadastroMercearia", "Mo\303\247ambique", nullptr));
        COMBOBOX_PAIS->setItemText(157, QCoreApplication::translate("CadastroMercearia", "Myanmar", nullptr));
        COMBOBOX_PAIS->setItemText(158, QCoreApplication::translate("CadastroMercearia", "M\303\251xico", nullptr));
        COMBOBOX_PAIS->setItemText(159, QCoreApplication::translate("CadastroMercearia", "M\303\264naco", nullptr));
        COMBOBOX_PAIS->setItemText(160, QCoreApplication::translate("CadastroMercearia", "Nam\303\255bia", nullptr));
        COMBOBOX_PAIS->setItemText(161, QCoreApplication::translate("CadastroMercearia", "Nauru", nullptr));
        COMBOBOX_PAIS->setItemText(162, QCoreApplication::translate("CadastroMercearia", "Nepal", nullptr));
        COMBOBOX_PAIS->setItemText(163, QCoreApplication::translate("CadastroMercearia", "Nicar\303\241gua", nullptr));
        COMBOBOX_PAIS->setItemText(164, QCoreApplication::translate("CadastroMercearia", "Nig\303\251ria", nullptr));
        COMBOBOX_PAIS->setItemText(165, QCoreApplication::translate("CadastroMercearia", "Niue", nullptr));
        COMBOBOX_PAIS->setItemText(166, QCoreApplication::translate("CadastroMercearia", "Noruega", nullptr));
        COMBOBOX_PAIS->setItemText(167, QCoreApplication::translate("CadastroMercearia", "Nova Caled\303\264nia", nullptr));
        COMBOBOX_PAIS->setItemText(168, QCoreApplication::translate("CadastroMercearia", "Nova Zel\303\242ndia", nullptr));
        COMBOBOX_PAIS->setItemText(169, QCoreApplication::translate("CadastroMercearia", "N\303\255ger", nullptr));
        COMBOBOX_PAIS->setItemText(170, QCoreApplication::translate("CadastroMercearia", "Om\303\243", nullptr));
        COMBOBOX_PAIS->setItemText(171, QCoreApplication::translate("CadastroMercearia", "Palau", nullptr));
        COMBOBOX_PAIS->setItemText(172, QCoreApplication::translate("CadastroMercearia", "Palestina", nullptr));
        COMBOBOX_PAIS->setItemText(173, QCoreApplication::translate("CadastroMercearia", "Panam\303\241", nullptr));
        COMBOBOX_PAIS->setItemText(174, QCoreApplication::translate("CadastroMercearia", "Papua-Nova Guin\303\251", nullptr));
        COMBOBOX_PAIS->setItemText(175, QCoreApplication::translate("CadastroMercearia", "Paquist\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(176, QCoreApplication::translate("CadastroMercearia", "Paraguai", nullptr));
        COMBOBOX_PAIS->setItemText(177, QCoreApplication::translate("CadastroMercearia", "Pa\303\255s de Gales", nullptr));
        COMBOBOX_PAIS->setItemText(178, QCoreApplication::translate("CadastroMercearia", "Pa\303\255ses Baixos", nullptr));
        COMBOBOX_PAIS->setItemText(179, QCoreApplication::translate("CadastroMercearia", "Peru", nullptr));
        COMBOBOX_PAIS->setItemText(180, QCoreApplication::translate("CadastroMercearia", "Pitcairn", nullptr));
        COMBOBOX_PAIS->setItemText(181, QCoreApplication::translate("CadastroMercearia", "Polin\303\251sia Francesa", nullptr));
        COMBOBOX_PAIS->setItemText(182, QCoreApplication::translate("CadastroMercearia", "Pol\303\264nia", nullptr));
        COMBOBOX_PAIS->setItemText(183, QCoreApplication::translate("CadastroMercearia", "Porto Rico", nullptr));
        COMBOBOX_PAIS->setItemText(184, QCoreApplication::translate("CadastroMercearia", "Portugal", nullptr));
        COMBOBOX_PAIS->setItemText(185, QCoreApplication::translate("CadastroMercearia", "Quirguist\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(186, QCoreApplication::translate("CadastroMercearia", "Qu\303\252nia", nullptr));
        COMBOBOX_PAIS->setItemText(187, QCoreApplication::translate("CadastroMercearia", "Reino Unido", nullptr));
        COMBOBOX_PAIS->setItemText(188, QCoreApplication::translate("CadastroMercearia", "Rep\303\272blica Centro-Africana", nullptr));
        COMBOBOX_PAIS->setItemText(189, QCoreApplication::translate("CadastroMercearia", "Rep\303\272blica Checa", nullptr));
        COMBOBOX_PAIS->setItemText(190, QCoreApplication::translate("CadastroMercearia", "Rep\303\272blica Democr\303\241tica do Congo", nullptr));
        COMBOBOX_PAIS->setItemText(191, QCoreApplication::translate("CadastroMercearia", "Rep\303\272blica do Congo", nullptr));
        COMBOBOX_PAIS->setItemText(192, QCoreApplication::translate("CadastroMercearia", "Rep\303\272blica Dominicana", nullptr));
        COMBOBOX_PAIS->setItemText(193, QCoreApplication::translate("CadastroMercearia", "Reuni\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(194, QCoreApplication::translate("CadastroMercearia", "Rom\303\252nia", nullptr));
        COMBOBOX_PAIS->setItemText(195, QCoreApplication::translate("CadastroMercearia", "Ruanda", nullptr));
        COMBOBOX_PAIS->setItemText(196, QCoreApplication::translate("CadastroMercearia", "R\303\272ssia", nullptr));
        COMBOBOX_PAIS->setItemText(197, QCoreApplication::translate("CadastroMercearia", "Saara Ocidental", nullptr));
        COMBOBOX_PAIS->setItemText(198, QCoreApplication::translate("CadastroMercearia", "Saint Martin", nullptr));
        COMBOBOX_PAIS->setItemText(199, QCoreApplication::translate("CadastroMercearia", "Saint-Barth\303\251lemy", nullptr));
        COMBOBOX_PAIS->setItemText(200, QCoreApplication::translate("CadastroMercearia", "Saint-Pierre e Miquelon", nullptr));
        COMBOBOX_PAIS->setItemText(201, QCoreApplication::translate("CadastroMercearia", "Samoa Americana", nullptr));
        COMBOBOX_PAIS->setItemText(202, QCoreApplication::translate("CadastroMercearia", "Samoa", nullptr));
        COMBOBOX_PAIS->setItemText(203, QCoreApplication::translate("CadastroMercearia", "Santa Helena, Ascens\303\243o e Trist\303\243o da Cunha", nullptr));
        COMBOBOX_PAIS->setItemText(204, QCoreApplication::translate("CadastroMercearia", "Santa L\303\272cia", nullptr));
        COMBOBOX_PAIS->setItemText(205, QCoreApplication::translate("CadastroMercearia", "Senegal", nullptr));
        COMBOBOX_PAIS->setItemText(206, QCoreApplication::translate("CadastroMercearia", "Serra Leoa", nullptr));
        COMBOBOX_PAIS->setItemText(207, QCoreApplication::translate("CadastroMercearia", "Seychelles", nullptr));
        COMBOBOX_PAIS->setItemText(208, QCoreApplication::translate("CadastroMercearia", "Singapura", nullptr));
        COMBOBOX_PAIS->setItemText(209, QCoreApplication::translate("CadastroMercearia", "Som\303\241lia", nullptr));
        COMBOBOX_PAIS->setItemText(210, QCoreApplication::translate("CadastroMercearia", "Sri Lanka", nullptr));
        COMBOBOX_PAIS->setItemText(211, QCoreApplication::translate("CadastroMercearia", "Suazil\303\242ndia", nullptr));
        COMBOBOX_PAIS->setItemText(212, QCoreApplication::translate("CadastroMercearia", "Sud\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(213, QCoreApplication::translate("CadastroMercearia", "Suriname", nullptr));
        COMBOBOX_PAIS->setItemText(214, QCoreApplication::translate("CadastroMercearia", "Su\303\251cia", nullptr));
        COMBOBOX_PAIS->setItemText(215, QCoreApplication::translate("CadastroMercearia", "Su\303\255\303\247a", nullptr));
        COMBOBOX_PAIS->setItemText(216, QCoreApplication::translate("CadastroMercearia", "Svalbard e Jan Mayen", nullptr));
        COMBOBOX_PAIS->setItemText(217, QCoreApplication::translate("CadastroMercearia", "S\303\243o Crist\303\263v\303\243o e Nevis", nullptr));
        COMBOBOX_PAIS->setItemText(218, QCoreApplication::translate("CadastroMercearia", "S\303\243o Marino", nullptr));
        COMBOBOX_PAIS->setItemText(219, QCoreApplication::translate("CadastroMercearia", "S\303\243o Tom\303\251 e Pr\303\255ncipe", nullptr));
        COMBOBOX_PAIS->setItemText(220, QCoreApplication::translate("CadastroMercearia", "S\303\243o Vicente e Granadinas", nullptr));
        COMBOBOX_PAIS->setItemText(221, QCoreApplication::translate("CadastroMercearia", "S\303\251rvia", nullptr));
        COMBOBOX_PAIS->setItemText(222, QCoreApplication::translate("CadastroMercearia", "S\303\255ria", nullptr));
        COMBOBOX_PAIS->setItemText(223, QCoreApplication::translate("CadastroMercearia", "Tadjiquist\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(224, QCoreApplication::translate("CadastroMercearia", "Tail\303\242ndia", nullptr));
        COMBOBOX_PAIS->setItemText(225, QCoreApplication::translate("CadastroMercearia", "Taiwan", nullptr));
        COMBOBOX_PAIS->setItemText(226, QCoreApplication::translate("CadastroMercearia", "Tanz\303\242nia", nullptr));
        COMBOBOX_PAIS->setItemText(227, QCoreApplication::translate("CadastroMercearia", "Terras Austrais e Ant\303\241rticas Francesas", nullptr));
        COMBOBOX_PAIS->setItemText(228, QCoreApplication::translate("CadastroMercearia", "Territ\303\263rio Brit\303\242nico do Oceano \303\215ndico", nullptr));
        COMBOBOX_PAIS->setItemText(229, QCoreApplication::translate("CadastroMercearia", "Timor-Leste", nullptr));
        COMBOBOX_PAIS->setItemText(230, QCoreApplication::translate("CadastroMercearia", "Togo", nullptr));
        COMBOBOX_PAIS->setItemText(231, QCoreApplication::translate("CadastroMercearia", "Tonga", nullptr));
        COMBOBOX_PAIS->setItemText(232, QCoreApplication::translate("CadastroMercearia", "Toquelau", nullptr));
        COMBOBOX_PAIS->setItemText(233, QCoreApplication::translate("CadastroMercearia", "Trinidad e Tobago", nullptr));
        COMBOBOX_PAIS->setItemText(234, QCoreApplication::translate("CadastroMercearia", "Tun\303\255sia", nullptr));
        COMBOBOX_PAIS->setItemText(235, QCoreApplication::translate("CadastroMercearia", "Turcas e Caicos", nullptr));
        COMBOBOX_PAIS->setItemText(236, QCoreApplication::translate("CadastroMercearia", "Turquemenist\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(237, QCoreApplication::translate("CadastroMercearia", "Turquia", nullptr));
        COMBOBOX_PAIS->setItemText(238, QCoreApplication::translate("CadastroMercearia", "Tuvalu", nullptr));
        COMBOBOX_PAIS->setItemText(239, QCoreApplication::translate("CadastroMercearia", "Ucr\303\242nia", nullptr));
        COMBOBOX_PAIS->setItemText(240, QCoreApplication::translate("CadastroMercearia", "Uganda", nullptr));
        COMBOBOX_PAIS->setItemText(241, QCoreApplication::translate("CadastroMercearia", "Uruguai", nullptr));
        COMBOBOX_PAIS->setItemText(242, QCoreApplication::translate("CadastroMercearia", "Uzbequist\303\243o", nullptr));
        COMBOBOX_PAIS->setItemText(243, QCoreApplication::translate("CadastroMercearia", "Vanuatu", nullptr));
        COMBOBOX_PAIS->setItemText(244, QCoreApplication::translate("CadastroMercearia", "Vaticano", nullptr));
        COMBOBOX_PAIS->setItemText(245, QCoreApplication::translate("CadastroMercearia", "Venezuela", nullptr));
        COMBOBOX_PAIS->setItemText(246, QCoreApplication::translate("CadastroMercearia", "Vietname", nullptr));
        COMBOBOX_PAIS->setItemText(247, QCoreApplication::translate("CadastroMercearia", "Wallis e Futuna", nullptr));
        COMBOBOX_PAIS->setItemText(248, QCoreApplication::translate("CadastroMercearia", "Zimbabwe", nullptr));
        COMBOBOX_PAIS->setItemText(249, QCoreApplication::translate("CadastroMercearia", "Z\303\242mbia", nullptr));

        label_9->setText(QCoreApplication::translate("CadastroMercearia", "Estado Sede:", nullptr));
        label_10->setText(QCoreApplication::translate("CadastroMercearia", "Cidade Sede:", nullptr));
        BTN_SALVAR_MERC->setText(QCoreApplication::translate("CadastroMercearia", "Salvar", nullptr));
        BTN_CANCELAR_MERC->setText(QCoreApplication::translate("CadastroMercearia", "Limpar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroMercearia: public Ui_CadastroMercearia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
