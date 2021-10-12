#include <iostream>
#include <vector>
#include "Produtos.h"
#include "Produtos.cpp"

#define LINHAS 30

using namespace std;

extern void FazLinhas(int numLinhas);
extern void MenuMercearia(Produto merc);
extern int LerOpcao(int comeco, int fim, int sair);
extern void Relatorio(vector<Produto*> &prod);
extern void NovoProduto(Seccao sec, vector<Produto*> &vec);

int main(){

    vector<Produto*> prods;
    
    int opcao, ativo=1;
    bool emSeccao;
    Seccao seccao;
    
    while(true){
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
                seccao = Seccao::MERCEARIA;
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
        if (ativo == 0){
            break;
        }

        emSeccao = true;
        while (emSeccao){
            FazLinhas(LINHAS);
            cout << "Qual açao deseja realizar?" << endl
                << "[1] > Cadastrar um Novo Produto." << endl
                << "[2] > Atualizar os Dados de Um Produto." << endl
                << "[3] > Ver o Relatorio de Produtos." << endl
                << "[-1] > Voltar para Secçao Anterior." << endl;
            FazLinhas(LINHAS);

            cout << "\nEscolha uma opcao: ";
            opcao = LerOpcao(1, 3, -1);

            switch (opcao){
                case 1:
                    NovoProduto(seccao, prods);
                    break;
                case 2:

                    break;
                case 3:
                    Relatorio(prods);
                    break;
                case -1:
                    emSeccao = false;
                    break;
            }
        }

    }// End While(ativo)
    
    cout << "Acabou o programa!" << endl;

    return 0;
}

void Relatorio(vector<Produto*> &prod){

    for (int i = 0; i < prod.size(); i++){
        prod[i]->Relatorio();
        cout << "\n";
    }
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


void NovoProduto(Seccao sec, vector<Produto*> &vec){
    
    switch (sec){
        case Seccao::MERCEARIA:
            vec.push_back(new Mercearia());
            break;
    }

    vec[vec.size()-1]->Cadastro();
}