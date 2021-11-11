/********************************************************************************
** Form generated from reading UI file 'verifica.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFICA_H
#define UI_VERIFICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Verifica
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *BTN_CONTINUAR;
    QPushButton *BTN_CANCELAR;

    void setupUi(QWidget *Verifica)
    {
        if (Verifica->objectName().isEmpty())
            Verifica->setObjectName(QString::fromUtf8("Verifica"));
        Verifica->setWindowModality(Qt::ApplicationModal);
        Verifica->resize(260, 252);
        layoutWidget = new QWidget(Verifica);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 218, 193));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);

        verticalLayout->addWidget(label);

        radioButton_5 = new QRadioButton(layoutWidget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout->addWidget(radioButton_5);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BTN_CONTINUAR = new QPushButton(layoutWidget);
        BTN_CONTINUAR->setObjectName(QString::fromUtf8("BTN_CONTINUAR"));
        BTN_CONTINUAR->setEnabled(false);

        horizontalLayout->addWidget(BTN_CONTINUAR);

        BTN_CANCELAR = new QPushButton(layoutWidget);
        BTN_CANCELAR->setObjectName(QString::fromUtf8("BTN_CANCELAR"));

        horizontalLayout->addWidget(BTN_CANCELAR);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(Verifica);

        QMetaObject::connectSlotsByName(Verifica);
    } // setupUi

    void retranslateUi(QWidget *Verifica)
    {
        Verifica->setWindowTitle(QCoreApplication::translate("Verifica", "Escolha a Se\303\247\303\243o", nullptr));
        label->setText(QCoreApplication::translate("Verifica", "Escolha a se\303\247\303\243o", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Verifica", "Mercearia", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Verifica", "Padaria", nullptr));
        radioButton->setText(QCoreApplication::translate("Verifica", "Frios e A\303\247ougue", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Verifica", "Bebidas", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Verifica", "Limpeza", nullptr));
        BTN_CONTINUAR->setText(QCoreApplication::translate("Verifica", "Continuar", nullptr));
        BTN_CANCELAR->setText(QCoreApplication::translate("Verifica", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Verifica: public Ui_Verifica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFICA_H
