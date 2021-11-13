/********************************************************************************
** Form generated from reading UI file 'relatorio_de_fornecedores.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELATORIO_DE_FORNECEDORES_H
#define UI_RELATORIO_DE_FORNECEDORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_relatorio_de_fornecedores
{
public:

    void setupUi(QWidget *relatorio_de_fornecedores)
    {
        if (relatorio_de_fornecedores->objectName().isEmpty())
            relatorio_de_fornecedores->setObjectName(QString::fromUtf8("relatorio_de_fornecedores"));
        relatorio_de_fornecedores->resize(800, 600);
        relatorio_de_fornecedores->setMinimumSize(QSize(800, 600));

        retranslateUi(relatorio_de_fornecedores);

        QMetaObject::connectSlotsByName(relatorio_de_fornecedores);
    } // setupUi

    void retranslateUi(QWidget *relatorio_de_fornecedores)
    {
        relatorio_de_fornecedores->setWindowTitle(QCoreApplication::translate("relatorio_de_fornecedores", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class relatorio_de_fornecedores: public Ui_relatorio_de_fornecedores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATORIO_DE_FORNECEDORES_H
