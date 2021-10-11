#ifndef BASE_V3
#define BASE_V3

#include <string>
#include <vector>

enum DiasMes 
{ 
    JANEIRO = 31,
    FEVEREIRO = 28,
    MARCO = 31,
    ABRIL = 30,
    MAIO = 31,
    JUNHO = 30,
    JULHO = 31,
    AGOSTO = 31,
    SETEMBRO = 30,
    OUTUBRO = 31,
    NOVEMBRO = 30,
    DEZEMBRO = 31
};

/***************************************** REMESSAS ***************************************/
class Remessa
{
    protected:
        std::string dataFabricacao;
        std::string dataValidade;

        /******** MÉTODOS PROTECTED ********/
        bool diaValido(int dia, int mes) const;
        bool mesValido(int mes) const;
        bool anoValido(int ano) const;

    public:
        /******** CONSTRUTORES ********/
        Remessa();
        Remessa(int dia_fab, int mes_fab, int ano_fab,
                int dia_val, int mes_val, int ano_val);

        /******** MÉTODOS ********/
        std::string getDataFabricacao() const { return dataFabricacao; }
        std::string getDataValidade() const { return dataValidade; }


        //void setQuantProdutos(int quant)=0; POSSIVLE ERRO Não seria melhor usar o VIRTUAL AQUI ou tirar?
        void setDataFabricacao(int dia, int mes, int ano);
        void setDataValidade(int dia, int mes, int ano);
};


class RemessaUnidade : public Remessa
{
    private:
        int quantProdutos;

    public:
        /******** CONSTRUTORES ********/
        RemessaUnidade();
        RemessaUnidade(int n_prod, int dia_fab, int mes_fab, int ano_fab,
                int dia_val, int mes_val, int ano_val);

        /******** MÉTODOS ********/
        int getQuantProdutos() const { return quantProdutos; }

        void setQuantProdutos(int quant);
};


class RemessaPeso : public Remessa
{
    private:
        float peso;

    public:
        /******** CONSTRUTORES ********/
        RemessaPeso();
        RemessaPeso(float peso_prod, int dia_fab, int mes_fab, int ano_fab,
                int dia_val, int mes_val, int ano_val);

        /******** MÉTODOS ********/
        float getPeso() const { return peso; }

        void setPeso(float peso);
};
/******************************************************************************************/



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
        std::vector<RemessaUnidade> remessa;

    public:
        /******** CONSTRUTORES ********/
        ProdutoUnidade();
        ProdutoUnidade(std::string nome, int codigo, float preco, RemessaUnidade rem);

        /******** MÉTODOS ********/
        RemessaUnidade getPrimeiraRemessa() const { return remessa.front(); }
        RemessaUnidade getUltimaRemessa() const { return remessa.back(); }
        RemessaUnidade getRemessa(int indice) const;
        int getQuantRemessas() const { return remessa.size(); }

        void novaRemessa();
};


class ProdutoPeso : public Produto
{
    private:
        std::vector<RemessaPeso> remessa;

    public:
        /******** CONSTRUTORES ********/
        ProdutoPeso();
        ProdutoPeso(std::string nome, int codigo, float preco, RemessaPeso rem);

        /******** MÉTODOS ********/
        RemessaPeso getPrimeiraRemessa() const { return remessa.front(); }
        RemessaPeso getUltimaRemessa() const { return remessa.back(); }
        RemessaPeso getRemessa(int indice) const;
        int getQuantRemessas() const { return remessa.size(); }

        void novaRemessa(float peso_prod, int dia_fab, int mes_fab, int ano_fab,
                         int dia_val, int mes_val, int ano_val);
};
/******************************************************************************************/


#endif