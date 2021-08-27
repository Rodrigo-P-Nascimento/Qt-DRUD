#include <iostream>
#include <string>

#define TAM 100

using namespace std;

typedef struct {
    string nome;
    float preco;
    //char tipoMedida;
    string dataFabricacao;
    string dataValidade;
    int codigo;
    //string fornecedor;
    //Implementar o estoque
}tProdutos;

void PreencheArray(tProdutos prod);


int main(){

    tProdutos produtos[TAM];

    PreencheArray(produtos);

    return 0;
}

void PreencheArray(tProdutos prod[]){ // Função para iniciar os produtos com valores padrões

    int i;

    for(i=0 ; i < TAM; i++){
        prod[i].nome = "vazio";
        prod[i].preco = 0;
        prod[i].codigo = 0;
        prod[i].dataFabricacao = "vazio";
        prod[i].dataValidade = "vazio";
    }


}