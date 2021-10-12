#include <iostream>
#include "Produtos.h"
#include "Produtos.cpp"

#define LINHAS 30

using namespace std;

//Funções de suporte
void FazLinhas(int numLinhas);
int LerOpcao(int comeco, int fim, int sair);
//Funções que lidam com uma das classes
void Relatorio(Produto **prod, int quant);
void MenuMercearia(Produto merc);

int main(){

    Produto *merc[100];
    
    int opcao, ativo=1;
    bool opInvalida;
    
    while(ativo){
        FazLinhas(LINHAS);
        cout << "Em qual das Secoes deseja trabalhar?" << endl;
        FazLinhas(LINHAS);
        cout << "\t[1] Mercearia" << endl;
        cout << "\t[2] Frios/Acougue" << endl;
        cout << "\t[3] Padaria" << endl;
        cout << "\t[4] Bebidas" << endl;
        cout << "\t[5] Limpeza" << endl;
        cout << "\t[-1] Sair do Programa" << endl;

        cout << "\nDigite uma opcao: ";
        opcao = LerOpcao(1, 5, -1);
    
        switch (opcao){
            case 1:
                //MenuMercearia(merc);
                break;
            case 2:
                //MenuFrios_Acougue();
                break;
            case 3:
                //MenuPadaria();
                break;
            case 4:
                //MenuBebidas();
                break;
            case 5:
                //MenuLimpeza();
                break;
            case -1:
                ativo = 0;
                break;
        }
    }// End While(ativo)
    
    cout << "Acabou o programa!" << endl;

    return 0;
}//End main

// Funções de suporte

void FazLinhas(int numLinhas){
    for(int i=1; i <= numLinhas; i++){
        if(i == numLinhas) cout << "-" << endl;
        else cout << "-";
    }
}// End FazLinhas()

int LerOpcao(int comeco, int fim, int sair){
    int opcao;
    bool opcaoInvalida = true;
    
    while (opcaoInvalida)
    {
        cin >> opcao;

        if ((opcao >= comeco && opcao <= fim) || (opcao == sair)){
            return opcao;
        }
        else {
            cout << "Opcao invalida! Tente novamente!" << endl;
            cout << "\nDigite uma opcao: ";
        }
    }// End While(opcaoInvalida)
}// End LerOpcao()

//Funções que lidam com as classes

void Relatorio(Produto **prod, int quant){

    for (int i = 0; i < quant; i++){
        prod[i]->Relatorio();
        cout << "\n";
    }
}//End Relatorio

void MenuMercearia(Produto merc){

}
