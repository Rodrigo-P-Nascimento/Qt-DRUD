#include <iostream>
#include "Produtos.h"
#include "Produtos.cpp"
#include "Mercearia.h"
#include "Mercearia.cpp"

#define LINHAS 30

using namespace std;

void Menu();
void FazLinhas(int numLinhas);
int LerOpcao(int comeco, int fim, int sair);
void MenuMercearia(vector<Mercearia> &merc);

int main(){
    //Classes de Produtos
    ProdutoPeso PDpeso;
    ProdutoUnidade PDunidade;
    RemessaUnidade ReUNI;
    RemessaPeso RePES;
    vector<Mercearia> merc;

    //Variavéis de Suporte ao Programa
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
                MenuMercearia(merc);
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
    
    return 0;
}// End main()

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

void Menu(){
    FazLinhas(LINHAS);
    cout << "[1] Cadastrar novo Produto" << endl;
    cout << "[2] Adicionar uma Remessa" << endl;
    cout << "[3] Remover um Produto" << endl;
    cout << "[-1] Voltar para Menu Anterior" << endl;
    FazLinhas(LINHAS);

    cout << "\nDigite uma opcao: ";
}// End Menu()

void MenuMercearia(vector<Mercearia> &merc){
    int opcao;

    FazLinhas(LINHAS);
    cout << "Bem-vindo a secao de Mercearia!" << endl;
    while(true)
    {
        Menu();

        opcao = LerOpcao(1, 2, -1);

        switch (opcao){
            case 1:
                merc.push_back(Mercearia());
                merc[merc.size()-1].CadastrarNovoProduto();
                break;
            case 2:
                merc[merc.size()-1].novaRemessa();
                break;
            case -1:
                return;
        }
        cout << endl;
    }// End while(ativo)
}// End MenuMercearia()