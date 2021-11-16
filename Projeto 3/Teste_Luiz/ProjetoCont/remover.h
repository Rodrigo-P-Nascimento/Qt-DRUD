#ifndef REMOVER_H
#define REMOVER_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class remover;
}

class remover : public QWidget
{
    Q_OBJECT

public:
    explicit remover(QWidget *parent = nullptr);
    ~remover();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_btn_excluir_clicked();

private:
    Ui::remover *ui;
};

#endif // REMOVER_H
