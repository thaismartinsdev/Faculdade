/*Faça um programa que lê 10 números informados pelo usuário e armazena em um vetor.
Imprima os elementos do vetor cujo valor seja igual ao índice da posição.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];

    for(int i = 0; i <= 9; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i >= 9; i++)
        if(vetor[i] == i)
            printf("%d ", vetor[i]);

    return 0;
}
