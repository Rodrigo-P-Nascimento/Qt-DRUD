/********************************************************************************
** Form generated from reading UI file 'remover.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVER_H
#define UI_REMOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_remover
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_principal;
    QComboBox *comboBox;
    QTableWidget *tw_produtos;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_excluir;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *remover)
    {
        if (remover->objectName().isEmpty())
            remover->setObjectName(QString::fromUtf8("remover"));
        remover->resize(800, 600);
        remover->setMinimumSize(QSize(800, 600));
        verticalLayout = new QVBoxLayout(remover);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_principal = new QLabel(remover);
        label_principal->setObjectName(QString::fromUtf8("label_principal"));
        QFont font;
        font.setPointSize(14);
        label_principal->setFont(font);

        verticalLayout->addWidget(label_principal);

        comboBox = new QComboBox(remover);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        tw_produtos = new QTableWidget(remover);
        tw_produtos->setObjectName(QString::fromUtf8("tw_produtos"));

        verticalLayout->addWidget(tw_produtos);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_excluir = new QPushButton(remover);
        btn_excluir->setObjectName(QString::fromUtf8("btn_excluir"));
        btn_excluir->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(btn_excluir);

        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(remover);

        QMetaObject::connectSlotsByName(remover);
    } // setupUi

    void retranslateUi(QWidget *remover)
    {
        remover->setWindowTitle(QCoreApplication::translate("remover", "Form", nullptr));
        label_principal->setText(QCoreApplication::translate("remover", "Selecione a se\303\247\303\243o o produto que deseja excluir", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("remover", "Selecionar", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("remover", "A\303\247ougue e Frios", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("remover", "Bebidas", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("remover", "Limpeza", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("remover", "Mercearia", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("remover", "Padaria", nullptr));

        btn_excluir->setText(QCoreApplication::translate("remover", "Excluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remover: public Ui_remover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVER_H
