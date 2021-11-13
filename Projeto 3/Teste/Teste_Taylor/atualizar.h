#ifndef ATUALIZAR_H
#define ATUALIZAR_H

#include <QWidget>

namespace Ui {
class atualizar;
}

class atualizar : public QWidget
{
    Q_OBJECT

public:
    explicit atualizar(QWidget *parent = nullptr);
    ~atualizar();

private:
    Ui::atualizar *ui;
};

#endif // ATUALIZAR_H
