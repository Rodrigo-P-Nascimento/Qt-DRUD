#include "sobre.h"
#include "ui_sobre.h"

Sobre::Sobre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sobre)
{
    ui->setupUi(this);
    // List instances containing labels and drop shadows
    QList<QLabel*> label_list_;
    QList<QGraphicsDropShadowEffect*> shadow_list_;

    // Get all UI labels and apply shadows
    label_list_ = this->findChildren<QLabel*>();
    foreach(QLabel *lbl, label_list_) {
        shadow_list_.append(new QGraphicsDropShadowEffect);
        shadow_list_.back()->setBlurRadius(2);
        shadow_list_.back()->setOffset(2, 2);
        lbl->setGraphicsEffect(shadow_list_.back());
    }
}

Sobre::~Sobre()
{
    delete ui;
}
