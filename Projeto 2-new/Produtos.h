#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto{
	protected:
		std::string nome;
		int codigo;
		float preco;

	public:
		/******** CONSTRUTORES / DESTRUTOR ********/
		Produto();
		Produto(std::string nome, int codigo, float preco);
		virtual ~Produto();

		/******** MÉTODOS ********/
		virtual void Cadastro();
		virtual void Relatorio();
		virtual void Atualizar();
		virtual void Remover();
		
		std::string getNome();
};

class Mercearia : public Produto{
	protected:
		int unidade;

	public:
		/******** CONSTRUTORES / DESTRUTOR ********/
		Mercearia();
		Mercearia(std::string nome, int codigo, float preco, int unidade);
		virtual ~Mercearia();

		/******** MÉTODOS ********/
		virtual void Cadastro() override;
		virtual void Relatorio() override;
		//virtual void Atualizar() override;
		virtual void Remover() override;
};

#endif