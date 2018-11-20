#include "Arma.hpp"

class Pistola: public Arma{
    public:
        float getPreco();
        string getDescricao();
};

float Pistola::getPreco(){
    return 1000;
}
string Pistola::getDescricao(){
    return "Pistola";
}