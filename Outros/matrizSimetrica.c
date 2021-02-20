#include <stdio.h>
#include <stdlib.h>

int verifica(int simetrica[10][10], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(simetrica[i][j] == simetrica[j][i])
                return 1;
        }
    }
    return 0;
}

int main(){
    int i, j, n, matriz[10][10];
    printf("Digite o numero de linhas/colunas: ");
    scanf("%d", &n);
    if (n < 10){
        printf("Insira os valores para a matriz:\n");
        for (i = 0; i < n; i++){
            for(j = 0; j < n; j++)
                scanf("%d", &matriz[i][j]);
        }
    }
    if (verifica(matriz, n))
        printf("Simetrica");
    else
        printf("Nao e simetrica");
    return 0;
}
