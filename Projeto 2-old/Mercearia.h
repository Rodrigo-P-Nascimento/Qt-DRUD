#ifndef MERCEARIA
#define MERCEARIA

#include "Produtos.h"

class Mercearia : public ProdutoUnidade{
public:
    void CadastrarNovoProduto();
    void RelatorioProdutos();
    Mercearia();
    Mercearia(std::string nome, int codigo, float preco);

};

#endif