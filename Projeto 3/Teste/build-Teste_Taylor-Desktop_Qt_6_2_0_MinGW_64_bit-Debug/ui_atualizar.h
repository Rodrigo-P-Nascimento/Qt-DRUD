/********************************************************************************
** Form generated from reading UI file 'atualizar.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATUALIZAR_H
#define UI_ATUALIZAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_atualizar
{
public:

    void setupUi(QWidget *atualizar)
    {
        if (atualizar->objectName().isEmpty())
            atualizar->setObjectName(QString::fromUtf8("atualizar"));
        atualizar->resize(800, 600);
        atualizar->setMinimumSize(QSize(800, 600));

        retranslateUi(atualizar);

        QMetaObject::connectSlotsByName(atualizar);
    } // setupUi

    void retranslateUi(QWidget *atualizar)
    {
        atualizar->setWindowTitle(QCoreApplication::translate("atualizar", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class atualizar: public Ui_atualizar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATUALIZAR_H
