#include "menu.h"
#include "ui_menu.h"
#include "verifica.h"
#include "ui_verifica.h"
#include "produtos.h"

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

void Menu::on_actionbtn_cadastrar_triggered()
{
    Verifica *verif = new Verifica();
    verif->show();
}

