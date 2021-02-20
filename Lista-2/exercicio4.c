/*Crie um programa que leia um caracter (tipo char) e mostre se:
- É uma letra do alfabeto maiúscula
- É uma letra do alfabeto minúscula
- É um número inteiro entre 0 e 9.
- Caracter diferente das opções anteriores.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char a;
    printf("Digite um caracter: ");
    scanf("%c", &a);

    if(isupper(a))
        printf("Caracter maiusculo");
    else if(islower(a))
        printf("Caracter minusculo");
    else if(isdigit(a))
        printf("Caracter numerico");
    else
        printf("O caracter nao e maiusculo, minusculo ou numerico");
    return 0;
}
