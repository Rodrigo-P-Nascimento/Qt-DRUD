/********************************************************************************
** Form generated from reading UI file 'cadastromercearia.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROMERCEARIA_H
#define UI_CADASTROMERCEARIA_H

#include <QtCore/QDate>
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
    QLineEdit *LINE_NOME_MERC;
    QLabel *label_2;
    QDoubleSpinBox *DOUBLE_SPIN_MERC;
    QLabel *label_3;
    QSpinBox *SPIN_MERC;
    QLabel *label_4;
    QDateEdit *DAFA_MERC;
    QLabel *label_5;
    QDateEdit *DAVA_MERC;
    QLabel *label_6;
    QSpinBox *SPIN2_MERC;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_4;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *LINE_NOME_FORNECEDOR;
    QLabel *label_8;
    QLineEdit *LINE_PAIS;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *LINE_ESTADO;
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
        CadastroMercearia->resize(625, 439);
        verticalLayout = new QVBoxLayout(CadastroMercearia);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(CadastroMercearia);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        LINE_NOME_MERC = new QLineEdit(CadastroMercearia);
        LINE_NOME_MERC->setObjectName(QString::fromUtf8("LINE_NOME_MERC"));

        formLayout->setWidget(2, QFormLayout::FieldRole, LINE_NOME_MERC);

        label_2 = new QLabel(CadastroMercearia);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        DOUBLE_SPIN_MERC = new QDoubleSpinBox(CadastroMercearia);
        DOUBLE_SPIN_MERC->setObjectName(QString::fromUtf8("DOUBLE_SPIN_MERC"));
        DOUBLE_SPIN_MERC->setDecimals(2);
        DOUBLE_SPIN_MERC->setMaximum(100000000.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, DOUBLE_SPIN_MERC);

        label_3 = new QLabel(CadastroMercearia);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        SPIN_MERC = new QSpinBox(CadastroMercearia);
        SPIN_MERC->setObjectName(QString::fromUtf8("SPIN_MERC"));
        SPIN_MERC->setMaximum(9999);

        formLayout->setWidget(3, QFormLayout::FieldRole, SPIN_MERC);

        label_4 = new QLabel(CadastroMercearia);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        DAFA_MERC = new QDateEdit(CadastroMercearia);
        DAFA_MERC->setObjectName(QString::fromUtf8("DAFA_MERC"));
        DAFA_MERC->setEnabled(true);
        DAFA_MERC->setCalendarPopup(false);
        DAFA_MERC->setCurrentSectionIndex(0);
        DAFA_MERC->setTimeSpec(Qt::LocalTime);
        DAFA_MERC->setDate(QDate(2000, 1, 1));

        formLayout->setWidget(5, QFormLayout::FieldRole, DAFA_MERC);

        label_5 = new QLabel(CadastroMercearia);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        DAVA_MERC = new QDateEdit(CadastroMercearia);
        DAVA_MERC->setObjectName(QString::fromUtf8("DAVA_MERC"));

        formLayout->setWidget(6, QFormLayout::FieldRole, DAVA_MERC);

        label_6 = new QLabel(CadastroMercearia);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_6);

        SPIN2_MERC = new QSpinBox(CadastroMercearia);
        SPIN2_MERC->setObjectName(QString::fromUtf8("SPIN2_MERC"));
        SPIN2_MERC->setMaximum(1000);

        formLayout->setWidget(7, QFormLayout::FieldRole, SPIN2_MERC);

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

        LINE_NOME_FORNECEDOR = new QLineEdit(CadastroMercearia);
        LINE_NOME_FORNECEDOR->setObjectName(QString::fromUtf8("LINE_NOME_FORNECEDOR"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, LINE_NOME_FORNECEDOR);

        label_8 = new QLabel(CadastroMercearia);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        LINE_PAIS = new QLineEdit(CadastroMercearia);
        LINE_PAIS->setObjectName(QString::fromUtf8("LINE_PAIS"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, LINE_PAIS);

        label_9 = new QLabel(CadastroMercearia);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(CadastroMercearia);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_10);

        LINE_ESTADO = new QLineEdit(CadastroMercearia);
        LINE_ESTADO->setObjectName(QString::fromUtf8("LINE_ESTADO"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, LINE_ESTADO);

        LINE_CIDADE = new QLineEdit(CadastroMercearia);
        LINE_CIDADE->setObjectName(QString::fromUtf8("LINE_CIDADE"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, LINE_CIDADE);


        verticalLayout->addLayout(formLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BTN_SALVAR_MERC = new QPushButton(CadastroMercearia);
        BTN_SALVAR_MERC->setObjectName(QString::fromUtf8("BTN_SALVAR_MERC"));

        horizontalLayout->addWidget(BTN_SALVAR_MERC);

        BTN_CANCELAR_MERC = new QPushButton(CadastroMercearia);
        BTN_CANCELAR_MERC->setObjectName(QString::fromUtf8("BTN_CANCELAR_MERC"));

        horizontalLayout->addWidget(BTN_CANCELAR_MERC);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(LINE_NOME_MERC, SPIN_MERC);
        QWidget::setTabOrder(SPIN_MERC, DOUBLE_SPIN_MERC);
        QWidget::setTabOrder(DOUBLE_SPIN_MERC, DAFA_MERC);
        QWidget::setTabOrder(DAFA_MERC, DAVA_MERC);
        QWidget::setTabOrder(DAVA_MERC, SPIN2_MERC);
        QWidget::setTabOrder(SPIN2_MERC, LINE_NOME_FORNECEDOR);
        QWidget::setTabOrder(LINE_NOME_FORNECEDOR, LINE_PAIS);
        QWidget::setTabOrder(LINE_PAIS, LINE_ESTADO);
        QWidget::setTabOrder(LINE_ESTADO, LINE_CIDADE);
        QWidget::setTabOrder(LINE_CIDADE, BTN_SALVAR_MERC);
        QWidget::setTabOrder(BTN_SALVAR_MERC, BTN_CANCELAR_MERC);

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
        BTN_SALVAR_MERC->setText(QCoreApplication::translate("CadastroMercearia", "Salvar", nullptr));
        BTN_CANCELAR_MERC->setText(QCoreApplication::translate("CadastroMercearia", "Limpar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroMercearia: public Ui_CadastroMercearia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROMERCEARIA_H
