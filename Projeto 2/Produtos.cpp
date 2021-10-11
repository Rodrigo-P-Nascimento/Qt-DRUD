#include "Produtos.h"

/********************* Class Produto *********************/

int Produto::n_produtos_instanciados = 0;

/******** CONSTRUTORES ********/
Produto::Produto(){
    nome = "";
    codigo = 0;
    n_produtos_instanciados++;
}

Produto::Produto(std::string nome, int codigo, float preco){

    this->nome = nome;

    if (codigo > 0) this->codigo = codigo;
    else this->codigo = 0;

    if (preco >= 0) this->preco = preco;
    else this->preco = 0;

    n_produtos_instanciados++;
}


/******** DESTRUTOR ********/
Produto::~Produto(){
    n_produtos_instanciados--;
}



/******** MÉTODOS ********/
void Produto::setNome(std::string nome){
    this->nome = nome;
}

void Produto::setCodigo(int codigo){

    if (codigo > 0){
        this->codigo = codigo;
        return;
    }

    int cod;
    while (true)
    {
        std::cout << "Codigo invalido! Insira um novo codigo: ";
        std::cin >> cod;
        if (cod > 0) break; //Codigo valido
    }

    this->codigo = cod;
}

void Produto::setPreco(float preco){

    if (preco > 0){
        this->preco = preco;
        return;
    }

    float price;
    while (true)
    {
        std::cout << "Preco invalido! Insira um novo preco: ";
        std::cin >> price;
        if (price > 0) break; //Preco valido
    }

    this->preco = price;
}

int Produto::getQuantProdutos(){
    return n_produtos_instanciados;
}



/********************* Class ProdutoUnidade *********************/

/******** CONSTRUTORES ********/
ProdutoUnidade::ProdutoUnidade()
              : Produto()
{
    quantidade = 0;
}

/******** MÉTODOS ********/



/********************* Class ProdutoPeso *********************/

/******** CONSTRUTORES ********/
ProdutoPeso::ProdutoPeso()
           : Produto()
{
    peso = 0;
}


/******** MÉTODOS ********/
