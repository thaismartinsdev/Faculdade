/*Faça um programa que o usuário informa o valor a ser investido,
uma taxa de juros mensal a ser aplicada ao capital, e o número de meses que irá durar a aplicação.
Ao final o programa deverá mostrar:
- o valor total acumulado ao final período.
- o valor de juros rendidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL,"");

    float valor, taxa, meses, valorTotal, juros;

    printf("Valor inicial: ");
    scanf("%f", &valor);
    printf("Taxa de juros: ");
    scanf("%f", &taxa);
    printf("Meses: ");
    scanf("%f", &meses);

    valorTotal = (1 + (taxa/100));
    valorTotal = pow(valorTotal, meses);
    valorTotal = valorTotal * valor;
    juros = valorTotal - valor;

    printf("Valor total: R$ %.2f", valorTotal);
    printf("\nJuros rendidos: R$ %.2f", juros);


    return 0;
}
