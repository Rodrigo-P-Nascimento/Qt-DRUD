#include "relatorio_de_produtos.h"
#include "ui_relatorio_de_produtos.h"

relatorio_de_produtos::relatorio_de_produtos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::relatorio_de_produtos)
{
    ui->setupUi(this);
}

relatorio_de_produtos::~relatorio_de_produtos()
{
    delete ui;
}

void relatorio_de_produtos::on_comboBox_currentTextChanged(const QString &arg1)
{


    if(arg1 == "Açougue e Frios"){

    }else if(arg1 == "Bebidas"){

    }else if(arg1 == "Limpeza"){

    }else if(arg1 == "Mercearia"){

    }else if(arg1 == "Padaria"){

    }
}

