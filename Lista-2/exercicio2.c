/*Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 4321. Devem ser impressas as seguintes mensagens:
ACESSO PERMITIDO - caso a senha seja válida.
ACESSO NEGADO - caso a senha seja inválida.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int senha;
    printf("Senha: ");
    scanf("%d", &senha);

    if(senha == 4321)
        printf("ACESSO PERMITIDO");
    else
        printf("ACESSO NEGADO");
    return 0;
}
