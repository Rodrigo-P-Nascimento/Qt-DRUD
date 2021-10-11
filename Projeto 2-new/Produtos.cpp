#include "Produtos.h"  
#include <iostream>

void Produto::RelatorioProduto(){
    std::cout << "Nome: " << nome << std::endl
              << "Codigo: " << codigo << std::endl
              << "Preco: " << preco << std::endl;
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

    std::cout << "Unidades: " << unidade << std::endl;
}

Mercearia::Mercearia(){
}

Mercearia::Mercearia(std::string nome, int codigo, float preco, int unidade)
         : Produto(nome, codigo, preco)
{
    this->unidade = unidade;
}

Mercearia::~Mercearia(){
}
