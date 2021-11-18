#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "cadastro.h"
#include "ui_cadastro.h"
#include "relatorio_de_produtos.h"
#include "ui_relatorio_de_produtos.h"
#include "sobre.h"
#include "ui_sobre.h"
#include "agradecimentos.h"
#include "ui_agradecimentos.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_tabWidget_tabCloseRequested(int index);

    void on_action_Cadastrar_triggered();

    void on_action_Gerenciar_Produtos_triggered();

    void on_actionSobre_o_Grupo_triggered();

    void on_actionAgradecimentos_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
