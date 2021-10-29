#ifndef CADASTROMERCEARIA_H
#define CADASTROMERCEARIA_H

#include <QDialog>

namespace Ui {
class CadastroMercearia;
}

class CadastroMercearia : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroMercearia(QWidget *parent = nullptr);
    ~CadastroMercearia();

private:
    Ui::CadastroMercearia *ui;
};

#endif // CADASTROMERCEARIA_H
