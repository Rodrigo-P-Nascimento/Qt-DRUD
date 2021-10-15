#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>


enum Seccao
{
	INDEFINIDO,
	MERCEARIA,
	FRIOS,
	PADARIA,
	BEBIDAS,
	LIMPEZA
};


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
		virtual void Relatorio() const;
		virtual void Atualizar();
		virtual void TornarPadrao();
		
		std::string getNome() const;
		int getCodigo() const;
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
		virtual void Relatorio() const override;
		//virtual void Atualizar() override;
		virtual void TornarPadrao() override;
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
		virtual void Relatorio() const override;
		//virtual void Atualizar() override;
		virtual void TornarPadrao() override;
};

class Padaria : public Produto{
	protected:
		float peso;
		bool temGluten;

	public:
		/******** CONSTRUTORES / DESTRUTOR ********/
		Padaria();
		Padaria(std::string nome, int codigo, float preco, float peso);
		virtual ~Padaria();

		/******** MÉTODOS ********/
		virtual void Cadastro() override;
		virtual void Relatorio() const override;
		//virtual void Atualizar() override;
		virtual void TornarPadrao() override;
};

class Bebidas : public Produto{
	protected:
		int unidade;
		float volume;
		bool ehAlcoolica;
		bool ehGaseificada;

	public:
		/******** CONSTRUTORES / DESTRUTOR ********/
		Bebidas();
		Bebidas(std::string nome, int codigo, float preco, int unidade);
		virtual ~Bebidas();

		/******** MÉTODOS ********/
		virtual void Cadastro() override;
		virtual void Relatorio() const override;
		//virtual void Atualizar() override;
		virtual void TornarPadrao() override;
};

class Limpeza : public Produto{
	protected:
		int unidade;
		std::string fragrancia;

	public:
		/******** CONSTRUTORES / DESTRUTOR ********/
		Limpeza();
		Limpeza(std::string nome, int codigo, float preco, int unidade);
		virtual ~Limpeza();

		/******** MÉTODOS ********/
		virtual void Cadastro() override;
		virtual void Relatorio() const override;
		//virtual void Atualizar() override;
		virtual void TornarPadrao() override;
};

#endif