#include "Produtos.h"  
#include <iostream>

void Produto::RelatorioProduto(){
    if(nome == "") return;

    std::cout << "Nome: " << nome << std::endl
              << "Codigo: " << codigo << std::endl
              << "Preco: " << preco << std::endl;
}

void Produto::Cadastro(){
    std::cout << "Digite o nome do produto: ";
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cout << "Digite o codigo do produto, o mesmo deve ser maior que ZERO: ";
    std::cin >> codigo;
    std::cout << "Preco do produto: ";
    std::cin >> preco;
}

void Produto::Remover(){
    (*this) = Produto();
}

void Produto::Atualizar(){
    std::cout << "As informacoes do produto." << std::endl;
    RelatorioProduto();
    std::cout << "\n";
    std::cout << "Insira novamente as informacoes do produto. " << std::endl;
    Cadastro();
    std::cout << "\nInformacoes atualizadas com sucesso!" << std::endl; 
}

Produto::Produto(){
    this->nome = "";
    this->codigo = 0;
    this->preco = 0;
}

Produto::~Produto(){
}

Produto::Produto(std::string nome, int codigo, float preco){
    this->nome = nome;
    this->codigo = codigo;
    this->preco = preco;
}

//////////////////////////////////////////////////////////////////////////////////

void Mercearia::RelatorioProduto()
{
    Produto::RelatorioProduto();
    std::cout << "Unidade(s): " << unidade << std::endl;
}

void Mercearia::Cadastro(){
    Produto::Cadastro();

    std::cout << "Digite a quantidade de produtos: ";
    std::cin >> unidade;
}

void Mercearia::Remover(){
    (*this) = Mercearia();
}

void Mercearia::Atualizar(){
    Produto::Atualizar();
}

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
