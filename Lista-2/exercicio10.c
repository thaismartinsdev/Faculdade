/*Construa um algoritmo que leia dois pontos cartesianos (x1, y1, x2, y2) e calcule e mostre a distância entre esses dois pontos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, distancia;
    printf("Ponto 1: ");
    scanf("%f%f", &x1, &y1);
    printf("Ponto 2: ");
    scanf("%f%f", &x2, &y2);
    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("Distancia: %.2f unidades", distancia);

    return 0;
}
