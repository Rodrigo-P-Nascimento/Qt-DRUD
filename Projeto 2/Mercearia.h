#include "Produtos.h"

class Mercearia : public ProdutoUnidade{
private:
    
public:
    void CadastrarNovoProduto();
    Mercearia();
    Mercearia(std::string nome, int codigo, float preco, RemessaUnidade rem);
    
};