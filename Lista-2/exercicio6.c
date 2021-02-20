/*Construa um algoritmo que, a partir do peso e altura informados pelo usuário,
calcule e apresente o IMC de uma pessoa e a sua classificação conforme tabela a seguir:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float peso, altura, imc;
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (pow(altura,2));

    printf("IMC: %.2f\n", imc);

    if(imc < 18.5)
        printf("Abaixo do peso");
    else if(imc > 18.6 && imc < 24.9)
        printf("Peso ideal");
    else if(imc > 25 && imc < 29.9)
        printf("Levemente acima do peso");
    else if(imc > 30 && imc < 34.9)
        printf("Obesidade grau I");
    else if(imc > 35 && imc < 39.9)
        printf("Obesidade grau II");
    else if(imc > 40)
        printf("Obesidade grau III");
    return 0;
}
