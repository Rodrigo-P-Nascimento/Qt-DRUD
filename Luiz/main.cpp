#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include "Produtos.h"
#include "Produtos.cpp"

#define LINHAS 40

using namespace std;

// Funções Suporte
extern void FazLinhas(int numLinhas);
extern void limparTela(void);
extern void limparBuffer(void);
extern int LerOpcao(int comeco, int fim, int sair);

// Funções Suporte para as Classes
extern bool Compara(Produto *a, Produto *b);
extern void MenuGeral(Seccao sec, vector<Produto*> &vec);
extern void NovoProduto(Seccao sec, vector<Produto*> &vec);
extern void AtualizarGeral(Seccao sec, vector<Produto*> &vec);
extern void RelatorioSeccao(Seccao sec, vector<Produto*> &vec);
extern void RelatorioFornecedores(Seccao sec, vector<Produto*> &vec);
extern void RemoverGeral(Seccao sec, vector<Produto*> &vec);
extern string ToStrSeccao(Seccao sec);


int main(){

    vector<Produto*> mercearia;
    vector<Produto*> frios;
    vector<Produto*> padaria;
    vector<Produto*> bebidas;
    vector<Produto*> limpeza;
    
    int opcao, ativo=1;
    
    while(ativo){
        limparTela();

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

    cout << "Saindo do programa!" << endl;

    cout << "\nPressione ENTER para sair do programa!" << endl;
    getchar();
    getchar();
    
    return 0;
}// End Main()

void FazLinhas(int numLinhas){
    for(int i=1; i <= numLinhas; i++){
        if(i == numLinhas) cout << "-" << endl;
        else cout << "-";
    }
}// End FazLinhas()

void limparTela(void){
    system("cls"); // Só funciona no Windows
} // End limparTela()

void limparBuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
} // End limparBuffer()

int LerOpcao(int comeco, int fim, int sair){
    int opcao;
    bool opcaoInvalida = true;
    
    while (opcaoInvalida){
        cin >> opcao;

        if ((opcao >= comeco && opcao <= fim) || (opcao == sair)){
            return opcao;
        } else {
            cout << "Opcao invalida! Tente novamente!" << endl;
            cout << "\nDigite uma opcao: ";
        }
    }// End While(opcaoInvalida)
}// End LerOpcao()

bool Compara(Produto *a, Produto *b){
	return a->getCodigo() < b->getCodigo();
} // End Compara()

void MenuGeral(Seccao sec, vector<Produto*> &vec){
    int opcao;

    while (true){
        limparTela();

        FazLinhas(LINHAS);
        cout << "Bem-vindo a Secao de " << ToStrSeccao(sec) << endl;
        FazLinhas(LINHAS);

        cout << "\t[1] Cadastrar um Novo Produto" << endl;
        cout << "\t[2] Relatorio de Seccao" << endl;
        cout << "\t[3] Relatorio de Fornecedores" << endl;
        cout << "\t[4] Atualizar um Produto" << endl;
        cout << "\t[5] Remover um Produto" << endl;
        cout << "\t[-1] Voltar para Menu Anterior" << endl;

        cout << "\nDigite uma opcao: ";
        opcao = LerOpcao(1, 5, -1);

        switch (opcao){
            case 1:
                cout << "\n";
                NovoProduto(sec, vec);
                break;
            case 2:
                RelatorioSeccao(sec, vec);
                break;
            case 3:
                RelatorioFornecedores(sec, vec);
                break;
            case 4:
                AtualizarGeral(sec, vec);
                break;
            case 5:
                RemoverGeral(sec, vec);
                break;
            case -1:
                return;
        }
        cout << "\nPressione ENTER para voltar ao Menu" << endl;
        limparBuffer();
        getchar();
    }
}

void NovoProduto(Seccao sec, vector<Produto*> &vec){
    
    switch (sec){
        case Seccao::MERCEARIA:
            vec.push_back(new Mercearia());
            break;
        case Seccao::FRIOS:
            vec.push_back(new Frios_Acougue());
            break;
        case Seccao::PADARIA:
            vec.push_back(new Padaria());
            break;
        case Seccao::BEBIDAS:
            vec.push_back(new Bebidas());
            break;
        case Seccao::LIMPEZA:
            vec.push_back(new Limpeza());
            break;
    }

    vec[vec.size()-1]->Cadastro();

    cout << "\nProduto cadastrado com sucesso!" << endl;
}

