/*Crie um algoritmo que leia um número real (float) e mostre sua parte inteira e sua parte fracionária.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    printf("Parte inteira : %d",(int)numero);
   	printf("\nParte fracionaria: %.3f", numero - ((int)numero));

   	return 0;
}
