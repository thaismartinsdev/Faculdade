/*Faça um programa que calcule a média de consumo de combustível de um veículo.
O usuário deve informar o KM inicial (ex. 13.000 km), o KM final (ex. 15.000 km)
e quantos litros foram gastos no percurso.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float kmInicial, kmFinal, media, combustivel;

    printf("Informe KM inicial: ");
    scanf("%f", &kmInicial);
    printf("Informe KM final: ");
    scanf("%f", &kmFinal);
    printf("Informe a quantidade de combustível gasta: ");
    scanf("%f", &combustivel);

    media = (kmFinal - kmInicial)/combustivel;

    printf("A média de consumo de combustível é: %.2f km/L", media);

    return 0;
}
