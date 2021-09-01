#include <iostream>
#include <string>

#define TAM 100
#define MAX_NOME 50

using namespace std;

typedef struct {
    string nome;
    string dataFabricacao;
    string dataValidade;
    int codigo;
    float preco;
}tProdutos;

void PreencheArray(tProdutos *prod);
void CadastrarProdutos(tProdutos *prod);
void Menu(void);
void limparBuffer(void);

int main(){

    tProdutos produtos[TAM];
    int opcao=1;

    PreencheArray(produtos);

    while(opcao != 9){
        Menu();
        cout << "Digite uma opcao: ";
        cin >> opcao;
        
        switch(opcao){
            case 1:
                CadastrarProdutos(produtos);
                break;
            case 2:
                //Implementar função que busca um produto pelo: nome ou codigo do mesmo.
                break;
             case 3:
                //Implementar função que exiba todos os produtos na tela, poderia ser feita uma tabela
                break;
             case 4:
                //Implementar função que 'remova' os valores de um produto, basta colocar todos os elementos do produto com os valores padrões da função PreencheArray.
                break;
            case 9:
                cout << "Saindo do programa!" << endl;
                break;
            default:
                cout << "Opcao " << opcao << " invalida." << endl;
        }
    }
    return 0;
}
/**
 * Objetivo: Preencher todos os elemetos do array, afim de padronizar os valores.
 * 
 * Parâmetros:
 * (entrada e saída) *prod - Array do tipo tProdutos que armazenará
 *                           as informações dos produtos.
 * 
 * Retorno: void.
*/
void PreencheArray(tProdutos *prod){

    int i;

    for(i=0 ; i < TAM; i++){
        prod[i].nome = "vazio";
        prod[i].preco = 0;
        prod[i].codigo = 0;
        prod[i].dataFabricacao = "vazio";
        prod[i].dataValidade = "vazio";
    }
}
/**
 * Objetivo: Um pequeno menu de opções
 * 
 * Parâmetros:
 * (entrada e saída) nenhum
 * 
 * Retorno: void.
*/
void Menu(){
    cout << "\t\t Menu de Funcoes:\n" <<
            "\t 1 - Cadastrar um Produto\n" <<
            "\t 2 - Buscar um Produto\n" <<
            "\t 3 - Relatorio de Produtos\n" <<
            "\t 4 - Remover um Produto\n" <<
            "\t 9 - Sair" << endl;
}
/**
 * Objetivo: Cadastrar os produtos que irão para o estoque.
 * 
 * Parâmetros:
 * (entrada e saída) *prod - Array do tipo tProdutos que armazenará
 *                           as informações dos produtos.
 * 
 * Retorno: void.
*/
void CadastrarProdutos(tProdutos *prod){
    
    int i;
    int opcao;
    bool pararCadastro = true;

    while(pararCadastro){
        cout << "Informe as seguintes informacoes do produto:" << endl;
        for(i=0; i < TAM; i++){
            if(prod[i].nome == "vazio"){
                break;
                //Isso serve apenas para salvar a posição de i, que no caso é usada pra saber qual posição esta vazia ou não
                //Se estiver vazia um novo produto é cadastrado ali, senão o programa ira procurar a proxima posição vazia
            }
        }

        limparBuffer();
        cout << "\tNome: ";
        getline(cin, prod[i].nome);
        cout << "\tNome digitado: " << prod[i].nome << endl;

        cout << "\tPreco: ";
        cin >> prod[i].preco;

        cout << "\tData de fabricacao: ";
        cin >> prod[i].dataFabricacao;

        cout << "\tData de validade: ";
        cin >> prod[i].dataValidade;

        cout << "\tCodigo: ";
        cin >> prod[i].codigo;

        while(1){
            cout << "Deseja cadastrar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl;

            cin >> opcao;

            if (opcao == 1){
                break;
            }else if (opcao == 0){
                pararCadastro = false;
                break;
            }else {
                cout << "Opcao invalida!" << endl;
            }
        }
    }

}
/**
 * Objetivo: Limpar o buffer de entrada de qualquer valor indesejado
 * 
 * Parâmetros:
 * (entrada e saída) nenhum
 * 
 * Retorno: void.
*/
void limparBuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}