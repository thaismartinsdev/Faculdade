#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    /*Crie um algoritmo que leia dois valores e depois
    crie um menu (usando switch case) de quatro op��es:
    1- somar, 2- subtrair, 3- dividir, 4- multiplicar.
    depois mostre o resultado utilizando a opera��o escolhida*/

    //Declara��o de vari�veis
    float valor1, valor2, resultado;
    int operacao;

    //Leitura de dados
    printf("1- SOMAR \n2- SUBTRAIR \n3- DIVIDIR \n4- MULTIPLICAR \nEscolha a opera��o: ");
    scanf("%d", &operacao);
    if(operacao < 1 || operacao > 4)
        printf("Op��o inv�lida");
    else{
        printf("Digite o primeiro valor: ");
        scanf("%f", &valor1);
        printf("Digite o segundo valor: ");
        scanf("%f", &valor2);

        //Opera��es
        switch(operacao){
            case 1:
                resultado = valor1 + valor2;
                printf("O resultado �: %.2f", resultado);
            break;

            case 2:
                resultado = valor1 - valor2;
                printf("O resultado �: %.2f", resultado);
            break;

            case 3:
                resultado = valor1 / valor2;
                printf("O resultado �: %.2f", resultado);
            break;

            case 4:
                resultado = valor1 * valor2;
                printf("O resultado �: %.2f", resultado);
            break;

            default:
                printf("Op��o inv�lida");
        }
    }

    return 0;
}
