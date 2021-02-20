/*Crie uma função que recebe dois valores boleanos (A e B) e retorne o valor verdade da operação (~A V B) em relação aos dois valores.*/

#include <stdio.h>
#include <stdlib.h>

bool valorVerdade(bool a, bool b){
    bool valor;
    if (a == 0 && b == 0)
        valor = 1;
    else if (a == 1 && b == 1)
        valor = 1;
    else if (a == 0 && b == 1)
        valor = 1;
    else if (a == 1 && b == 0)
        valor = 0;

    return valor;
}

int main(){
    bool a, b, valor;
    printf("Informe dois valores booleanos (0 e 1) para verificar: ");
    scanf("%b%b", &a, &b);

    valor = valorVerdade(a, b);

    printf("O valor verdade da operação (~A V B) e: %b", valor);

    return 0;
}
