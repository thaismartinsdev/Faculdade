/*Faça um algoritmo que leia um conjunto de número e imprima a quantidade de números pares e quantidades de números ímpares.
Caso o usuário digite 0, então o programa é finalizado e mostrar os números lidos. Ex. 1, 2, 3, 3, 4, 0 | pares = 2 | ímpares = 3.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 7, par = 0, impar = 0, aux = 0, vetor[30], i;
    do{
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num != 0){
            if(num % 2 == 0)
                par++;
            else
                impar++;
        }
        aux++;

        i = aux - 1;

        vetor[i] = num;
    } while(num != 0);

    printf("Numeros: ");
    for(i = 0; i < aux; i++)
        printf("%d ", vetor[i]);

    printf("\nPares = %d", par);
    printf("\nImpares = %d", impar);

    return 0;
}
