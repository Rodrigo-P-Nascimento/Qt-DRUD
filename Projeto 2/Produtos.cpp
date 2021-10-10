#include "Produtos.h"

/********************* Class Remessa *********************/

/******** CONSTRUTORES ********/
Remessa::Remessa(){
    dataFabricacao = dataValidade = "";
}

Remessa::Remessa(int dia_fab, int mes_fab, int ano_fab,
                 int dia_val, int mes_val, int ano_val)
{
    setDataFabricacao(dia_fab, mes_fab, ano_fab);
    setDataValidade(dia_val, mes_val, ano_val);
}


/******** MÉTODOS PRIVADOS ********/
bool Remessa::diaValido(int dia, int mes) const{

    if (dia <= 0){
        return false;
    }

    switch (mes){
        case 1:
            if (dia > DiasMes::JANEIRO) return false;
            break;
        case 2:
            if (dia > DiasMes::FEVEREIRO) return false;
            break;
        case 3:
            if (dia > DiasMes::MARCO) return false;
            break;
        case 4:
            if (dia > DiasMes::ABRIL) return false;
            break;
        case 5:
            if (dia > DiasMes::MAIO) return false;
            break;
        case 6:
            if (dia > DiasMes::JUNHO) return false;
            break;
        case 7:
            if (dia > DiasMes::JULHO) return false;
            break;
        case 8:
            if (dia > DiasMes::AGOSTO) return false;
            break;
        case 9:
            if (dia > DiasMes::SETEMBRO) return false;
            break;
        case 10:
            if (dia > DiasMes::OUTUBRO) return false;
            break;
        case 11:
            if (dia > DiasMes::NOVEMBRO) return false;
            break;
        case 12:
            if (dia > DiasMes::DEZEMBRO) return false;
            break;
        default: //Aqui é considerado um mês qualquer de 31 dias
            if (dia <= 31){
                return true;
            }
            else {
                return false;
            }
    }


    return true;
}

bool Remessa::mesValido(int mes) const{

    if (mes <= 0 || mes > 12) return false;
    else return true;
}

bool Remessa::anoValido(int ano) const{

    if (ano < 0) return false;
    else return true;
}


/******** MÉTODOS ********/
void Remessa::setDataFabricacao(int dia, int mes, int ano){

    dataFabricacao = "";

    if (diaValido(dia, mes))
    {
        if (dia < 10) dataFabricacao += "0";

        dataFabricacao += std::to_string(dia) + "/";
    }
    else
    {
        dataFabricacao += "00/";
    }

    if (mesValido(mes))
    {
        if (mes < 10) dataFabricacao += "0";

        dataFabricacao += std::to_string(mes) + "/";
    }
    else {
        dataFabricacao += "00/";
    }

    if (anoValido(ano))
    {
        dataFabricacao += std::to_string(ano);
    }
    else
    {
        dataFabricacao += "0000";
    }
}

void Remessa::setDataValidade(int dia, int mes, int ano){

    dataValidade = "";

    if (diaValido(dia, mes))
    {
        if (dia < 10) dataValidade += "0";

        dataValidade += std::to_string(dia) + "/";
    }
    else
    {
        dataValidade += "00/";
    }

    if (mesValido(mes))
    {
        if (mes < 10) dataValidade += "0";

        dataValidade += std::to_string(mes) + "/";
    }
    else {
        dataValidade += "00/";
    }

    if (anoValido(ano))
    {
        dataValidade += std::to_string(ano);
    }
    else
    {
        dataValidade += "0000";
    }

}



/********************* Class RemessaUnidade *********************/

/******** CONSTRUTORES ********/
RemessaUnidade::RemessaUnidade()
              : Remessa()
{
    quantProdutos = 0;
}

RemessaUnidade::RemessaUnidade(int n_prod, int dia_fab, int mes_fab, int ano_fab,
                               int dia_val, int mes_val, int ano_val)
              : Remessa(dia_fab, mes_fab, ano_fab, dia_val, mes_val, ano_val)
{
    if (n_prod > 0) quantProdutos = n_prod;
    else quantProdutos = 0;
}


/******** MÉTODOS ********/
void RemessaUnidade::setQuantProdutos(int quant){
    
    if (quant >= 0) quantProdutos = quant;
}



/********************* Class RemessaPeso *********************/

/******** CONSTRUTORES ********/
RemessaPeso::RemessaPeso()
           : Remessa()
{
    peso = 0;
}

RemessaPeso::RemessaPeso(float peso_prod, int dia_fab, int mes_fab, int ano_fab,
                        int dia_val, int mes_val, int ano_val)
           : Remessa(dia_fab, mes_fab, ano_fab, dia_val, mes_val, ano_val)
{
    if (peso_prod > 0) peso = peso_prod;
    else peso = 0;
}


