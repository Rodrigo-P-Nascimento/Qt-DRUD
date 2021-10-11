#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

class Produto{
	protected:
		std::string nome;
		int codigo;
		float preco;

	public:
		Produto();
		Produto(std::string nome, int codigo, float preco);
		virtual ~Produto();

		virtual void RelatorioProduto();
};

class Mercearia : public Produto{
protected:
	int unidade;

public:
	Mercearia();
	Mercearia(std::string nome, int codigo, float preco, int unidade);
	virtual ~Mercearia();

	virtual void RelatorioProduto() override;
};

#endif