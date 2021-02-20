/*Crie um programa que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo é acutângulo, retângulo ou obtusângulo.
Sendo que:
− Triângulo Retângulo: possui um ângulo reto (igual a 90)
− Triângulo Obtusângulo: possui um ângulo obtuso (maior que 90)
− Triângulo Acutângulo: possui três ângulos agudos (menor que 90)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c;
    printf("Angulo 1: ");
    scanf("%f", &a);
    printf("Angulo 2: ");
    scanf("%f", &b);
    printf("Angulo 3: ");
    scanf("%f", &c);

    if(a + b + c == 180){
        if(a == 90 || b == 90 || c == 90)
            printf("Triangulo retangulo");
        else if(a > 90 || b > 90 || c > 90)
            printf("Triangulo obtusangulo");
        else
            printf("Triangulo acutangulo");
    } else
        printf("Digite um triangulo valido");
    return 0;
}
