#ifndef SOBRE_H
#define SOBRE_H

#include <QDialog>
#include <QGraphicsDropShadowEffect>

namespace Ui {
class Sobre;
}

class Sobre : public QDialog
{
    Q_OBJECT

public:
    explicit Sobre(QWidget *parent = nullptr);
    ~Sobre();

private:
    Ui::Sobre *ui;
};

#endif // SOBRE_H
