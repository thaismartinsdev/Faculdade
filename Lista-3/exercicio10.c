/*Fa�a um algoritmo que encontre o menor n�mero inteiro e positivo N que satisfa�a, simultaneamente, �s rela��es:
� Resto da divis�o de N por 3 = 2
� Resto da divis�o de N por 5 = 3
� Resto da divis�o de N por 9 = 5*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1, cont = 0;

    while(cont != 753){

        if(num % 3 == 2 && num % 5 == 3 && num % 9 == 5)
            cont = 753;
        else num++;
    }

    printf("%d e o menor numero que satisfaz, simultaneamente, as relacoes:\nResto da divisao por 3 = 2\nResto da divisao de por 5 = 3\nResto da divisao por 9 = 5", num);
    return 0;
}
