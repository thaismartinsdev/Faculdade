/*Faça um programa que calcule a área total (m2) de uma casa com 3 cômodos.
O usuário deve inserir a largura e comprimento de cada um dos cômodos, calcular a área individual
de cada um e por fim exibir a área total da casa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    float lar1, com1, lar2, com2, lar3, com3, area1, area2, area3, areaTotal;

    //Cômodo 1
    printf("Cômodo 1\n");
    printf("Largura: ");
    scanf("%f", &lar1);
    printf("Comprimento: ");
    scanf("%f", &com1);
    area1 = lar1 * com1;

    //Cômodo 2
    printf("\nCômodo 2\n");
    printf("Largura: ");
    scanf("%f", &lar2);
    printf("Comprimento: ");
    scanf("%f", &com2);
    area2 = lar2 * com2;

    //Cômodo 3
    printf("\nCômodo 3\n");
    printf("Largura: ");
    scanf("%f", &lar3);
    printf("Comprimento: ");
    scanf("%f", &com3);
    area3 = lar3 * com3;

    //Área total
    areaTotal = area1 + area2 + area3;
    printf("\nA área total é: %.2f m²", areaTotal);

    return 0;
}
