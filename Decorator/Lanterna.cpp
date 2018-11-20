#include "Acessorios.hpp"

class Lanterna: public Acessorios{
    public:
        Lanterna(Arma *arma): Acessorios(arma){};
        
        float getPreco();
        string getDescricao();
};

float Lanterna::getPreco(){
    return Acessorios::getPreco() + 500.25;
}
string Lanterna::getDescricao(){
    return Acessorios::getDescricao() + "\nLanterna adicionada";
}