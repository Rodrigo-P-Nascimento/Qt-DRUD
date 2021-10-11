#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

class Produto{
	protected:
		std::string nome;
		int codigo;
		float preco;
	public:
		//virtual void RelatorioProduto();

		Produto();
		virtual ~Produto();
		Produto(std::string nome, int codigo, float preco);
};

class Mercearia : public Produto {
protected:
	int unidade;
public:
	//void RelatorioProduto();
	Mercearia();
	Mercearia(std::string nome, int codigo, float preco, int unidade);
	virtual ~Mercearia();
};

#endif