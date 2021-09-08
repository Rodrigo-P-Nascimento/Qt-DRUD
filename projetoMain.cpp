#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

#define TAM 100
#define MAX_NOME 50

using namespace std;

typedef struct {
    string nome;
    string dataFabricacao;
    string dataValidade;
    int codigo;
    float preco;
} tProdutos;

void Menu(void);
void limparBuffer(void);
void limparTela(void);
void PreencherArray(tProdutos *Prod);
void CadastrarProdutos(tProdutos *Prod);
void ProcurarNome(tProdutos *Prod);
void ProcurarCodigo(tProdutos *Prod);
void RelatorioProdutos(tProdutos *Prod);
void AtualizaProduto(tProdutos *Prod);
int FuncaoCompara(tProdutos a_prod, tProdutos b_prod);

int main(){

    tProdutos produtos[TAM];
    int opcao = 1;

    PreencherArray(produtos);

    while(opcao != 9){
        Menu();
        cout << "Digite uma opcao: ";
        cin >> opcao;
        
        switch(opcao){
            case 1:
                limparTela();
                CadastrarProdutos(produtos);
                break;
            case 2:
                limparTela();
                ProcurarNome(produtos);
                break;
            case 3:
                limparTela();
                ProcurarCodigo(produtos);
                break;
            case 4:
                limparTela();
                sort(produtos, produtos+TAM, FuncaoCompara);
                RelatorioProdutos(produtos);
                break;
            case 5:
                limparTela();
                AtualizaProduto(produtos);
                break;
            case 6:
                limparTela();
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
 * Objetivo: Apresentar um Menu de opções e funções
 * 
 * Parâmetros:
 * (entrada e saída) nenhuma
 * 
 * Retorno: void.
*/
void Menu(){
    limparTela();
    cout << "\t\t Menu de Funcoes:\n" <<
            "\t 1 - Cadastrar um Produto\n" <<
            "\t 2 - Buscar um Produto por Nome  \n" <<
            "\t 3 - Buscar um Produto por Codigo \n" <<
            "\t 4 - Relatorio de Produtos\n" <<
            "\t 5 - Atualizar um Produto\n" <<
            "\t 6 - Remover um Produto\n" <<
            "\t 9 - Sair" << endl;
} // End Menu()

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
} // End limparBuffer()

/**
 * Objetivo: Limpar a tela 
 * 
 * Parâmetros:
 * (entrada e saída) nenhuma
 * 
 * Retorno: void.
*/
void limparTela(void){
    system("cls"); // Só funciona no Windows
} // End limparTela

/**
 * Objetivo: Preencher todos os elemetos do array, afim de padronizar os valores.
 * 
 * Parâmetros:
 * (entrada e saída) *Prod - Array do tipo tProdutos que armazenará
 *                           as informações dos produtos.
 * 
 * Retorno: void.
*/
void PreencherArray(tProdutos *Prod){
    for(int i = 0 ; i < TAM; i++){
        Prod[i].nome = "vazio";
        Prod[i].preco = 0;
        Prod[i].codigo = 0;
        Prod[i].dataFabricacao = "vazio";
        Prod[i].dataValidade = "vazio";
    }
} // End PreencherArray()

/**
 * Objetivo: Cadastrar os produtos que irão para o estoque.
 * 
 * Parâmetros:
 * (entrada e saída) *Prod - Array do tipo tProdutos que armazenará
 *                           as informações dos produtos.
 * 
 * Retorno: void.
*/
void CadastrarProdutos(tProdutos *Prod){
    int i;
    int opcao;
    bool pararCadastro = true;
    int codigoValido;

    while(pararCadastro){
        cout << "Informe as seguintes informacoes do produto:" << endl;
        for(i = 0; i < TAM; i++){
            if(Prod[i].nome == "vazio"){
                break;
                //Isso serve apenas para salvar a posição de i, que no caso é usada pra saber qual posição esta vazia ou não
                //Se estiver vazia um novo produto é cadastrado ali, senão o programa ira procurar a proxima posição vazia
            }
        }

        limparBuffer();
        cout << "\tNome: ";
        getline(cin, Prod[i].nome);
        
        cout << "\tPreco: ";
        cin >> Prod[i].preco;

        limparBuffer();
        cout << "\tData de fabricacao: ";
        getline(cin, Prod[i].dataFabricacao);
    
        cout << "\tData de validade: ";
        getline(cin, Prod[i].dataValidade);

        codigoValido = 1;
        int cod;
        int j;
        while (codigoValido){
            cout << "\tCodigo: ";
            cin >> cod;

            for (j = 0; j < i; j++){
                if (cod == Prod[j].codigo){
                    cout << "Codigo invalido (ja esta em uso), tente novamente." << endl;
                    codigoValido = 0;
                    break;
                }
            }

            if (codigoValido){
                Prod[i].codigo = cod;
                codigoValido = 0;
            } else {
                codigoValido = 1;
            }
        }

        while(true){
            cout << "Deseja cadastrar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl
                << "Digite uma opcao: ";
            cin >> opcao;

            if (opcao == 1){
                break;
            }else if (opcao == 0){
                pararCadastro = false;
                break;
            }else {
                cout << "Opcao " << opcao << " invalida. Tente novamente!" << endl;
            }

        } // End While(true)
    } // End While(pararCadastro)
} // End CadastrarProdutos()

/**
 * Objetivo: Procurar um nome de um produto, usando a comparação entre duas strings
 * 
 * Parâmetros:
 * (entrada e saída) *prod  
 * 
 * Retorno: void.
*/
void ProcurarNome(tProdutos *Prod){
    string nome;
    int i;
    bool pararProcura = true;
    bool produtoEncontrado;
    int opcao;

    while(pararProcura){

        cout << "Digite o nome que deseja procurar, maximo de " << MAX_NOME << " caracteres." << endl;
        cin.ignore();
        getline(cin, nome);
        produtoEncontrado = false;

        for(i = 0; i < TAM; i++){
            if(nome == Prod[i].nome){
                cout << "Temos esse produto no estoque!" << endl;
                produtoEncontrado = true;
                break;
            }   
        }

        if(produtoEncontrado == false) cout << "Nao temos " << nome << " no estoque." << endl;
        
        while(true){
            cout << "Deseja procurar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl
                << "Digite uma opcao: ";
            cin >> opcao;

            if(opcao == 1){
                break;
            }else if(opcao == 0){
                pararProcura = false;
                break;
            }else{
                cout << "Opcao " << opcao << " invalida. Tente novamente!" << endl;
            }
        } // End While(true)
    } // End While(pararProcura)
} // End ProcurarNome()

/**
 * Objetivo: Procurar o codigo de um produto, usando a comparação entre dois inteiros.
 * 
 * Parâmetros:
 * (entrada e saída) *prod  
 * 
 * Retorno: void.
*/
void ProcurarCodigo(tProdutos *Prod){

    int codigo;
    int i;
    bool pararProcura = true;
    bool produtoEncontrado;
    int opcao;

    while (pararProcura){

        cout << "Digite o codigo que deseja procurar: ";
        cin >> codigo;
        produtoEncontrado = false;

        for(i=0; i < TAM; i++){
            if(codigo == Prod[i].codigo){
                cout << "Temos esse produto no estoque!" << endl;
                produtoEncontrado = true;
                break;
            }   
        }

        if(produtoEncontrado == false) cout << "Nao possuimos um produto cadastrado com esse codigo: " << codigo << endl;
        
        while(true){
            cout << "Deseja procurar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl
                << "Digite uma opcao: ";
            cin >> opcao;

            if(opcao == 1){
                break;
            }else if(opcao == 0){
                pararProcura = false;
                break;
            }else{
                cout << "Opcao " << opcao << " invalida. Tente novamente!" << endl;
            }
        } // End While(true)
    } // End While(pararProcura)
} // End ProcurarCodigo()

/**
 * Objetivo: Ordenar os produtos de um estoque por ordem crescente de codigo
 * 
 * Parâmetros:
 * (entrada e saída) a_prod e b_prod  
 * 
 * Retorno: int.
*/
int FuncaoCompara(tProdutos a_prod, tProdutos b_prod){
    return a_prod.codigo < b_prod.codigo;
} // End FuncaoCompara()

/**
 * Objetivo: Exibir todos os produtos em estoque
 * 
 * Parâmetros:
 * (entrada e saída) *Prod  
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
} // End RelatorioProdutos()

/**
 * Objetivo: Atualizar as informações de um determinado produto do estoque
 * 
 * Parâmetros:
 * (entrada e saída) *Prod  
 * 
 * Retorno: void.
*/
void AtualizaProduto(tProdutos *Prod){
    int i, busca, opcao;
    string nome_busca;
    int codigo_busca;
    int indice;
    bool pararAtualizar = true;

    while(pararAtualizar){
        
        while(true){
            cout << "Buscar produto por \'Nome\' ou por \'Codigo\' para ser atualizado:" << endl
                << "\t[1] Nome" << endl
                << "\t[0] Codigo" << endl
                << "Digite uma opcao: ";
            cin >> busca;

            limparBuffer();

            if(busca == 1){
                cout << "Agora, digite o \'NOME\' do produto a ter as informacoes atualizadas: ";
                getline(cin, nome_busca);
                break;
            } else if(busca == 0){  
                cout << "Agora, digite o \'CODIGO\' do produto a ter as informacoes atualizadas: ";
                cin >> codigo_busca;
                limparBuffer();
                break;
            } else {
                cout << "Opcao " << busca << " invalida." << endl;
            }
        }

        if(busca == 1){
            for(i = 0; i < TAM; i++){
                if(nome_busca == Prod[i].nome){
                    indice = i;
                    break;
                }
            }
        } else {
            for(i = 0; i < TAM; i++){
                if(codigo_busca == Prod[i].codigo){
                    indice = i;
                    break;
                }
            }
        }

        cout << endl;
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-";
        cout << fixed << setprecision(2);
        cout << "\nNome: " << Prod[indice].nome << endl;
        cout << "Data de Fabricacao: " << Prod[indice].dataFabricacao << endl;
        cout << "Data de Validade: " << Prod[indice].dataValidade << endl;
        cout << "Codigo: " << Prod[indice].codigo << endl;
        cout << "Preco: R$ " << Prod[indice].preco << endl;
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

        cout << "\nAtualize as seguintes informacoes do produto " << Prod[indice].nome << ":" << endl;

        cout << "\tNome: ";
        getline(cin, Prod[indice].nome);
        
        cout << "\tPreco: ";
        cin >> Prod[indice].preco;

        limparBuffer();

        cout << "\tData de fabricacao: ";
        getline(cin, Prod[indice].dataFabricacao);
    
        cout << "\tData de validade: ";
        getline(cin, Prod[indice].dataValidade);

        int codigoValido = 1;
        int cod;
        int j;
        Prod[indice].codigo = 0;
        while (codigoValido){
            cout << "\tCodigo: ";
            cin >> cod;

            limparBuffer();

            for (j = 0; j < TAM; j++){
                if (cod == Prod[j].codigo){
                    cout << "Codigo invalido (ja esta em uso), tente novamente." << endl;
                    codigoValido = 0;
                    break;
                }
            }

            if (codigoValido){
                Prod[indice].codigo = cod;
                codigoValido = 0;
            } else {
                codigoValido = 1;
            }
        }
        
        while(true){
            cout << "Deseja atualizar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl
                << "Digite uma opcao: ";
            cin >> opcao;

            limparBuffer();

            if (opcao == 1){
                break;
            }else if (opcao == 0){
                pararAtualizar = false;
                break;
            }else {
                cout << "Opcao invalida!" << endl;
            }
        } // End While(true)
    } // End While(pararAtualizar)
} // End AtualizaProduto()