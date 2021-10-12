#include <iostream>
#include <vector>
#include <windows.h>
#include "Produtos.h"
#include "Produtos.cpp"

#define LINHAS 30

using namespace std;


extern void RelatorioSeccao(Seccao sec, vector<Produto*> &prod);
extern void FazLinhas(int numLinhas);
extern int LerOpcao(int comeco, int fim, int sair);
extern void MenuGeral(Seccao sec, vector<Produto*> &vec);
extern void NovoProduto(Seccao sec, vector<Produto*> &vec);


int main(){

    vector<Produto*> mercearia;
    vector<Produto*> frios;
    vector<Produto*> padaria;
    vector<Produto*> bebidas;
    vector<Produto*> limpeza;
    
    int opcao, ativo=1;
    
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
                MenuGeral(Seccao::MERCEARIA, mercearia);
                break;
            case 2:
                MenuGeral(Seccao::FRIOS, frios);
                break;
            case 3:
                MenuGeral(Seccao::PADARIA, padaria);
                break;
            case 4:
                MenuGeral(Seccao::BEBIDAS, bebidas);
                break;
            case 5:
                MenuGeral(Seccao::LIMPEZA, limpeza);
                break;
            case -1:
                ativo = 0;
                break;
        }
    }
    

    return 0;
}


void RelatorioSeccao(Seccao sec, vector<Produto*> &prod){

    system("cls");
    cout << "\n\n";
    FazLinhas(LINHAS);

    cout << "Relatorio de produtos da seccao ";
    switch (sec){
        case Seccao::MERCEARIA:
            cout << "Mercearia:" << endl;
            break;
        case Seccao::FRIOS:
            cout << "Frios:" << endl;
            break;
        case Seccao::PADARIA:
            cout << "Padaria:" << endl;
            break;
        case Seccao::BEBIDAS:
            cout << "Bebidas:" << endl;
            break;
        case Seccao::LIMPEZA:
            cout << "Limpeza:" << endl;
            break;
    }

    cout << "\n";
    for (int i = 0; i < prod.size(); i++){
        prod[i]->Relatorio();
        cout << "\n";
    }

    FazLinhas(LINHAS);
    cout << "\n\n";

    cout << "Pressione ENTER para voltar ao menu" << endl;
    getchar();
    getchar();
}


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


void MenuGeral(Seccao sec, vector<Produto*> &vec){

    int opcao;
    bool emSeccao = true;

    while (emSeccao){
        system("cls");
        FazLinhas(LINHAS);
        cout << "Qual açao deseja realizar?" << endl
            << "[1] > Cadastrar um Novo Produto." << endl
            << "[2] > Atualizar os Dados de Um Produto." << endl
            << "[3] > Ver o Relatorio de Produtos." << endl
            << "[4] > Remover um Produto." << endl
            << "[-1] > Voltar para Secçao Anterior." << endl;
        FazLinhas(LINHAS);

        cout << "\nEscolha uma opcao: ";
        opcao = LerOpcao(1, 3, -1);

        switch (opcao){
            case 1:
                cout << "\n";
                NovoProduto(sec, vec);
                break;
            case 2:
                //Atualizar()
                break;
            case 3:
                RelatorioSeccao(sec, vec);
                break;
            case 4:
                //Remover();
                break;
            case -1:
                emSeccao = false;
                break;
        }
    }
}


void NovoProduto(Seccao sec, vector<Produto*> &vec){
    
    switch (sec){
        case Seccao::MERCEARIA:
            vec.push_back(new Mercearia());
            break;
        case Seccao::FRIOS:
            //vec.puch_back();
            break;
        case Seccao::PADARIA:
            //vec.puch_back();
            break;
        case Seccao::BEBIDAS:
            //vec.puch_back();
            break;
        case Seccao::LIMPEZA:
            //vec.puch_back();
            break;
    }

    vec[vec.size()-1]->Cadastro();

    cout << "\nProduto cadastrado com sucesso! Digite ENTER para continuar" << endl;
    getchar();
    getchar();
}