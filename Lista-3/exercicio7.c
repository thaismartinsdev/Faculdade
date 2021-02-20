/*Faça um algoritmo que calcule o fatorial de um número informado pelo usuário.
Ex. 5! = 5x4x3x2x1 = 120*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int fat, num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    for(fat = 1; num > 1; num--)
        fat *= num;
    printf("Fatorial: %d", fat);

    return 0;
}
