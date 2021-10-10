#include <iostream>
#include "Produtos.h"
#include "Produtos.cpp"
#include "Mercearia.h"
#include "Mercearia.cpp"

#define LINHAS 30

using namespace std;

void Menu();
void FazLinhas(int numLinhas);
int Cadastrar();

int main(){
    //classes de produtos
    ProdutoPeso PDpeso;
    ProdutoUnidade PDunidade;
    RemessaUnidade ReUNI;
    RemessaPeso RePES;
    vector<Mercearia> merc;

    //Variavéis de suporte ao programa
    int opcao, ativo=1;
    bool opInvalida;

    while(ativo){
        FazLinhas(LINHAS);
        cout << "Em qual das seções deseja trabalhar?" << endl;
        FazLinhas(LINHAS);
        cout << "[1] Mercearia" << endl;
        cout << "[2] Frios/Acougue" << endl;
        cout << "[3] Padaria" << endl;
        cout << "[4] Bebidas" << endl;
        cout << "[5] Limpeza" << endl;

        opInvalida = true;
        while (opInvalida){
            cin >> opcao;

            switch (opcao){
                case 1:

                    opInvalida = false;
                    break;
                case 2:

                    opInvalida = false;
                    break;
                case 3:

                    opInvalida = false;
                    break;
                case 4:

                    opInvalida = false;
                    break;
                case 5:

                    opInvalida = false;
                    break;
                default:
                    cout << "Opcao invalida! Tente novamente!" << endl;
                    break;
            }
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

int Cadastrar(){
    int op;

    FazLinhas(LINHAS);
    cout << "Em qual das seções deseja trabalhar?" << endl;
    FazLinhas(LINHAS);
    cout << "[1] Mercearia" << endl;
    cout << "[2] Frios/Acougue" << endl;
    cout << "[3] Padaria" << endl;
    cout << "[4] Bebidas" << endl;
    cout << "[5] Limpeza" << endl;

    while (true){
        cin >> op;

        if (op >= 1 && op <= 5) return op;
    }
}