#include "produtos.h"

Fornecedor::Fornecedor(){
    nome = pais_sede = estado_sede = cidade_sede = "";
}

Fornecedor::Fornecedor(QString nome, QString pais, QString estado, QString cidade){
    this->nome = nome;
    this->pais_sede = pais;
    this->estado_sede = estado;
    this->cidade_sede = cidade;
}

Produto::Produto(){
    this->nome = "";
    this->codigo = 0;
    this->preco = 0;
}

Produto::Produto(QString nome, QString codigo, QString preco, QString DataFabricacao, QString DataValidade){
    this->nome = nome;
    this->codigo = codigo;
    this->preco = preco;
    this->DataFabricacao = DataFabricacao;
    this->DataValidade = DataValidade;
}

Produto::~Produto(){
}
void Produto::definirFornecedor(QString nome, QString pais, QString estado, QString cidade){
    fornecedor = Fornecedor(nome, pais, estado, cidade);
}
QString  Produto::getNome() const{
    return this->nome;
}

QString Produto::getCodigo() const{
    return this->codigo;
}

Mercearia::Mercearia(){
    unidade = 0;
}

Mercearia::Mercearia(QString nome, QString codigo, QString preco, QString unidade, QString DataFabricacao, QString DataValidade)
        : Produto(nome, codigo, preco, DataFabricacao, DataValidade)
{
    this->unidade = unidade;
}

Mercearia::~Mercearia()
{
}

Frios_Acougue::Frios_Acougue(){
    peso = 0;
}

Frios_Acougue::Frios_Acougue(QString nome, QString codigo, QString preco, QString peso, QString DataFabricacao, QString DataValidade)
        : Produto(nome, codigo, preco, DataFabricacao, DataValidade)
{
    this->peso = peso;
}

Frios_Acougue::~Frios_Acougue()
{
}

Padaria::Padaria(){
    peso = 0;
}

Padaria::Padaria(QString nome, QString codigo, QString preco, QString peso, QString DataFabricacao, QString DataValidade)
        : Produto(nome, codigo, preco, DataFabricacao, DataValidade)
{
    this->peso = peso;
}

Padaria::~Padaria()
{
}

Bebidas::Bebidas(){
    unidade = 0;
}

Bebidas::Bebidas(QString nome, QString codigo, QString preco, QString unidade, QString DataFabricacao, QString DataValidade)
        : Produto(nome, codigo, preco, DataFabricacao, DataValidade)
{
    this->unidade = unidade;
}

Bebidas::~Bebidas()
{
}

Limpeza::Limpeza(){
    unidade = 0;
}

Limpeza::Limpeza(QString nome, QString codigo, QString preco, QString unidade, QString DataFabricacao, QString DataValidade)
        : Produto(nome, codigo, preco, DataFabricacao, DataValidade)
{
    this->unidade = unidade;
}

Limpeza::~Limpeza()
{
}
