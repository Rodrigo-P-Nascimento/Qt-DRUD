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
    std::cout << "Nome: ";
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

    std::cout << "[" << codigo << "]" << "\t" << nome << "\t\t\t\t\t\t" << preco;
}

void Produto::Atualizar(){
    std::cout << "\nINFORMACOES DO PRODUTO SELECIONADO:" << std::endl;
    
    Relatorio();

    std::cout << std::endl;
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
        std::cout << "Quantidade de itens: ";
        std::cin >> unidade;
        if(unidade <= 0){
            std::cout << "Quantidade invalido, tente novamente!" << std::endl;
        }
    }while(unidade <= 0);
}

void Mercearia::Relatorio() const{
    Produto::Relatorio();
    std::cout << "\t" << unidade << " UN";; 
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
        std::cout << "Peso do produto (em quilogramas): ";
        std::cin >> peso;
    if(peso <= 0){
        std::cout << "Peso invalido, tente novamente!" << std::endl;
    }
    }while(peso <= 0);
}

void Frios_Acougue::Relatorio() const
{
    Produto::Relatorio();
    std::cout << "\t" << peso << " Kg";
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
        std::cout << "Peso do produto (em gramas): ";
        std::cin >> peso;
        if(peso <= 0){
            std::cout << "Peso invalido, tente novamente!" << std::endl;
        }
    }while(peso <= 0);
    
    while(true){

        std::cout << "\nO produto contem gluten? ( [1] Sim | [0] Nao ) " << std::endl;

        std::cout << "Digite uma opcao: ";
        std::cin >> temGluten;
        
        if(temGluten != 1 && temGluten != 0) std::cout << "Valor invalido, tente novamente!" << std::endl;
        else break;
    }
}

void Padaria::Relatorio() const{

    Produto::Relatorio();

    (temGluten) ? std::cout << "\tSim" : std::cout << "\tNao";

    std::cout << "\t" << peso << " g";
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
        std::cout << "Quantidade de itens: ";
        std::cin >> unidade;
        if(unidade <= 0){
            std::cout << "Quantidade invalido, tente novamente!" << std::endl;
        }
    }while(unidade <= 0);

    do{
        std::cout << "Volume por unidade (em mililitro): ";
        std::cin >> volume;
        if(volume <= 0){
            std::cout << "Volume invalido, tente novamente!" << std::endl;
        }
    }while(volume <= 0);

    while(true){

        std::cout << "\nA bebida eh alcoolica? ( [1] Sim | [0] Nao ) " << std::endl;

        std::cout << "Digite uma opcao: ";
        std::cin >> ehAlcoolica;
        
        if(ehAlcoolica != 1 && ehAlcoolica != 0) std::cout << "Valor invalido, tente novamente!" << std::endl;
        else break;
    }
    
    while(true){

        std::cout << "\nA bebida eh gaseificada? ( [1] Sim | [0] Nao ) " << std::endl;

        std::cout << "Digite uma opcao: ";
        std::cin >> ehGaseificada;
        
        if(ehGaseificada != 1 && ehGaseificada != 0) std::cout << "Valor invalido, tente novamente!" << std::endl;
        else break;
    }
    
}

void Bebidas::Relatorio() const{

    Produto::Relatorio();

    (ehAlcoolica) ? std::cout << "\tSim" : std::cout << "\tNao";

    (ehGaseificada) ? std::cout << "\t\tSim" : std::cout << "\t\tNao";

    std::cout << "\t\t" << volume << " mL";

    std::cout << "\t" << unidade << " UN";
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

    std::cout << "Fragrancia do produto: ";
    std::cin.ignore();
    std::getline(std::cin, fragrancia);

    do{
        std::cout << "Quantidade de itens: ";
        std::cin >> unidade;
        if(unidade <= 0){
            std::cout << "Quantidade invalido, tente novamente!" << std::endl;
        }
    }while(unidade <= 0);
}

void Limpeza::Relatorio() const
{
    Produto::Relatorio();

    std::cout << "\t" << fragrancia;

    std::cout << "\t\t\t\t\t\t\t" << unidade << " UN";
}

void Limpeza::TornarPadrao(){
    (*this) = Limpeza();
}