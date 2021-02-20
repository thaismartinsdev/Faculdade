#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

struct fruta{
    string nome;
    string cor;
};

int main(){
    fruta *primeiraFruta = new fruta;

    primeiraFruta -> nome = "Abacaxi";
    primeiraFruta -> cor = "Amarelo";

    cout << "Fruta: " << primeiraFruta -> nome << ", Cor: " << primeiraFruta -> cor << endl;

    fruta *listaDeFrutas = new fruta[3];

    listaDeFrutas[0].nome = "Morango";
    listaDeFrutas[0].cor = "Vermelho";
    listaDeFrutas[1].nome = "Abacate";
    listaDeFrutas[1].cor = "Verde";
    listaDeFrutas[2].nome = "Amora";
    listaDeFrutas[2].cor = "Roxo";

    for(int i = 0; i < 3; i++){
        cout << "Fruta: " << listaDeFrutas[i].nome << ", Cor: " << listaDeFrutas[i].cor << endl;
    }



    return 0;
}
