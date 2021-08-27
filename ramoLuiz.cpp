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

void PreencheArray(tProdutos prod[]);

void CadastrarProdutos(tProdutos *prod);


int main(){

    tProdutos produtos[TAM];

    PreencheArray(produtos);

    CadastrarProdutos(produtos);

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


void CadastrarProdutos(tProdutos *prod){
    
    int i = 0;
    int opcao;
    bool pararCadastro = false;

    while(1)
    {
        system("clear");

        cout << "Informe as seguintes informacoes do(s) produto(s):" << endl;
        cout << "\tNome: ";
        getline(cin, prod[i].nome);
        cout << "Nome digitado: " << prod[i].nome << endl;

        cout << "\tPreco: ";
        cin >> prod[i].preco;
        cout << "Preco digitado: " << prod[i].preco << endl;
        getchar(); //Retira '\n' do buffer

        cout << "\tData de fabricacao: ";
        getline(cin, prod[i].dataFabricacao);
        cout << "Data de Fabricacao digitada: " << prod[i].dataFabricacao << endl;

        cout << "\tData de validade: ";
        getline(cin, prod[i].dataValidade);
        cout << "Data de Validade digitada: " << prod[i].dataValidade << endl;

        cout << "\tCodigo: ";
        cin >> prod[i].codigo;
        cout << "Codigo digitado: " << prod[i].codigo << endl;


        while(1){
            cout << "Deseja cadastrar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl;

            cin >> opcao;
            getchar(); //Retira '\n' do buffer

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