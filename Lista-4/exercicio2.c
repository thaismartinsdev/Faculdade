/*Crie uma função que recebe 5 números como parâmetro de entrada, calcule e retorne e a média dos números.*/

#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float a, float b, float c, float d, float e){
    float media;
    media = (a + b + c + d + e)/5;

    return media;
}

int main(){
    float a, b, c, d, e, media;
    printf("Informe cinco numeros para calcular: ");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    media = calculaMedia(a, b, c, d, e);

    printf("A media dos numeros e: %.2f", media);
    return 0;
}
