#include "main.hpp"

int main(int argc, char const *argv[]){
    
    
    // Arma *arminha = new Silenciador(new Mira(new Lanterna(new Pistola())));
    // ou
    Arma *arminha = new Pistola();
    arminha = new Lanterna(arminha);
    arminha = new Mira(arminha);
    arminha = new Silenciador(arminha);

    cout << arminha->getDescricao() << endl;
    cout << arminha->getPreco() << endl;

    return 0;
}
