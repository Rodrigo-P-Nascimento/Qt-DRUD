#include "menu.h"
#include "ui_menu.h"
#include "cadastromercearia.h"
#include <iostream>
#include <string>

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_BTN_CADS_MERC_clicked()
{
    CadastroMercearia cm;
    cm.exec();
}

