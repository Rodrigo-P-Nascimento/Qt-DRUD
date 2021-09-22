#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

#define TAM 100

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
void RemoverProduto(tProdutos *Prod);
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
                RelatorioProdutos(produtos);

                limparBuffer();
                cout << "\nPrecione ENTER para voltar ao menu!" << endl;
                getchar();
                break;
            case 5:
                limparTela();
                AtualizaProduto(produtos);
                break;
            case 6:
                limparTela();
                RemoverProduto(produtos);
                break;
            case 9:
                limparBuffer();
                cout << "Saindo do programa!" << endl;

                cout << "\nPrecione ENTER para sair do programa!" << endl;
                getchar();
                break;
            default:
                cout << "Opcao " << opcao << " invalida." << endl;
                limparBuffer();
                cout << "\nPrecione ENTER para tentar novamente!" << endl;
                getchar();
        } // End Switch(opcao)
    } // End While(opcao != 9)
    return 0;
} // End Main()

/**
 * Objetivo: Apresentar um Menu de opções relacionado as funções
 * 
 * Parâmetros:
 * (entrada e saída) nenhum
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
} // End limparTela()

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
    bool continuarCadastro = true;
    int codigoValido;

    while(continuarCadastro){
        limparTela();
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
        
        do{
            cout << "\tPreco: ";
            cin >> Prod[i].preco;

            if(Prod[i].preco < 0){
                cout << "Preco invalido, tente novamente!" << endl;
            }
        }while(Prod[i].preco < 0);
        
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

            if(cod < 0){
                cout << "Codigo invalido, tente novamente!" << endl;
                continue;
            }
            
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
            cout << "\nDeseja cadastrar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl
                << "Digite uma opcao: ";
            cin >> opcao;

            cout << endl;

            if (opcao == 1){
                break;
            }else if (opcao == 0){
                continuarCadastro = false;
                break;
            }else {
                cout << "Opcao " << opcao << " invalida. Tente novamente!" << endl;
            }

        } // End While(true)
    } // End While(continuarCadastro)
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
    int i, j;
    bool continuarProcura = true;
    bool produtoEncontrado;
    int opcao;

    while(continuarProcura){
        limparTela();
        cout << "Digite o nome que deseja procurar: "<< endl;
        cout << "\tNome: ";
        cin.ignore();
        getline(cin, nome);

        cout << endl;

        produtoEncontrado = false;

        for(i = 0, j = 1; i < TAM; i++){
            if((Prod[i].nome != "vazio") && (Prod[i].nome.find(nome) != Prod[i].nome.npos)){
                cout << "Produto["<< j << "]: " << Prod[i].nome << endl;
                produtoEncontrado = true;
                j++;
            }   
        }

        if(produtoEncontrado == false) cout << "Nao temos " << nome << " no estoque." << endl;
        
        while(true){
            cout << "\nDeseja procurar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl
                << "Digite uma opcao: ";
            cin >> opcao;

            cout << endl;

            if(opcao == 1){
                break;
            }else if(opcao == 0){
                continuarProcura = false;
                break;
            }else{
                cout << "Opcao " << opcao << " invalida. Tente novamente!" << endl;
            }
        } // End While(true)
    } // End While(continuarProcura)
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
    bool continuarProcura = true;
    bool produtoEncontrado;
    int opcao;

    while (continuarProcura){
        limparTela();
        cout << "Digite o codigo que deseja procurar. " << endl;
        cout << "\tCodigo: ";
        cin >> codigo;

        cout << endl;

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
            cout << "\nDeseja procurar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl
                << "Digite uma opcao: ";
            cin >> opcao;

            cout << endl;

            if(opcao == 1){
                break;
            }else if(opcao == 0){
                continuarProcura = false;
                break;
            }else{
                cout << "Opcao " << opcao << " invalida. Tente novamente!" << endl;
            }
        } // End While(true)
    } // End While(continuarProcura)
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
    sort(Prod, Prod+TAM, FuncaoCompara);

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

    cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
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
    bool continuarAtualizar = true;
    bool produtoEncontrado;



    while(continuarAtualizar){
        limparTela();
        cout << "Temos os seguintes produtos em nosso estoque!" << endl;
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

        for(i = 0; i < TAM; i++){
            if(Prod[i].nome != "vazio"){
                cout << "\nNome: " << Prod[i].nome << endl;
                cout << "Codigo: " << Prod[i].codigo << endl;
            }
        }

        cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

        while(true){
            cout << "\nBuscar produto por \'Nome\' ou por \'Codigo\' para ser atualizado:" << endl
                << "\t[1] Nome" << endl
                << "\t[0] Codigo" << endl
                << "Digite uma opcao: ";
            cin >> busca;

            limparBuffer();

            if(busca == 1 || busca == 0){
                break;
            } else {
                cout << "Opcao " << busca << " invalida." << endl;
            }
        }

        produtoEncontrado = false;
        if(busca == 1){
            while(produtoEncontrado == false){
                cout << "Agora, digite o \'NOME\' do produto a ter as informacoes atualizadas: ";
                getline(cin, nome_busca);

                for(i = 0; i < TAM; i++){
                    if(nome_busca == Prod[i].nome){
                        produtoEncontrado = true;
                        indice = i;
                        break;
                    }
                }

                if(produtoEncontrado == false){
                    cout << "Nao temos " << nome_busca << " no estoque." << endl;

                    while(true){
                        cout << "\nDeseja tentar novamente?" << endl
                        << "\t[1] Sim" << endl
                        << "\t[0] Nao" << endl
                        << "Digite uma opcao: ";
                        cin >> opcao;

                        limparBuffer();

                        cout << endl;

                        if (opcao == 1){
                            produtoEncontrado = false;
                            break;
                        }else if (opcao == 0){
                            return;
                        }else {
                            cout << "Opcao invalida!" << endl;
                        }
                    }
                }
            }

        }else if(busca == 0){
            while(produtoEncontrado == false){
                cout << "Agora, digite o \'CODIGO\' do produto a ter as informacoes atualizadas: ";
                cin >> codigo_busca;

                limparBuffer();

                for(i = 0; i < TAM; i++){
                    if(codigo_busca == Prod[i].codigo){
                        produtoEncontrado = true;
                        indice = i;
                        break;
                    }
                }

                if(produtoEncontrado == false){
                    cout << "Nao possuimos um produto cadastrado com esse codigo: " << codigo_busca << endl;

                    while(true){
                        cout << "\nDeseja tentar novamente?" << endl
                        << "\t[1] Sim" << endl
                        << "\t[0] Nao" << endl
                        << "Digite uma opcao: ";
                        cin >> opcao;

                        limparBuffer();

                        cout << endl;

                        if (opcao == 1){
                            produtoEncontrado = false;
                            break;
                        }else if (opcao == 0){
                            return;
                        }else {
                            cout << "Opcao invalida!" << endl;
                        }
                    }
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
        
        do{
            cout << "\tPreco: ";
            cin >> Prod[indice].preco;

            if(Prod[indice].preco < 0){
                cout << "Preco invalido, tente novamente!" << endl;
            }
        }while(Prod[indice].preco < 0);
        
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

            if(cod < 0){
                cout << "Codigo invalido, tente novamente!" << endl;
                continue;
            }

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
            cout << "\nDeseja atualizar mais algum produto?" << endl
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl
                << "Digite uma opcao: ";
            cin >> opcao;

            limparBuffer();

            cout << endl;

            if (opcao == 1){
                break;
            }else if (opcao == 0){
                continuarAtualizar = false;
                break;
            }else {
                cout << "Opcao invalida!" << endl;
            }
        } // End While(true)
    } // End While(continuarAtualizar)
} // End AtualizaProduto()

/**
 * Objetivo: Retirar um produto do estoque (do array do tipo tProdutos,
 *           de nome "produtos").
 * 
 * Parâmetros:
 * (entrada e saída) *Prod
 * 
 * Retorno: void.
*/
void RemoverProduto(tProdutos *Prod){
    int cod; //Código que será lido do teclado (para remoção do produto)
    int indice; //Índice do produto que se deseja remover
    int opcao; //Opção escolhida pelo usuário (aparece em dois locais)
    bool continuaRemover = true;

    while(continuaRemover){
        limparTela();
        cout << "Temos os seguintes produtos em nosso estoque!" << endl;
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
        
        for(int i = 0; i < TAM; i++){
            if(Prod[i].nome != "vazio"){
                cout << "\nNome: " << Prod[i].nome << endl;
                cout << "Codigo: " << Prod[i].codigo << endl;
            }
        }

        cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

        cout << "\nDigite o valor do codigo do produto que deseja remover: ";
        cin >> cod;

        indice = -1; /* O valor negativo do índice indica que não há um produto vinculado a ele,
                        ou seja: se após o laço "for" a seguir o "indice" ainda for -1, o produto
                        desejado para remoção não foi encontrado */

        if (cod != 0){ //0 é o valor de código padrão e, portanto, inválido

            for (int i = 0; i < TAM; i++)
            {
                if (Prod[i].codigo == cod){
                    indice = i;
                    break;
                }
            }
        }

        if (indice < 0){ //Produto não foi encontrado
            cout << "Nao ha um produto de codigo " << cod << " no estoque." << endl;
        }
        else { //Produto foi encontrado

            cout << "\nProduto encontrado:\n"
                 << "Nome: " << Prod[indice].nome << endl
                 << "Codigo: " << Prod[indice].codigo << endl
                 << "Preco: " << Prod[indice].preco << endl
                 << "Data de Fabricacao: " << Prod[indice].dataFabricacao << endl
                 << "Data de Validade: " << Prod[indice].dataValidade << endl;

            while(true){
                cout << "\nDeseja mesmo remover esse produto?\n"
                    << "\t[1] Sim" << endl
                    << "\t[0] Nao" << endl
                    << "Digite uma opcao: ";
                cin >> opcao;

                limparBuffer();

                cout << endl;

                if (opcao == 1){
                    Prod[indice].nome = "vazio";
                    Prod[indice].preco = 0;
                    Prod[indice].codigo = 0;
                    Prod[indice].dataFabricacao = "vazio";
                    Prod[indice].dataValidade = "vazio";

                    cout << "Produto removido com sucesso!" << endl;
                    break;
                }
                else if (opcao == 0){
                    break;
                }
                else {
                    cout << "Opcao invalida!" << endl;
                }
            }

        } // End else

        while(true){
            cout << "\nDeseja continuar a remocao de produtos?\n"
                << "\t[1] Sim" << endl
                << "\t[0] Nao" << endl
                << "Digite uma opcao: ";
            cin >> opcao;

            limparBuffer();

            cout << endl;

            if (opcao == 1){
                break;
            }
            else if (opcao == 0){
                continuaRemover = false;
                break;
            }
            else {
                cout << "Opcao invalida!" << endl;
            }
        } // End While(true)
    } // End While(continuaRemover)
} // End RemoverProduto()