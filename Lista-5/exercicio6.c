/*Faça um algoritmo que armazena em um vetor n números digitados pelo usuário. Posteriormente, mostre os dados do vetor em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *vetor, aux = 0;

    printf("Informe o numero de elementos do vetor: ");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        printf("Digite o valor para a posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nEstes sao os valores lidos em ordem decrescente:\n");
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++){
            if(vetor[i] < vetor[j]){
                aux += vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux ;
            }
            printf("%d ", vetor[i]);
        }


return 0;
}
