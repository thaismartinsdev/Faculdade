/*Construa um programa que escreva na tela do monitor de v�deo os n�meros inteiros de 70 at� 40 (ordem decrescente).
Utilize estrutura de repeti��o com teste no in�cio (while). Mostre o valor da soma dos n�meros.*/

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
