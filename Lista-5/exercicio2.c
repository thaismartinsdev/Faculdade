/*Fa�a um programa que l� 10 n�meros informados pelo usu�rio e armazena em um vetor.
Imprima os elementos do vetor cujo valor seja igual ao �ndice da posi��o.*/

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
