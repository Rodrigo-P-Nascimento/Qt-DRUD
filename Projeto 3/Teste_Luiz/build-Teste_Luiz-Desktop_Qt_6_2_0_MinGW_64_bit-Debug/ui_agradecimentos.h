/********************************************************************************
** Form generated from reading UI file 'agradecimentos.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGRADECIMENTOS_H
#define UI_AGRADECIMENTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Agradecimentos
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Agradecimentos)
    {
        if (Agradecimentos->objectName().isEmpty())
            Agradecimentos->setObjectName(QString::fromUtf8("Agradecimentos"));
        Agradecimentos->setWindowModality(Qt::WindowModal);
        Agradecimentos->resize(400, 164);
        Agradecimentos->setStyleSheet(QString::fromUtf8("#Agradecimentos{\n"
"	background-color: rgb(98, 218, 154);\n"
"\n"
"}\n"
"#label{\n"
"	background-color: rgb(3, 69, 105);\n"
"	border: 3px solid rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}\n"
"QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label = new QLabel(Agradecimentos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 381, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Agradecimentos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 371, 111));

        retranslateUi(Agradecimentos);

        QMetaObject::connectSlotsByName(Agradecimentos);
    } // setupUi

    void retranslateUi(QDialog *Agradecimentos)
    {
        Agradecimentos->setWindowTitle(QCoreApplication::translate("Agradecimentos", "Agradecimentos", nullptr));
        label->setText(QCoreApplication::translate("Agradecimentos", "Agradecimentos", nullptr));
        label_2->setText(QCoreApplication::translate("Agradecimentos", "<div>\303\215cones feitos por <a href=\"https://www.freepik.com\" title=\"Freepik\">Freepik</a> from <a href=\"https://www.flaticon.com/br/\" title=\"Flaticon\">www.flaticon.com</a></div>\n"
"\n"
"<div>\303\215cones feitos por <a href=\"https://www.flaticon.com/br/autores/dighital\" title=\"Dighital\">Dighital</a> from <a href=\"https://www.flaticon.com/br/\" title=\"Flaticon\">www.flaticon.com</a></div>\n"
"\n"
"<div>\303\215cones feitos por <a href=\"https://www.flaticon.com/br/autores/monkik\" title=\"monkik\">monkik</a> from <a href=\"https://www.flaticon.com/br/\" title=\"Flaticon\">www.flaticon.com</a></div>\n"
"\n"
"<div>\303\215cones feitos por <a href=\"https://www.flaticon.com/br/autores/royyan-wijaya\" title=\"Royyan Wijaya\">Royyan Wijaya</a> from <a href=\"https://www.flaticon.com/br/\" title=\"Flaticon\">www.flaticon.com</a></div>\n"
"\n"
"<div>\303\215cones feitos por <a href=\"https://www.flaticon.com/br/autores/webalys\" title=\"Webalys\">Webalys</a> from <a href=\"https://www.flaticon.com/br/"
                        "\" title=\"Flaticon\">www.flaticon.com</a></div>\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Agradecimentos: public Ui_Agradecimentos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGRADECIMENTOS_H
