#ifndef REMOVER_H
#define REMOVER_H

#include <QWidget>

namespace Ui {
class remover;
}

class remover : public QWidget
{
    Q_OBJECT

public:
    explicit remover(QWidget *parent = nullptr);
    ~remover();

private:
    Ui::remover *ui;
};

#endif // REMOVER_H
