#ifndef ARMA_H
#define ARMA_H

#include <string>
using namespace std;

class Arma{
    string descricao;
    float preco;

    public:
        virtual float getPreco() = 0;
        virtual string getDescricao() = 0;
};

#endif