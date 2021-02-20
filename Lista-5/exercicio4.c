/*Construa um algoritmo que gere 20 temperaturas aleatórias entre 10 e 38 C e armazene em um vetor.
Imprima a maior, a menor e a temperatura média. Mostre também o número de vezes que a
temperatura foi abaixo da média. Para cada uma das informações solicitadas (maior, menor, média)
você deverá implementar uma função que recebe o vetor e retorna o valor esperado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maiorTemperatura(int i, int *vetor){
    int maior = 0;
    for(i = 0; i =)
    if(vetor[i] > maior)
        maior = vetor[i];

    return maior;
}

float calculaMedia(int cont, float soma){
    float media;
    media = soma/cont;

    return media;
}

int main(){
    int vetor[20], cont = 0, maior;
    float soma = 0, media;
    srand(time(0));

    for(int i = 0; i < 5; i++){
        vetor[i] = 10 + rand() % 28;
        soma += vetor[i];
        cont++;
        media = calculaMedia(cont, soma);
        maior = maiorTemperatura(i, vetor);
    }
    for(int i = 0; i < 5; i++)
        printf("%d ", vetor[i]);

    printf("\nMedia = %.2f", media);
    printf("\nMaior = %d", maior);

    return 0;
}
