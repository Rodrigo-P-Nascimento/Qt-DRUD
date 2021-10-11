#ifndef BASE_V3
#define BASE_V3

#include <string>
#include <vector>


/************************************* PRODUTO ********************************************/
class Produto
{
    private:
        std::string nome;
        int codigo;
        float preco;

        static int n_produtos_instanciados;

    public:
        /******** CONSTRUTORES ********/
        Produto();
        Produto(std::string nome, int codigo, float preco);

        /******** DESTRUTOR ********/
        ~Produto();

        /******** MÉTODOS ********/
        std::string getNome() const { return nome; }
        int getCodigo() const { return codigo; }
        float getPreco() const { return preco; }


        void setNome(std::string nome);
        void setCodigo(int codigo);
        void setPreco(float preco);


        void novaRemessa(int n_prod, int dia_fab, int mes_fab, int ano_fab,
                         int dia_val, int mes_val, int ano_val);

        static int getQuantProdutos();
};


class ProdutoUnidade : public Produto
{
    private:
        int quantidade;

    public:
        /******** CONSTRUTORES ********/
        ProdutoUnidade();
};


class ProdutoPeso : public Produto
{
    private:
        float peso;

    public:
        /******** CONSTRUTORES ********/
        ProdutoPeso();
};
/******************************************************************************************/


#endif