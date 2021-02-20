/*Faça um algoritmo que preenche e imprime um vetor de tamanho 10 usando a seguinte regra:
- Se a posição do vetor é múltipla de 3, deve-se armazenar 1. Caso contrário, armazene 0.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];

    for(int i = 0; i <= 9; i++){
        if(i % 3 == 0)
            vetor[i] = 1;
        else
            vetor[i] = 0;
    }

    for(int i = 0; i <= 9; i++)
        printf("%d ", vetor[i]);


    return 0;
}
