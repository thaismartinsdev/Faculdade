/*Construa um algoritmo que mostre os n�meros pares de 100 a 110. Utilize estrutura de repeti��o com teste no in�cio (while).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 100;
    while(x <= 110){
        if(x % 2 == 0)
            printf("%d ", x);
        x++;
    }

    return 0;
}
