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
		int getCodigo();
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

class Frios_Acougue : public Produto{
	protected:
		float peso;

	public:
		/******** CONSTRUTORES / DESTRUTOR ********/
		Frios_Acougue();
		Frios_Acougue(std::string nome, int codigo, float preco, float peso);
		virtual ~Frios_Acougue();

		/******** MÉTODOS ********/
		virtual void Cadastro() override;
		virtual void Relatorio() override;
		//virtual void Atualizar() override;
		virtual void Remover() override;
};

class Padaria : public Produto{
	protected:
		float peso;

	public:
		/******** CONSTRUTORES / DESTRUTOR ********/
		Padaria();
		Padaria(std::string nome, int codigo, float preco, float peso);
		virtual ~Padaria();

		/******** MÉTODOS ********/
		virtual void Cadastro() override;
		virtual void Relatorio() override;
		//virtual void Atualizar() override;
		virtual void Remover() override;
};

class Bebidas : public Produto{
	protected:
		int unidade;
		
	public:
		/******** CONSTRUTORES / DESTRUTOR ********/
		Bebidas();
		Bebidas(std::string nome, int codigo, float preco, int unidade);
		virtual ~Bebidas();

		/******** MÉTODOS ********/
		virtual void Cadastro() override;
		virtual void Relatorio() override;
		//virtual void Atualizar() override;
		virtual void Remover() override;
};

class Limpeza : public Produto{
	protected:
		int unidade;

	public:
		/******** CONSTRUTORES / DESTRUTOR ********/
		Limpeza();
		Limpeza(std::string nome, int codigo, float preco, int unidade);
		virtual ~Limpeza();

		/******** MÉTODOS ********/
		virtual void Cadastro() override;
		virtual void Relatorio() override;
		//virtual void Atualizar() override;
		virtual void Remover() override;
};

#endif