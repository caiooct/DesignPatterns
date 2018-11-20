#include "Acessorios.hpp"

Acessorios::Acessorios(Arma *arma){
    this->arma = arma;
}
float Acessorios::getPreco(){
    return arma->getPreco();
}
string Acessorios::getDescricao(){
    return arma->getDescricao();
}