/******** MÉTODOS ********/
void RemessaPeso::setPeso(float peso){

    if (peso >= 0) this->peso = peso;
}



/********************* Class Produto *********************/

int Produto::n_produtos_instanciados = 0;

/******** CONSTRUTORES ********/
Produto::Produto(){
    nome = "";
    codigo = 0;
    n_produtos_instanciados++;
}

Produto::Produto(std::string nome, int codigo, float preco){

    this->nome = nome;

    if (codigo > 0) this->codigo = codigo;
    else this->codigo = 0;

    if (preco >= 0) this->preco = preco;
    else this->preco = 0;

    n_produtos_instanciados++;
}


/******** DESTRUTOR ********/
Produto::~Produto(){
    n_produtos_instanciados--;
}



/******** MÉTODOS ********/
void Produto::setNome(std::string nome){
    this->nome = nome;
}

void Produto::setCodigo(int codigo){

    if (codigo > 0){
        this->codigo = codigo;
        return;
    }

    int cod;
    while (true)
    {
        std::cout << "Codigo invalido! Insira um novo codigo: ";
        std::cin >> cod;
        if (cod > 0) break; //Codigo valido
    }

    this->codigo = cod;
}

void Produto::setPreco(float preco){

    if (preco > 0){
        this->preco = preco;
        return;
    }

    float price;
    while (true)
    {
        std::cout << "Preco invalido! Insira um novo preco: ";
        std::cin >> price;
        if (price > 0) break; //Preco valido
    }

    this->preco = price;
}

int Produto::getQuantProdutos(){
    return n_produtos_instanciados;
}



/********************* Class ProdutoUnidade *********************/

/******** CONSTRUTORES ********/
ProdutoUnidade::ProdutoUnidade()
              : Produto()
{
    remessa.clear();
}

ProdutoUnidade::ProdutoUnidade(std::string nome, int codigo, float preco, RemessaUnidade rem)
              : Produto(nome, codigo, preco)
{
    remessa.push_back(rem);
}

/******** MÉTODOS ********/
RemessaUnidade ProdutoUnidade::getRemessa(int indice) const{

    if (indice >= 0 && indice < remessa.size()) return remessa[indice];
}

void ProdutoUnidade::novaRemessa()
{
    remessa.push_back(RemessaUnidade());

    int quant;
    int dia, mes, ano;

    std::cout << "Digite quantos produtos tem na remessa: ";
    std::cin >> quant;
    while(quant <= 0){
        std::cout << "Quantidade invalida! Insira um novo valor: ";
        std::cin >> quant;
    }
    remessa[remessa.size()-1].setQuantProdutos(quant);

    std::cout << "Digite os seguintes dados da data de fabricacao dos produtos:" << std::endl;
    
    std::cout << "Ano: ";
    std::cin >> ano;
    while(ano <= 0){
        std::cout << "Ano invalido! Insira um novo ano: ";
        std::cin >> ano;
    }

    std::cout << "Mes: ";
    std::cin >> mes;
    while(mes < 1 || mes > 12){
        std::cout << "Mes invalido! Insira um novo ano: ";
        std::cin >> mes;
    }

    std::cout << "Dia: ";
    std::cin >> dia;
    while(dia < 1 || dia > 31){
        std::cout << "Dia invalido! Insira um novo ano: ";
        std::cin >> dia;
    }

    remessa[remessa.size()-1].setDataFabricacao(dia, mes, ano);


    std::cout << "Digite os seguintes dados da data de validade dos produtos:" << std::endl;
    
    std::cout << "Ano: ";
    std::cin >> ano;
    while(ano <= 0){
        std::cout << "Ano invalido! Insira um novo ano: ";
        std::cin >> ano;
    }

    std::cout << "Mes: ";
    std::cin >> mes;
    while(mes < 1 || mes > 12){
        std::cout << "Mes invalido! Insira um novo ano: ";
        std::cin >> mes;
    }

    std::cout << "Dia: ";
    std::cin >> dia;
    while(dia < 1 || dia > 31){
        std::cout << "Dia invalido! Insira um novo ano: ";
        std::cin >> dia;
    }

    remessa[remessa.size()-1].setDataValidade(dia, mes, ano);
}



/********************* Class ProdutoPeso *********************/

/******** CONSTRUTORES ********/
ProdutoPeso::ProdutoPeso()
           : Produto()
{
    remessa.clear();
}

ProdutoPeso::ProdutoPeso(std::string nome, int codigo, float preco, RemessaPeso rem)
           : Produto(nome, codigo, preco)
{
    remessa.push_back(rem);
}

/******** MÉTODOS ********/
RemessaPeso ProdutoPeso::getRemessa(int indice) const{

    if (indice >= 0 && indice < remessa.size()) return remessa[indice];
}
