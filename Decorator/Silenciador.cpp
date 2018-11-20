#include "Acessorios.hpp"

class Silenciador: public Acessorios{
    public:
        Silenciador(Arma *arma): Acessorios(arma){};
        
        float getPreco();
        string getDescricao();
};

float Silenciador::getPreco(){
    return Acessorios::getPreco() + 500;
}
string Silenciador::getDescricao(){
    return Acessorios::getDescricao() + "\nSilenciador adicionado";
}