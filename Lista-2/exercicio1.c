/*Identificar se um inteiro lido � par ou n�o. Se o n�mero for menor ou igual a zero,
informe ao usu�rio que o n�mero deve ser maior que zero.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero < 0)
        printf("Digite um numero maior que zero");
    else if(numero % 2 == 0)
        printf("O numero e par");
    else
        printf("O numero e impar");
    return 0;
}
