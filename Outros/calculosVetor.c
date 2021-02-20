#include <stdio.h>

int main(){
    int vetor[5], soma = 0, cont = 0, multi = 1;
    float media;
    for (int i=0; i<5; i++){
        printf("Insira um numero: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
        multi *= vetor[i];
        cont++;
    }
    printf("Os numeros digitados foram: ");
    for (int i=0; i<5; i++){
        printf("%d ", vetor[i]);
    }
    printf("\nA soma dos numeros e: %d", soma);
    media = soma/(float)cont;
    printf("\nA media dos numeros e: %.2f", media);
    printf("\nA multiplicacao dos numeros e: %d", multi);
    return 0;
}
