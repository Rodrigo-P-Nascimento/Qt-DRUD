#ifndef AGRADECIMENTOS_H
#define AGRADECIMENTOS_H

#include <QDialog>
#include <QGraphicsDropShadowEffect>

namespace Ui {
class Agradecimentos;
}

class Agradecimentos : public QDialog
{
    Q_OBJECT

public:
    explicit Agradecimentos(QWidget *parent = nullptr);
    ~Agradecimentos();

private:
    Ui::Agradecimentos *ui;
};

#endif // AGRADECIMENTOS_H
