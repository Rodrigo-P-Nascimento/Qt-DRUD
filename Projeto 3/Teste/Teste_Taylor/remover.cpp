#include "remover.h"
#include "ui_remover.h"

remover::remover(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::remover)
{
    ui->setupUi(this);
}

remover::~remover()
{
    delete ui;
}
