/*Crie uma nova versão para o programa anterior, de forma que o limite inferior e limite superior sejam valores lidos.
Utilize a estrutura de repetição FOR.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int maior, menor;
    printf("Digite o limite superior: ");
    scanf("%d", &maior);
    printf("Digite o limite inferior: ");
    scanf("%d", &menor);

    if(maior < menor)
        printf("\nDigite valores validos");
    else
        for(int x = maior; x >= menor; x--)
            printf("%d ", x);

    return 0;
}
