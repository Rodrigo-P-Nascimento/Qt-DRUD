#include "agradecimentos.h"
#include "ui_agradecimentos.h"

Agradecimentos::Agradecimentos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Agradecimentos)
{
    ui->setupUi(this);
    // List instances containing labels and drop shadows
    QList<QLabel*> label_list_;
    QList<QGraphicsDropShadowEffect*> shadow_list_;

    // Get all UI labels and apply shadows
    label_list_ = this->findChildren<QLabel*>();
    foreach(QLabel *lbl, label_list_) {
        shadow_list_.append(new QGraphicsDropShadowEffect);
        shadow_list_.back()->setBlurRadius(1);
        shadow_list_.back()->setOffset(1, 1);
        lbl->setGraphicsEffect(shadow_list_.back());
    }
}

Agradecimentos::~Agradecimentos()
{
    delete ui;
}
