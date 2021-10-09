#ifndef MERCEARIA
#define MERCEARIA

#include "Produtos.h"

class Mercearia : public ProdutoUnidade{
public:
    void CadastrarNovoProduto();
    Mercearia();
    Mercearia(std::string nome, int codigo, float preco, RemessaUnidade rem);

};

#endif