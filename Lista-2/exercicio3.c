/*Faça um programa que leia um ponto cartesiano (dois valores numéricos X e Y) e mostre em qual quadrante o ponto se encontra.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y;
    printf("Abscissa: ");
    scanf("%f", &x);
    printf("Ordenada: ");
    scanf("%f", &y);

    if(x > 0 && y > 0)
        printf("Primeiro quadrante");
    else if(x < 0 && y > 0)
        printf("Segundo quadrante");
    else if(x < 0 && y < 0)
        printf("Terceiro quadrante");
    else if(x > 0 && y < 0)
        printf("Quarto quadrante");
    else
        printf("Origem");

    return 0;
}
