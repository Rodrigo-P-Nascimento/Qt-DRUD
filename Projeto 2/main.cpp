#include <iostream>
#include "Produtos.h"
#include "Produtos.cpp"
#include "Mercearia.h"
#include "Mercearia.cpp"

#define LINHAS 30

using namespace std;

void Menu();
void FazLinhas(int numLinhas);
void Cadastrar();
void CadastrarMercearia();

int main(){
    //classes de produtos
    ProdutoPeso PDpeso;
    ProdutoUnidade PDunidade;
    RemessaUnidade ReUNI;
    RemessaPeso RePES;

    //Variavéis de suporte ao programa
    int opcao, ativo=1;

    while(ativo){
        Menu();

        cin >> opcao;

        switch (opcao){
        case -1:
            ativo = 0;
            break;
        case 1:
            Cadastrar();
            break;
        default:
            cout << "Opcao invalida, tente novamente!" << endl;
            break;
        }
    }
    

    return 0;
}

void FazLinhas(int numLinhas){
    for(int i=1; i <= numLinhas; i++){
        if(i == numLinhas) cout << "-" << endl;
        else cout << "-";
    }
}

void Menu(){
    cout << "Bem vindo Usuario(a)!" << endl;
    FazLinhas(LINHAS);
    cout << "[1]    > Cadastrar novo Produto." << endl;
    cout << "[-1]   > Sair do programa." << endl;
    FazLinhas(5);

    cout << "Digite uma opcao: ";
}

void CadastrarMercearia(){
    string nome;
    int codigo;
    float preco;
    RemessaUnidade Runi;

    cout << "Digite o nome do produto: ";
    cin.ignore();
    getline(cin, nome);

    cout << "Codigo: ";
    cin >> codigo;
    cout << "Preco do produto R$: ";
    cin >> preco;
    
}

void Cadastrar(){
    int op, ativo=1;

    FazLinhas(LINHAS);
    cout << "Voce escolheu cadastrar um novo produto, em qual categoria ele se enquadra? " << endl;
    FazLinhas(LINHAS);
    cout << "[1] Merceaira" << endl;
    cout << "[2] Frios/Acougue" << endl;
    cout << "[3] Padaria" << endl;
    cout << "[4] Bebidas" << endl;
    cout << "[5] Limpeza" << endl;

    while (ativo){
        cin >> op;

        switch (op){
        case 1:
            cout << "Insira os dados do produto do tipo Mercearia." <<endl;
            CadastrarMercearia();
            ativo = 0;
            break;
        
        default:
            cout << "Opcao invalida, tente novamente!" << endl;
            break;
        }
    }
}