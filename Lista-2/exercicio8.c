/*Crie uma nova vers�o da calculadora substituindo a instru��o if pelo uso da instru��o switch.
Lembre-se que a switch permite tratar tanto inteiros quanto caracteres.
Logo, fique � vontade para manter a identifica��o da op��o do menu por um caractere ou por um valor inteiro.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int operador;
    float a, b, resultado;
    printf("Operando 1: ");
    scanf("%f", &a);
    printf("Operando 2: ");
    scanf("%f", &b);
    printf("1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\nEscolha a operacao: ");
    scanf("%d", &operador);

    switch(operador){
        case 1:
            resultado = a + b;
            printf("Resultado: %.2f", resultado);
            break;
        case 2:
            resultado = a - b;
            printf("Resultado: %.2f", resultado);
            break;
        case 3:
            resultado = a * b;
            printf("Resultado: %.2f", resultado);
            break;
        case 4:
            resultado = a / b;
            printf("Resultado: %.2f", resultado);
            break;
        default:
            printf("Digite uma opcao valida");
    }

    return 0;
}
