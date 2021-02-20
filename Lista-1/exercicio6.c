/*Faça um programa que calcula o novo valor do salário de um funcionário.
O usuário informa o salário atual (ex. 3.100,00) e o percentual do reajuste (ex. 4,2 %).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    float salarioInicial, salarioFinal, reajuste;

    printf("Salário atual: ");
    scanf("%f", &salarioInicial);

    printf("Reajuste: ");
    scanf("%f", &reajuste);

    salarioFinal = salarioInicial + (salarioInicial * reajuste / 100);

    printf("Novo salário: %.2f", salarioFinal);

    return 0;
}
