#include <iostream>
#include "Produtos.h"
#include "Produtos.cpp"

using namespace std;

void Relatorio(Produto **prod, int quant){

    for (int i = 0; i < quant; i++)
    {
        prod[i]->RelatorioProduto();
    }
}

int main(){

    



    return 0;
}