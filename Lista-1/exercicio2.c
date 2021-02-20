/*Faça um algoritmo que solicita a altura e peso de uma pessoa, calcule e mostre seu Índice de Massa Corporal (IMC).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL,"");

    float massa, altura, imc;

    printf("Peso: ");
    scanf("%f", &massa);
    printf("Altura: ");
    scanf("%f", &altura);

    imc = massa / (pow(altura,2));

    printf("IMC: %.2f", imc);

    return 0;
}
