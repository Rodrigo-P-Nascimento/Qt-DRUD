#include <iostream>
#include <string>

#define TAM 100
#define MAX_NOME 50

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
void CadastrarProdutos(tProdutos *prod);

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

void CadastrarProdutos(tProdutos *prod){
    
    int i = 0;
    int opcao;
    bool pararCadastro = false;

    cout << "Informe as seguintes informacoes do(s) produto(s):" << endl;
    while(1)
    {
        cout << "\tNome: ";
        getline(cin, prod[i].nome);
        cout << "Nome digitado: " << prod[i].nome << endl;

        cout << "\tPreco: ";
        cin >> prod[i].preco;

        cout << "\tData de fabricacao: ";
        cin >> prod[i].dataFabricacao;

        cout << "\tData de validade: ";
        cin >> prod[i].dataValidade;

        cout << "Codigo: ";
        cin >> prod[i].codigo;

        while(1){
            cout << "Deseja cadastrar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl;

            cin >> opcao;

            if (opcao == 1){
                i++;
                break;
            }else if (opcao == 0){
                pararCadastro = true;
                break;
            }else {
                cout << "Opcao invalida!" << endl;
            }
        }

        if (pararCadastro){
            break;
        }
    }

}