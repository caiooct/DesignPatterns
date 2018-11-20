#ifndef ACESSORIOS_HPP
#define ACESSORIOS_HPP

#include "Arma.hpp"

class Acessorios: public Arma{
    Arma *arma;
    public:
        Acessorios(Arma *arma);
        virtual float getPreco();
        virtual string getDescricao();
};

#endif