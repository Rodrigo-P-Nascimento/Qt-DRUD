#include "Mercearia.h"
#include <iostream>

/********************* Class Mercearia *********************/

/******** CONSTRUTORES ********/
Mercearia::Mercearia(){
}
Mercearia::Mercearia(std::string nome, int codigo, float preco, RemessaUnidade rem)
    : ProdutoUnidade(nome, codigo, preco, rem){
}

/******** MÉTODOS ********/

void Mercearia::CadastrarNovoProduto(){

    std::string nome;
    int codigo;
    float preco;
    //RemessaUnidade Runi;
    //int quantidade;
    
    //int dia_f, mes_f, ano_f;
    //int dia_v, mes_v, ano_v;

    std::cout << "Digite o nome do produto: ";
    std::cin.ignore();
    std::getline(std::cin, nome);
    setNome(nome);

    std::cout << "Codigo: ";
    std::cin >> codigo;
    setCodigo(codigo);

    std::cout << "Preco do produto R$: ";
    std::cin >> preco;
    setPreco(preco);
}
