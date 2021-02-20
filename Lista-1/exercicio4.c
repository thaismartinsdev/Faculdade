/*Construa um algoritmo que converta grau Celsius (informado pelo usuário) em Farenheit.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL,"");

    float celsius, farenheit;

    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);

    farenheit = (celsius * 1.8) + 32;

    printf("Temperatura em Farenheit: %.2f", farenheit);

    return 0;
}
