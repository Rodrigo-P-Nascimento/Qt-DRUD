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

void PreencheArray(tProdutos *prod);
void Menu();

int main(){

    tProdutos produtos[TAM];
    int opcao;

    PreencheArray(produtos);

    while(1){
        Menu();
        cout << "Digite uma opcao: ";
        cin >> opcao;
        
        if(opcao == 9){
            break;
        }

        switch(opcao){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            default:
                cout << "Opcao " << opcao << " invalida." << endl;
        }
    }
    return 0;
}

void PreencheArray(tProdutos *prod){ // Função para iniciar os produtos com valores padrões

    int i;

    for(i=0 ; i < TAM; i++){
        prod[i].nome = "vazio";
        prod[i].preco = 0;
        prod[i].codigo = 0;
        prod[i].dataFabricacao = "vazio";
        prod[i].dataValidade = "vazio";
    }
}

void Menu(){
    cout << "\t\t Menu de Funcoes:\n" <<
            "\t 1 - Cadastrar Produto\n" <<
            "\t 2 - Buscar Produto\n" <<
            "\t 3 - Relatorio de Produtos\n" <<
            "\t 9 - Sair" << endl;
}