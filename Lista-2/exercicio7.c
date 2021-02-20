/*Calculadora com as quatro operações aritméticas básicas.
Oferecer um menu ao usuário com as operações. Ler os dois operandos. Calcular e escrever o resultado.*/

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

    if(operador == 1){
        resultado = a + b;
        printf("Resultado: %.2f", resultado);
    } else if(operador == 2){
        resultado = a - b;
        printf("Resultado: %.2f", resultado);
    } else if(operador == 3){
        resultado = a * b;
        printf("Resultado: %.2f", resultado);
    } else if(operador == 4){
        resultado = a / b;
        printf("Resultado: %.2f", resultado);
    } else
        printf("Digite uma opcao valida");

    return 0;
}
