/*Escreva um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha v�lida � o n�mero 4321. Devem ser impressas as seguintes mensagens:
ACESSO PERMITIDO - caso a senha seja v�lida.
ACESSO NEGADO - caso a senha seja inv�lida.*/

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
