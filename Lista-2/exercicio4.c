/*Crie um programa que leia um caracter (tipo char) e mostre se:
- � uma letra do alfabeto mai�scula
- � uma letra do alfabeto min�scula
- � um n�mero inteiro entre 0 e 9.
- Caracter diferente das op��es anteriores.*/

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
