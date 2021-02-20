/*Fa�a um programa que calcula o novo valor do sal�rio de um funcion�rio.
O usu�rio informa o sal�rio atual (ex. 3.100,00) e o percentual do reajuste (ex. 4,2 %).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    float salarioInicial, salarioFinal, reajuste;

    printf("Sal�rio atual: ");
    scanf("%f", &salarioInicial);

    printf("Reajuste: ");
    scanf("%f", &reajuste);

    salarioFinal = salarioInicial + (salarioInicial * reajuste / 100);

    printf("Novo sal�rio: %.2f", salarioFinal);

    return 0;
}
