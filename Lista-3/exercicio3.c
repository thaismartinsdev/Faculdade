/*Construa um programa que escreva na tela do monitor de v�deo os n�meros inteiros de 70 at� 40 (ordem decrescente).
Utilize estrutura de repeti��o com teste no final (do-while).*/

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
