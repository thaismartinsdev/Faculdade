/*Faça um programa que preenche um vetor de 10 posições com números aleatórios.
Use a função rand da biblitoeca <stdlib.h> preencher o vetor com números inteiros gerados aleatoriamente entre 1 e 15.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vetor[10];
    srand(time(0));

    for(int i = 0; i <= 9; i++)
        vetor[i] = 1 + rand() % 15;

    for(int i = 0; i <= 9; i++)
        printf("%d ", vetor[i]);


    return 0;
}
