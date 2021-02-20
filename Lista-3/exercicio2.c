/*Construa um programa que escreva na tela do monitor de vídeo os números inteiros de 70 até 40 (ordem decrescente).
Utilize estrutura de repetição com teste no início (while). Mostre o valor da soma dos números.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 70, soma = 0;
    while(x >= 40){
        printf("%d ", x);
        soma += x;
        x--;
    }
    printf("\nSoma = %d", soma);

    return 0;
}
