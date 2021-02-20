#include <stdio.h>
#include <stdlib.h>

// definindo struct
struct Pessoa{
     int idade;
     char nome[30];
};

// inverte o nome
void inverso(char nome[]){
    if (nome[0] != '\0'){
        inverso(&nome[1]);
        printf("%c", nome[0]);
    }
}

int main(){
    // declarando struct
    struct Pessoa individuo;
    // recebe idade
    printf("Digite a idade: ");
    scanf("%d", &individuo.idade);
    // recebe nome
    printf("Digite a o nome: ");
    scanf("%s", &individuo.nome);
    fflush(stdin);
    // mostra dados
    printf("\nIdade: %d", individuo.idade);
    printf("\nNome: %s", individuo.nome);
    printf("\nInverso do nome: ");
    // chama procedimento "inverso"
    inverso(individuo.nome);

    return 0;
}
