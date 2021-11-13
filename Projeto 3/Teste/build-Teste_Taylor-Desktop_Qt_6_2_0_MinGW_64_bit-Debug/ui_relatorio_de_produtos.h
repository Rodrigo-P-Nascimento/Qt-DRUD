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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_relatorio_de_produtos
{
public:

    void setupUi(QWidget *relatorio_de_produtos)
    {
        if (relatorio_de_produtos->objectName().isEmpty())
            relatorio_de_produtos->setObjectName(QString::fromUtf8("relatorio_de_produtos"));
        relatorio_de_produtos->resize(800, 600);
        relatorio_de_produtos->setMinimumSize(QSize(800, 600));

        retranslateUi(relatorio_de_produtos);

        QMetaObject::connectSlotsByName(relatorio_de_produtos);
    } // setupUi

    void retranslateUi(QWidget *relatorio_de_produtos)
    {
        relatorio_de_produtos->setWindowTitle(QCoreApplication::translate("relatorio_de_produtos", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class relatorio_de_produtos: public Ui_relatorio_de_produtos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATORIO_DE_PRODUTOS_H
