/*Crie uma função que recebe três números e retorne o elemento do meio.*/

#include <stdio.h>
#include <stdlib.h>

int verificaMeio(int a, int b, int c){
    int meio;
    if ((a > b && b > c) || (c > b && b > a))
        meio = b;
    else if ((a > c && c > b) || (b > c && c > a))
        meio = c;
    else if ((c > a && a > b) || (b > a && a > c))
        meio = a;
    return meio;
}

int main(){
    int a, b, c, meio;
    printf("Informe tres valore para verificar: ");
    scanf("%d%d%d", &a, &b, &c);

    meio = verificaMeio(a, b, c);

    printf("O valor do meio e: %d", meio);

    return 0;
}
