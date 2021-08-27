#include <iostream>

using namespace std;

void Menu(){
    cout << "\t\t Menu de Funcoes:\n" <<
            "\t 1 - Cadastrar Produto\n" <<
            "\t 2 - Buscar Produto\n" <<
            "\t 3 - Relatorio de Produtos\n" <<
            "\t 9 - Sair" << endl;
}

int main(){
    int opcao;

    while(1){
        Menu();
        cout << "Digite uma opcao: ";
        cin >> opcao;
        
        if(opcao == 9){
            break;
        }

        switch(opcao){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            default:
                cout << "Opcao " << opcao << " invalida." << endl;
        }
    }

    return 0;
}