//Verifica se o numerador e o denominador de uma fração são primos e se a fração é válida

#include <iostream>

using namespace std;

class Fracao{
public:
    int numerador;
    int denominador;
    void imprimir();
    bool primo(int numerador, int denominador);
};

void Fracao::imprimir(){
        cout << "Fracao: " << numerador << "/" << denominador << endl;
}

bool Fracao::primo(int numerador, int denominador){
        int aux1 = 0, aux2 = 0, i, resultado;
        for(i = 2; i <= numerador/2; i++){
            if (numerador % i == 0){
                aux1++;
            }
        }
        if(aux1 == 0){
            for(i = 2; i <= denominador / 2; i++){
                if (denominador % i == 0)
                    aux2++;
            }
            if(aux2 == 0)
                resultado = true;
            else
                resultado = false;
        }else
            resultado = false;

        return resultado;

}

int main(){
    Fracao *fracaozinha = new Fracao();

    cout << "Numerador: ";
    cin >> fracaozinha->numerador;

    cout << "Denominador: ";
    cin >> fracaozinha->denominador;

    if (fracaozinha->denominador == 0)
        cout << "Denominador invalido";
    else{
        fracaozinha->imprimir();

        int a = fracaozinha->primo(fracaozinha->numerador, fracaozinha->denominador);

        if(a)
            cout << "Primos";
        else
            cout << "Nao sao primos";
    }

    return 0;
}
