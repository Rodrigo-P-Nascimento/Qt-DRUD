#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

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

    void on_action_Relatorio_Produtos_triggered();

    void on_action_Relatorio_Fornecedor_triggered();

    void on_action_Atualizar_Produto_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
