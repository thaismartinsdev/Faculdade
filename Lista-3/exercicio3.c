/*Construa um programa que escreva na tela do monitor de vídeo os números inteiros de 70 até 40 (ordem decrescente).
Utilize estrutura de repetição com teste no final (do-while).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 70;
    do{
        printf("%d ", x);
        x--;
    } while(x >= 40);

    return 0;
}
