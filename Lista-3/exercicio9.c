/*Construa um algoritmo que gere 100 números aleatórios entre 1 e 100,
mostre a soma e a média dos números ímpares gerados. Use a função rand da biblitoeca <stdlib.h> para gerar inteiros aleatoriamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, aux = 0;
    float soma = 0, media;
    srand(time(0));

    for(int i = 0; i < 100; i++){
        num = 1 + (rand() % 100);
        if(num % 2 != 0){
            soma += num;
            aux++;
        }
        printf("%d ", num);
    }
    media = soma / aux;
    printf("\nSoma dos numeros impares = %.f", soma);
    printf("\nMedia dos numeros impares = %.2f", media);
    return 0;
}
