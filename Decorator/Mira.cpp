#include "Acessorios.hpp"

class Mira: public Acessorios{
    public:
        Mira(Arma *arma): Acessorios(arma){};
        
        float getPreco();
        string getDescricao();
};

float Mira::getPreco(){
    return Acessorios::getPreco() + 250.50;
}
string Mira::getDescricao(){
    return Acessorios::getDescricao() + "\nMira adicionada";
}