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
    std::cout << "\nInsira as informacoes do produto atualizadas" << std::endl;
    Cadastro();
}

void Produto::Remover(){
    (*this) = Produto();
}

std::string Produto::getNome(){
    return this->nome;
}

int Produto::getCodigo(){
    return this->codigo;
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

    do{
        std::cout << "Digite a quantidade de itens: ";
        std::cin >> unidade;
        if(unidade <= 0){
            std::cout << "Quantidade invalido, tente novamente!" << std::endl;
        }
    }while(unidade <= 0);
}

void Mercearia::Relatorio()
{
    Produto::Relatorio();
    std::cout << "\t" << unidade;
}

void Mercearia::Remover(){
    (*this) = Mercearia();
}

//////////////////////////////////////////////////////////////////////////////////

/******************************* Class Frios_Acougue : public Produto *******************************/

/******** CONSTRUTORES / DESTRUTOR ********/
Frios_Acougue::Frios_Acougue(){
    peso = 0;
}

Frios_Acougue::Frios_Acougue(std::string nome, int codigo, float preco, float peso)
         : Produto(nome, codigo, preco)
{
    this->peso = peso;
}

Frios_Acougue::~Frios_Acougue()
{
}

/******** MÉTODOS ********/

void Frios_Acougue::Cadastro(){
    Produto::Cadastro();

    do{
        std::cout << "Digite o peso do produto: ";
        std::cin >> peso;
    if(peso <= 0){
        std::cout << "Peso invalido, tente novamente!" << std::endl;
    }
    }while(peso <= 0);
}

void Frios_Acougue::Relatorio()
{
    Produto::Relatorio();
    std::cout << "\t" << peso;
}

void Frios_Acougue::Remover(){
    (*this) = Frios_Acougue();
}

//////////////////////////////////////////////////////////////////////////////////

/******************************* Class Padaria : public Produto *******************************/

/******** CONSTRUTORES / DESTRUTOR ********/
Padaria::Padaria(){
    peso = 0;
}

Padaria::Padaria(std::string nome, int codigo, float preco, float peso)
         : Produto(nome, codigo, preco)
{
    this->peso = peso;
}

Padaria::~Padaria()
{
}

/******** MÉTODOS ********/

void Padaria::Cadastro(){
    Produto::Cadastro();

    do{
        std::cout << "Digite o peso do produto: ";
        std::cin >> peso;
        if(peso <= 0){
            std::cout << "Peso invalido, tente novamente!" << std::endl;
        }
    }while(peso <= 0);
}

void Padaria::Relatorio()
{
    Produto::Relatorio();
    std::cout << "\t" << peso;
}

void Padaria::Remover(){
    (*this) = Padaria();
}

//////////////////////////////////////////////////////////////////////////////////

/******************************* Class Bebidas : public Produto *******************************/

/******** CONSTRUTORES / DESTRUTOR ********/
Bebidas::Bebidas(){
    unidade = 0;
}

Bebidas::Bebidas(std::string nome, int codigo, float preco, int unidade)
         : Produto(nome, codigo, preco)
{
    this->unidade = unidade;
}

Bebidas::~Bebidas()
{
}

/******** MÉTODOS ********/

void Bebidas::Cadastro(){
    Produto::Cadastro();

    do{
        std::cout << "Digite a quantidade de itens: ";
        std::cin >> unidade;
        if(unidade <= 0){
            std::cout << "Quantidade invalido, tente novamente!" << std::endl;
        }
    }while(unidade <= 0);

}

void Bebidas::Relatorio()
{
    Produto::Relatorio();
    std::cout << "\t" << unidade;
}

void Bebidas::Remover(){
    (*this) = Bebidas();
}

//////////////////////////////////////////////////////////////////////////////////

/******************************* Class Limpeza : public Produto *******************************/

/******** CONSTRUTORES / DESTRUTOR ********/
Limpeza::Limpeza(){
    unidade = 0;
}

Limpeza::Limpeza(std::string nome, int codigo, float preco, int unidade)
         : Produto(nome, codigo, preco)
{
    this->unidade = unidade;
}

Limpeza::~Limpeza()
{
}

/******** MÉTODOS ********/

void Limpeza::Cadastro(){
    Produto::Cadastro();

    do{
        std::cout << "Digite a quantidade de itens: ";
        std::cin >> unidade;
        if(unidade <= 0){
            std::cout << "Quantidade invalido, tente novamente!" << std::endl;
        }
    }while(unidade <= 0);
}

void Limpeza::Relatorio()
{
    Produto::Relatorio();
    std::cout << "\t" << unidade;
}

void Limpeza::Remover(){
    (*this) = Limpeza();
}