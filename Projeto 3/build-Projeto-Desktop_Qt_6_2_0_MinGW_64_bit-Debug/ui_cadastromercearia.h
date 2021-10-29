/********************************************************************************
** Form generated from reading UI file 'cadastromercearia.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROMERCEARIA_H
#define UI_CADASTROMERCEARIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

QT_BEGIN_NAMESPACE

class Ui_CadastroMercearia
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLabel *label_5;
    QDateEdit *dateEdit_2;
    QLabel *label_6;
    QSpinBox *spinBox_2;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_4;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CadastroMercearia)
    {
        if (CadastroMercearia->objectName().isEmpty())
            CadastroMercearia->setObjectName(QString::fromUtf8("CadastroMercearia"));
        CadastroMercearia->resize(625, 439);
        verticalLayout = new QVBoxLayout(CadastroMercearia);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(CadastroMercearia);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(CadastroMercearia);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(CadastroMercearia);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        doubleSpinBox = new QDoubleSpinBox(CadastroMercearia);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(2);
        doubleSpinBox->setMaximum(100000000.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleSpinBox);

        label_3 = new QLabel(CadastroMercearia);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        spinBox = new QSpinBox(CadastroMercearia);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(9999);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox);

        label_4 = new QLabel(CadastroMercearia);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        dateEdit = new QDateEdit(CadastroMercearia);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, dateEdit);

        label_5 = new QLabel(CadastroMercearia);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        dateEdit_2 = new QDateEdit(CadastroMercearia);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        formLayout->setWidget(6, QFormLayout::FieldRole, dateEdit_2);

        label_6 = new QLabel(CadastroMercearia);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_6);

        spinBox_2 = new QSpinBox(CadastroMercearia);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(1000);

        formLayout->setWidget(7, QFormLayout::FieldRole, spinBox_2);

        label_11 = new QLabel(CadastroMercearia);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_11->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_11);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer_2);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_12 = new QLabel(CadastroMercearia);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        verticalLayout->addWidget(label_12);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(CadastroMercearia);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEdit_2 = new QLineEdit(CadastroMercearia);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_2);

        label_8 = new QLabel(CadastroMercearia);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_3 = new QLineEdit(CadastroMercearia);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_3);

        label_9 = new QLabel(CadastroMercearia);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(CadastroMercearia);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_10);

        lineEdit_4 = new QLineEdit(CadastroMercearia);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_4);

        lineEdit_5 = new QLineEdit(CadastroMercearia);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_5);


        verticalLayout->addLayout(formLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(CadastroMercearia);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(CadastroMercearia);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CadastroMercearia);

        QMetaObject::connectSlotsByName(CadastroMercearia);
    } // setupUi

    void retranslateUi(QDialog *CadastroMercearia)
    {
        CadastroMercearia->setWindowTitle(QCoreApplication::translate("CadastroMercearia", "Cadastrar", nullptr));
        label->setText(QCoreApplication::translate("CadastroMercearia", "Nome do Produto", nullptr));
        label_2->setText(QCoreApplication::translate("CadastroMercearia", "Pre\303\247o", nullptr));
        label_3->setText(QCoreApplication::translate("CadastroMercearia", "C\303\263digo", nullptr));
        label_4->setText(QCoreApplication::translate("CadastroMercearia", "Data de Fabrica\303\247\303\243o", nullptr));
        label_5->setText(QCoreApplication::translate("CadastroMercearia", "Data de Validade", nullptr));
        label_6->setText(QCoreApplication::translate("CadastroMercearia", "Unidades", nullptr));
        label_11->setText(QCoreApplication::translate("CadastroMercearia", "Dados do Produto", nullptr));
        label_12->setText(QCoreApplication::translate("CadastroMercearia", "Dados do Fornecedor", nullptr));
        label_7->setText(QCoreApplication::translate("CadastroMercearia", "Nome do Fornecedor", nullptr));
        label_8->setText(QCoreApplication::translate("CadastroMercearia", "Pa\303\255s Sede", nullptr));
        label_9->setText(QCoreApplication::translate("CadastroMercearia", "Estado Sede", nullptr));
        label_10->setText(QCoreApplication::translate("CadastroMercearia", "Cidade Sede", nullptr));
        pushButton->setText(QCoreApplication::translate("CadastroMercearia", "Salvar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CadastroMercearia", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroMercearia: public Ui_CadastroMercearia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROMERCEARIA_H
