/*Fa�a um algoritmo que calcule a o resultado de a x b sem utilizar operador de multiplica��o.
Deve-se dever� utilizar repeti��o. Dica: 3 x 4 = 3 + 3 + 3 + 3 = 12*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, resultado = 0;
    printf("Digite o valor de \"a\": ");
    scanf("%d", &a);
    printf("Digite o valor de \"b\": ");
    scanf("%d", &b);


    while(b > 0){
        resultado += a;
        b--;
    }
    printf("Resultado = %d", resultado);



    return 0;
}
