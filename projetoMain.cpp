#include <iostream>
#include <string>
#include <iomanip>

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
void ProcuraNome(tProdutos *Prod);
void ProcuraCodigo(tProdutos *Prod);
void RelatorioProdutos(tProdutos *Prod);
void Menu(void);
void limparBuffer(void);
void limpaTela(void);

int main(){

    tProdutos produtos[TAM];
    int opcao=1, busca;

    PreencheArray(produtos);

    while(opcao != 9){
        Menu();
        cout << "Digite uma opcao: ";
        cin >> opcao;
        
        switch(opcao){
            case 1:
                limpaTela();
                CadastrarProdutos(produtos);
                break;
            case 2:
                limpaTela();
                ProcuraNome(produtos);
                break;
            case 3:
                limpaTela();
                ProcuraCodigo(produtos);
                break;
            case 4:
                limpaTela();
                RelatorioProdutos(produtos);
                break;
            case 5:
                limpaTela();
                //Implementar função que atualize os valores de um produto, basta ler novamente os valores de um produto.
                break;
            case 6:
                limpaTela();
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
 * (entrada e saída) nenhuma
 * 
 * Retorno: void.
*/
void Menu(){
    limpaTela();
    cout << "\t\t Menu de Funcoes:\n" <<
            "\t 1 - Cadastrar um Produto\n" <<
            "\t 2 - Buscar um Produto por Nome  \n" <<
            "\t 3 - Buscar um Produto por Codigo \n" <<
            "\t 4 - Relatorio de Produtos\n" <<
            "\t 4 - Atualizar um produto\n" <<
            "\t 6 - Remover um Produto\n" <<
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
    int codigoValido, codigoInvalido;

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
        
        cout << "\tPreco: ";
        cin >> prod[i].preco;

        limparBuffer();
        cout << "\tData de fabricacao: ";
        getline(cin, prod[i].dataFabricacao);
    
        cout << "\tData de validade: ";
        getline(cin, prod[i].dataValidade);

        codigoValido = 1;
        codigoInvalido = 0;
        int cod;
        int j;
        while (codigoValido){
            cout << "\tCodigo: ";
            cin >> cod;

            for (j = 0; j < i; j++)
            {
                if (cod == prod[j].codigo){
                    cout << "Codigo invalido (ja esta em uso), tente novamente." << endl;
                    codigoValido = 0;
                    break;
                }
            }

            if (codigoValido){
                prod[i].codigo = cod;
                codigoValido = 0;
            } else {
                codigoValido = 1;
            }
        }

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
/**
 * Objetivo: Procurar um nome de um produto, usando a comparação entre duas strings
 * 
 * Parâmetros:
 * (entrada e saída) *prod  
 * 
 * Retorno: void.
*/
void ProcuraNome(tProdutos *Prod){

    string nome;
    int i, opp=1;
    bool achou;
    char op;

    while (opp){

        cout << "Digite o nome que deseja procurar, maximo de " << MAX_NOME << " caracteres." << endl;
        cin.ignore();
        getline(cin, nome);
        achou = false;

        for(i=0; i < TAM; i++){
            if(nome == Prod[i].nome){
                cout << "Temos esse produto no estoque!" << endl;
                achou = true;
                break;
            }   
        }

        if(achou == false) cout << "Nao temos " << nome << " no estoque." << endl;
        
        while(true){

            cout << "Deseja procurar mais algum outro produto: [S / N]: " << endl;
            cin >> op;

            if(op == 's' || op == 'S'){
                break;
            }else if(op == 'n' || op == 'N'){
                opp = 0;
                break;
            }else{
                cout << "Resposta errada, tente novamente!" << endl;
            }
        }
    }
}
/**
 * Objetivo: Procurar o codigo de um produto, usando a comparação entre dois inteiros.
 * 
 * Parâmetros:
 * (entrada e saída) *prod  
 * 
 * Retorno: void.
*/
void ProcuraCodigo(tProdutos *Prod){

    int codigo;
    int i, opp=1;
    bool achou;
    char op;

    while (opp){

        cout << "Digite o codigo que deseja procurar: ";
        cin >> codigo;
        achou = false;

        for(i=0; i < TAM; i++){
            if(codigo == Prod[i].codigo){
                cout << "Temos esse produto no estoque!" << endl;
                achou = true;
                break;
            }   
        }

        if(achou == false) cout << "Nao possuimos um produto cadastrado com esse codigo: " << codigo << endl;
        
        while(true){

            cout << "\nDeseja procurar mais algum outro produto: [S / N]: " << endl;
            cin >> op;

            if(op == 's' || op == 'S'){
                break;
            }else if(op == 'n' || op == 'N'){
                opp = 0;
                break;
            }else{
                cout << "Resposta errada, tente novamente!" << endl;
            }
        }
    }
}
/**
 * Objetivo: Exibir todos os produtos em estoque
 * 
 * Parâmetros:
 * (entrada e saída) *prod  
 * 
 * Retorno: void.
*/
void RelatorioProdutos(tProdutos *Prod){
    int i;
    cout << "Temos os seguintes produtos em nosso estoque!" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
    
    for(i=0; i < TAM; i++){
        if(Prod[i].nome  != "vazio"){
            cout << fixed << setprecision(2);
            cout << "\nNome: " << Prod[i].nome << endl;
            cout << "Data de Fabricacao: " << Prod[i].dataFabricacao << endl;
            cout << "Data de Validade: " << Prod[i].dataValidade << endl;
            cout << "Codigo: " << Prod[i].codigo << endl;
            cout << "Preco: R$ " << Prod[i].preco << endl;
        }
    }
    cout << "\nPrecione ENTER para voltar ao menu!" << endl;
    getchar();
    getchar();
}
/**
 * Objetivo: Limpar a tela 
 * 
 * Parâmetros:
 * (entrada e saída) nenhuma
 * 
 * Retorno: void.
*/
void limpaTela(void){
    system("cls"); // Só funciona no Windows
}