#ifndef PRODUTOS_H
#define PRODUTOS_H

#include <QMessageBox>

class Fornecedor {
public:
    QString nome;
    QString pais_sede;
    QString estado_sede;
    QString cidade_sede;

    /******** CONSTRUTORES ********/
    Fornecedor();
    Fornecedor(QString nome, QString pais, QString estado, QString cidade);
};

class Produto{
protected:
    QString nome;
    QString codigo;
    QString preco;
    QString DataFabricacao;
    QString DataValidade;

public:
    Fornecedor fornecedor;

    /******** CONSTRUTORES / DESTRUTOR ********/
    Produto();
    Produto(QString nome, QString codigo, QString preco, QString DataFabricacao, QString DataValidade);
    virtual ~Produto();

    void definirFornecedor(QString nome, QString pais, QString estado, QString cidade);
    QString getNome() const;
    QString getCodigo() const;
};

class Mercearia : public Produto{
protected:
    QString unidade;

public:
    /******** CONSTRUTORES / DESTRUTOR ********/
    Mercearia();
    Mercearia(QString nome, QString codigo, QString preco, QString unidade, QString DataFabricacao, QString DataValidade);
    virtual ~Mercearia();
};

class Frios_Acougue : public Produto{
protected:
    QString peso;

public:
    /******** CONSTRUTORES / DESTRUTOR ********/
    Frios_Acougue();
    Frios_Acougue(QString nome, QString codigo, QString preco, QString peso, QString DataFabricacao, QString DataValidade);
    virtual ~Frios_Acougue();
};

class Padaria : public Produto{
protected:
    QString peso;
    QString temGluten;

public:
    /******** CONSTRUTORES / DESTRUTOR ********/
    Padaria();
    Padaria(QString nome, QString codigo, QString preco, QString peso, QString DataFabricacao, QString DataValidade);
    virtual ~Padaria();
};

class Bebidas : public Produto{
protected:
    QString unidade;
    QString volume;
    QString ehAlcoolica;
    QString ehGaseificada;

public:
    /******** CONSTRUTORES / DESTRUTOR ********/
    Bebidas();
    Bebidas(QString nome, QString codigo, QString preco, QString unidade, QString DataFabricacao, QString DataValidade);
    virtual ~Bebidas();
};

class Limpeza : public Produto{
protected:
    QString unidade;
    QString fragrancia;

public:
    /******** CONSTRUTORES / DESTRUTOR ********/
    Limpeza();
    Limpeza(QString nome, QString codigo, QString preco, QString unidade,QString DataFabricacao, QString DataValidade);
    virtual ~Limpeza();

};
#endif // PRODUTOS_H
