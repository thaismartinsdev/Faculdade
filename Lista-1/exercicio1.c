/*Fa�a um programa que calcule a �rea total (m2) de uma casa com 3 c�modos.
O usu�rio deve inserir a largura e comprimento de cada um dos c�modos, calcular a �rea individual
de cada um e por fim exibir a �rea total da casa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    float lar1, com1, lar2, com2, lar3, com3, area1, area2, area3, areaTotal;

    //C�modo 1
    printf("C�modo 1\n");
    printf("Largura: ");
    scanf("%f", &lar1);
    printf("Comprimento: ");
    scanf("%f", &com1);
    area1 = lar1 * com1;

    //C�modo 2
    printf("\nC�modo 2\n");
    printf("Largura: ");
    scanf("%f", &lar2);
    printf("Comprimento: ");
    scanf("%f", &com2);
    area2 = lar2 * com2;

    //C�modo 3
    printf("\nC�modo 3\n");
    printf("Largura: ");
    scanf("%f", &lar3);
    printf("Comprimento: ");
    scanf("%f", &com3);
    area3 = lar3 * com3;

    //�rea total
    areaTotal = area1 + area2 + area3;
    printf("\nA �rea total �: %.2f m�", areaTotal);

    return 0;
}
