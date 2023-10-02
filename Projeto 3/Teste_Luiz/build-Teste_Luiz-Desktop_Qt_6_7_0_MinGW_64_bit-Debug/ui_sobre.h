/********************************************************************************
** Form generated from reading UI file 'sobre.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOBRE_H
#define UI_SOBRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Sobre
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titulo;
    QFormLayout *formLayout;
    QLabel *avatar1;
    QLabel *nome1;
    QLabel *nome2;
    QLabel *avatar3;
    QLabel *nome3;
    QLabel *avatar2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Sobre)
    {
        if (Sobre->objectName().isEmpty())
            Sobre->setObjectName("Sobre");
        Sobre->setEnabled(true);
        Sobre->resize(394, 355);
        Sobre->setMinimumSize(QSize(100, 100));
        Sobre->setMaximumSize(QSize(500, 500));
        Sobre->setStyleSheet(QString::fromUtf8("#Sobre{\n"
"	background-color: rgb(98, 218, 154);\n"
"}\n"
"QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#titulo{\n"
"	background-color: rgb(3, 69, 105);\n"
"	border: 3px solid rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"#avatar1{\n"
"	border: 3px solid rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"	background-color:rgb(255, 255, 199);\n"
"}\n"
"#avatar2{\n"
"	border: 3px solid rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"	background-color:rgb(255, 255, 199);\n"
"}\n"
"#avatar3{\n"
"	border: 3px solid rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"	background-color:rgb(255, 255, 199);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(Sobre);
        verticalLayout->setObjectName("verticalLayout");
        titulo = new QLabel(Sobre);
        titulo->setObjectName("titulo");
        QFont font;
        font.setFamilies({QString::fromUtf8("Work In Progress")});
        font.setPointSize(20);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        titulo->setFont(font);
        titulo->setStyleSheet(QString::fromUtf8(""));
        titulo->setFrameShadow(QFrame::Plain);
        titulo->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        titulo->setWordWrap(false);

        verticalLayout->addWidget(titulo);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        avatar1 = new QLabel(Sobre);
        avatar1->setObjectName("avatar1");
        avatar1->setMaximumSize(QSize(60, 60));
        avatar1->setPixmap(QPixmap(QString::fromUtf8(":/imagem/Imagens/avatar.png")));
        avatar1->setScaledContents(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, avatar1);

        nome1 = new QLabel(Sobre);
        nome1->setObjectName("nome1");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(20);
        nome1->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, nome1);

        nome2 = new QLabel(Sobre);
        nome2->setObjectName("nome2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Agency FB")});
        font2.setPointSize(20);
        font2.setBold(false);
        nome2->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, nome2);

        avatar3 = new QLabel(Sobre);
        avatar3->setObjectName("avatar3");
        avatar3->setMaximumSize(QSize(60, 60));
        avatar3->setPixmap(QPixmap(QString::fromUtf8(":/imagem/Imagens/avatar_Taylor.png")));
        avatar3->setScaledContents(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, avatar3);

        nome3 = new QLabel(Sobre);
        nome3->setObjectName("nome3");
        nome3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, nome3);

        avatar2 = new QLabel(Sobre);
        avatar2->setObjectName("avatar2");
        avatar2->setMinimumSize(QSize(60, 60));
        avatar2->setMaximumSize(QSize(60, 60));
        avatar2->setPixmap(QPixmap(QString::fromUtf8(":/imagem/Imagens/avatar_Rodrigo.png")));
        avatar2->setScaledContents(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, avatar2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout->addLayout(formLayout);


        retranslateUi(Sobre);

        QMetaObject::connectSlotsByName(Sobre);
    } // setupUi

    void retranslateUi(QDialog *Sobre)
    {
        Sobre->setWindowTitle(QCoreApplication::translate("Sobre", "Sobre N\303\263s", nullptr));
        titulo->setText(QCoreApplication::translate("Sobre", "Desenvolvedores", nullptr));
        avatar1->setText(QString());
        nome1->setText(QCoreApplication::translate("Sobre", "> Luiz Henrique Queiroz", nullptr));
        nome2->setText(QCoreApplication::translate("Sobre", "> Rodrigo P. Nascimento", nullptr));
        avatar3->setText(QString());
        nome3->setText(QCoreApplication::translate("Sobre", "> Taylor K. C. Nobrega", nullptr));
        avatar2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Sobre: public Ui_Sobre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOBRE_H
