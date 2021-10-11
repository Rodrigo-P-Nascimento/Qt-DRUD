#include "Produtos.h"  

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

Mercearia::Mercearia(){
}

Mercearia::~Mercearia(){
}