void RelatorioSeccao(Seccao sec, vector<Produto*> &vec){
    
    limparTela();

    if (vec.size() == 0){
        cout << "\nESTOQUE VAZIO!" << endl;
        return;
    }

    FazLinhas(LINHAS);
    cout << "Relatorio da Secao " << ToStrSeccao(sec) << endl;
    FazLinhas(LINHAS);

    switch (sec){
        case Seccao::MERCEARIA:
            cout << "\nCODIGO" << "\tNOME" << "\t\t\t\t\t\tPRECO" << "\tESTOQUE" << endl;
            break;
        case Seccao::FRIOS:
            cout << "\nCODIGO" << "\tNOME" << "\t\t\t\t\t\tPRECO" << "\tESTOQUE" << endl;
            break;
        case Seccao::PADARIA:
            cout << "\nCODIGO" << "\tNOME" << "\t\t\t\t\t\tPRECO" << "\tGLUTEN" << "\tESTOQUE" << endl;
            break;
        case Seccao::BEBIDAS:
            cout << "\nCODIGO" << "\tNOME" << "\t\t\t\t\t\tPRECO" << "\tALCOOLICA" << "\tGASEIFICADA" << "\tVOLUME" << "\tESTOQUE" << endl;
            break;
        case Seccao::LIMPEZA:
            cout << "\nCODIGO" << "\tNOME" << "\t\t\t\t\t\tPRECO" << "\tFRAGRANCIA" << "\t\t\t\t\t\tESTOQUE" << endl;
            break;
    }

    sort(vec.begin(), vec.end(), Compara);

    for (auto&& it : vec){
        it->Relatorio();
        cout << endl;
    }
} // End RelatorioSeccao()


void RelatorioFornecedores(Seccao sec, vector<Produto*> &vec){

    limparTela();

    FazLinhas(LINHAS);
    cout << "Relatorio de Fornecedores da Seccao " << ToStrSeccao(sec) << endl;
    FazLinhas(LINHAS);

    if (vec.size() == 0){
        cout << "NAO HA NENHUM PRODUTO CADASTRADO!" << endl;
        return;
    }

    cout << "NOME FORNECEDOR" << "\t\t\t\t\t\t\t\t" << "PAIS SEDE" << "\t\t\t" << "ESTADO SEDE" 
         << "\t\t\t" << "CIDADE SEDE" << endl;

    for (auto&& it : vec)
    {
        cout << it->fornecedor.nome << "\t\t\t\t\t\t\t\t" << it->fornecedor.pais_sede
             << "\t\t\t\t" << it->fornecedor.estado_sede
             << "\t\t\t\t" << it->fornecedor.cidade_sede << endl;
    }
}// End RelatorioFornecedores()


void AtualizarGeral(Seccao sec, vector<Produto*> &vec){
    int codigo;
    bool produtoEncontrado = false;
    bool continuar = true;

    while(continuar){
        limparTela();

        if (vec.size() == 0){
            cout << "\nESTOQUE VAZIO!" << endl;
            return;
        }

        RelatorioSeccao(sec, vec);
    
        cout << "\nSelecione um Produto para atualizar" <<  endl;
        cout << "Codigo: ";
        cin >> codigo;

        produtoEncontrado = false;
        for (auto&& it : vec){
            if (it->getCodigo() == codigo){
                produtoEncontrado = true;
                it->Atualizar();
                cout << "\nProduto Atualizado com Sucesso!" << endl;
                break;
            }
        }

        if (produtoEncontrado == false) cout << "\nProduto nao encontrado!" << endl;

        cout << "\nDeseja atualizar algum outro item?" << endl
             << "[1] Sim" << endl
             << "[0] Nao" << endl;

        cout << "\nDigite uma opcao: ";
        continuar = LerOpcao(0, 1, 0);
    }
}

void RemoverGeral(Seccao sec, vector<Produto*> &vec){
    int codigo;
    bool produtoEncontrado = false;
    bool continuar = true;

    while(continuar){
        limparTela();

        if (vec.size() == 0){
            cout << "\nESTOQUE VAZIO!" << endl;
            return;
        }

        RelatorioSeccao(sec, vec);

        cout << "\nSelecione um Produto para remover" <<  endl;
        cout << "Codigo: ";
        cin >> codigo;

        produtoEncontrado = false;
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i]->getCodigo() == codigo){
                produtoEncontrado = true;
                delete vec[i];
                vec.erase(vec.begin() + i);
                cout << "\nProduto Removido com Sucesso!" << endl;
                break;
            }
        }

        if (produtoEncontrado == false) cout << "\nProduto nao encontrado!" << endl;

        cout << "\nDeseja remover algum outro item?" << endl
             << "[1] Sim" << endl
             << "[0] Nao" << endl;

        cout << "\nDigite uma opcao: ";
        continuar = LerOpcao(0, 1, 0);
    }
}// End RemoverGeral()

string ToStrSeccao(Seccao sec){

    switch (sec){
        case Seccao::MERCEARIA:
            return "Mercearia";
        case Seccao::FRIOS:
            return "Frios/Acougue";
        case Seccao::PADARIA:
            return "Padaria";
        case Seccao::BEBIDAS:
            return "Bebidas";
        case Seccao::LIMPEZA:
            return "Limpeza";
        default:
            return "INDEFINIDO";
    }
}// End ToStrSeccao()