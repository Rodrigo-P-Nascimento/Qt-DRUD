#include <iostream>
#include "Produtos.h"
#include "Produtos.cpp"
#include <windows.h>

#define LINHAS 30

using namespace std;

//Funções de suporte
void FazLinhas(int numLinhas);
int LerOpcao(int comeco, int fim, int sair);
//Funções que lidam com uma das classes
void RemoverGeral(Produto **prod);
void AtualizarGeral(Produto **prod);
void CadastroGeral(Produto **prod);
void RelatorioGeral(Produto **prod);
void MenuGeral(Produto **prod);

int main(){

    Produto *merc[100];
    Produto *padaria[100];
    Produto *frios[100];
    Produto *limpeza[100];
    Produto *bebidas[100];

    int opcao, ativo=1;
    bool opInvalida;

    for(int i=0;i < 100; i++){
        merc[i] = new Mercearia();
    }
    
    while(ativo){
        system("cls");
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
                system("cls");
                MenuGeral(merc);
                cout << "Digite enter ae meu patrao" << endl;
                getchar();
                getchar();
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
    
    while (opcaoInvalida){
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
void RemoverGeral(Produto **prod){
    int op;

    cout << "Veja os produtos para escolher!" <<  endl;

    RelatorioGeral(prod);

    cout << "Escolha um dos produtos para remover: ";

    cin >> op;

    prod[op]->Remover();

    cout << "Produto removido com sucesso!" << endl;
}
void AtualizarGeral(Produto **prod){
    int op;

    cout << "Veja os produtos para escolher!" <<  endl;

    RelatorioGeral(prod);

    cout << "Escolha um dos produtos para atualizar: ";

    cin >> op;

    prod[op]->Atualizar();

    cout << "Produto atualizado com sucesso!" << endl;
}

void RelatorioGeral(Produto **prod){

    for (int i = 0; i < 100; i++){

        if(prod[i]->getNome() != ""){
            prod[i]->Relatorio();
            cout << "\n";
        }
    }
}//End Relatorio

void CadastroGeral(Produto **prod){
    for (int i = 0; i < 100; i++){

        if(prod[i]->getNome() == ""){
            prod[i]->Cadastro();
            break;
        }
    }
}

void MenuGeral(Produto **prod){
    int op;

    cout << "[1] Cadastrar um novo produto" << endl;
    cout << "[2] Relatorio do Produto" << endl;
    cout << "[3] Atualizar um produto" << endl;
    cout << "[4] Remover um Produto" << endl;
    cout << "[-1] Voltar para Menu Anterior" << endl;

    cout << "Digite uma opcao: ";
    cin >> op;

    switch (op){
    case 1:
        CadastroGeral(prod);
        break;
    case 2:
        RelatorioGeral(prod);
        break;
    case 3:
        AtualizarGeral(prod);
        break;
    case 4:
        RemoverGeral(prod);
        break;
    default:
        break;
    }
}
