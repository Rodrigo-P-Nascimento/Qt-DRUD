#include <iostream>
#include "Produtos.h"  

/******************************* Class Produto *******************************/

/******** CONSTRUTORES / DESTRUTOR ********/
Produto::Produto(){
    this->nome = "";
    this->codigo = 0;
    this->preco = 0;
}

Produto::Produto(std::string nome, int codigo, float preco){
    this->nome = nome;
    this->codigo = codigo;
    this->preco = preco;
}

Produto::~Produto(){
}

/******** MÉTODOS ********/

void Produto::Cadastro(){
    std::cout << "\nNome: ";
    std::cin.ignore();
    std::getline(std::cin, nome);

    do{
        std::cout << "Codigo: ";
        std::cin >> codigo;
        if(codigo <= 0){
            std::cout << "Codigo invalido, tente novamente!" << std::endl;
        }
    } while(codigo <= 0);

    do{
        std::cout << "Preco: ";
        std::cin >> preco;
        if(preco <= 0){
            std::cout << "Preco invalido, tente novamente!" << std::endl;
        }
    } while(preco <= 0);
}

void Produto::Relatorio(){
    if(nome == "") return;

    std::cout << "[" << codigo << "]" << "\t" << nome << "\t\t" << preco;
}

void Produto::Atualizar(){
    std::cout << "\nINFORMACOES DO PRODUTO SELECIONADO:" << std::endl;

    std::cout << "\nCODIGO" << "\tNOME" << "\t\tPRECO" << "\tESTOQUE" << std::endl;
    Relatorio();

    std::cout << "\n";
    std::cout << "Insira as informacoes do produto atualizadas" << std::endl;
    Cadastro();
}

void Produto::Remover(){
    (*this) = Produto();
}

std::string Produto::getNome(){
    return this->nome;
}

//////////////////////////////////////////////////////////////////////////////////

/******************************* Class Mercearia : public Produto *******************************/

/******** CONSTRUTORES / DESTRUTOR ********/
Mercearia::Mercearia(){
    unidade = 0;
}

Mercearia::Mercearia(std::string nome, int codigo, float preco, int unidade)
         : Produto(nome, codigo, preco)
{
    this->unidade = unidade;
}

Mercearia::~Mercearia()
{
}

/******** MÉTODOS ********/

void Mercearia::Cadastro(){
    Produto::Cadastro();

    std::cout << "Digite a quantidade de itens: ";
    std::cin >> unidade;
}

void Mercearia::Relatorio()
{
    Produto::Relatorio();
    std::cout << "\t" << unidade << std::endl;
}

void Mercearia::Remover(){
    (*this) = Mercearia();
}