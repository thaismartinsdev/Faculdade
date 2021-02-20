#include <stdio.h>
#include <stdlib.h>

float somar(float a, float b){
        float soma;
        soma = a + b;
        return soma;
}

float subtrair(float a, float b){
        float diferenca;
        diferenca = a - b;
        return diferenca;
}

float multiplicar(float a, float b){
        float produto;
        produto = a * b;
        return produto;
}

float dividir(float a, float b){
        float quociente;
        quociente = a / b;
        return quociente;
}

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
            resultado = somar(a, b);
            printf("Resultado: %.2f", resultado);
            break;
        case 2:
            resultado = subtrair(a, b);
            printf("Resultado: %.2f", resultado);
            break;
        case 3:
            resultado = multiplicar(a, b);
            printf("Resultado: %.2f", resultado);
            break;
        case 4:
            resultado = dividir(a, b);
            printf("Resultado: %.2f", resultado);
            break;
        default:
            printf("Digite uma opcao valida");
    }

    return 0;
}
