#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    /*Crie um algoritmo que leia dois valores e depois
    crie um menu (usando switch case) de quatro opções:
    1- somar, 2- subtrair, 3- dividir, 4- multiplicar.
    depois mostre o resultado utilizando a operação escolhida*/

    //Declaração de variáveis
    float valor1, valor2, resultado;
    int operacao;

    //Leitura de dados
    printf("1- SOMAR \n2- SUBTRAIR \n3- DIVIDIR \n4- MULTIPLICAR \nEscolha a operação: ");
    scanf("%d", &operacao);
    if(operacao < 1 || operacao > 4)
        printf("Opção inválida");
    else{
        printf("Digite o primeiro valor: ");
        scanf("%f", &valor1);
        printf("Digite o segundo valor: ");
        scanf("%f", &valor2);

        //Operações
        switch(operacao){
            case 1:
                resultado = valor1 + valor2;
                printf("O resultado é: %.2f", resultado);
            break;

            case 2:
                resultado = valor1 - valor2;
                printf("O resultado é: %.2f", resultado);
            break;

            case 3:
                resultado = valor1 / valor2;
                printf("O resultado é: %.2f", resultado);
            break;

            case 4:
                resultado = valor1 * valor2;
                printf("O resultado é: %.2f", resultado);
            break;

            default:
                printf("Opção inválida");
        }
    }

    return 0;
}
