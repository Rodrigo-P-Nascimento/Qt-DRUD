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

void Produto::Relatorio() const{
    if(nome == "") return;

    std::cout << "Nome: " << nome << std::endl
              << "Codigo: " << codigo << std::endl
              << "Preco: R$ " << preco << std::endl;
}

void Produto::Atualizar(){
    std::cout << "\nINFORMACOES DO PRODUTO SELECIONADO:" << std::endl;

    //std::cout << "\nCODIGO" << "\tNOME" << "\t\tPRECO" << "\tESTOQUE" << std::endl;
    Relatorio();

    std::cout << "\n";
    std::cout << "\nInsira as informacoes do produto atualizadas" << std::endl;
    Cadastro();
}

void Produto::TornarPadrao(){
    (*this) = Produto();
}

std::string Produto::getNome() const{
    return this->nome;
}

int Produto::getCodigo() const{
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

void Mercearia::Relatorio() const
{
    Produto::Relatorio();
    std::cout << "Unidade(s): " << unidade << std::endl;
}

void Mercearia::TornarPadrao(){
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
        std::cout << "Digite o peso do produto (em Kg): ";
        std::cin >> peso;
    if(peso <= 0){
        std::cout << "Peso invalido, tente novamente!" << std::endl;
    }
    }while(peso <= 0);
}

void Frios_Acougue::Relatorio() const
{
    Produto::Relatorio();
    std::cout << "Peso: " << peso << "Kg" << std::endl;
}

void Frios_Acougue::TornarPadrao(){
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
        std::cout << "Digite o peso do produto (em gramas): ";
        std::cin >> peso;
        if(peso <= 0){
            std::cout << "Peso invalido, tente novamente!" << std::endl;
        }
    }while(peso <= 0);

    std::cout << "\nO produto contem gluten?" << std::endl
              << "[1] Sim" << std::endl
              << "[0] Nao" << std::endl;
    std::cin >> temGluten;
}

void Padaria::Relatorio() const
{
    Produto::Relatorio();
    std::cout << "Peso: " << peso << "g" << std::endl
              << "Tem gluten: ";

    if (temGluten) std::cout << "Nao" << std::endl;
    else std::cout << "Sim" << std::endl;
}

void Padaria::TornarPadrao(){
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

    do{
        std::cout << "Digite o volume de cada unidade da bebida (em ml): ";
        std::cin >> volume;
        if(volume <= 0){
            std::cout << "Volume invalido, tente novamente!" << std::endl;
        }
    }while(volume <= 0);

    std::cout << "\nA bebida eh alcoolica?" << std::endl
              << "[1] Sim" << std::endl
              << "[0] Nao" << std::endl;
    std::cin >> ehAlcoolica;

    std::cout << "\nA bebida eh gaseificada?" << std::endl
              << "[1] Sim" << std::endl
              << "[0] Nao" << std::endl;
    std::cin >> ehGaseificada;
}

void Bebidas::Relatorio() const
{
    Produto::Relatorio();
    std::cout << "Unidade(s): " << unidade << std::endl
              << "Volume por unidade: " << volume << "ml" << std::endl;

    std::cout << "Eh alcoolica: ";
    if (ehAlcoolica) std::cout << "Sim" << std::endl;
    else std::cout << "Nao" << std::endl;

    std::cout << "Eh gaseificada: ";
    if (ehGaseificada) std::cout << "Sim" << std::endl;
    else std::cout << "Nao" << std::endl;
}

void Bebidas::TornarPadrao(){
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

    std::cout << "Coloque a fragrancia do produto: " << std::endl;
    std::cin.ignore();
    std::getline(std::cin, fragrancia);
}

void Limpeza::Relatorio() const
{
    Produto::Relatorio();
    std::cout << "Unidade(s): " << unidade << std::endl;
    std::cout << "Fragrancia: " << fragrancia << std::endl;
}

void Limpeza::TornarPadrao(){
    (*this) = Limpeza();
}