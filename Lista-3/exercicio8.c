/*O Matemático Italiano Leonardo de Pisa nasceu na Itália por volta de 1175 e ficou conhecido como
Fibonacci (Filho de Bonaccio). A partir da publicação do livro Liber Abacci, (livro do Ábaco) em 1202,
Fibonacci tornou-se famoso, principalmente devido aos inúmeros temas desenvolvidos nesse trabalho.
Nele aparecem estudos sobre o clássico problema envolvendo populações de coelhos, o qual foi a
base para o estabelecimento da célebre sequência (números) de Fibonacci, como segue:
F = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377 ...
Nesta sequência, a partir do terceiro elemento, os elementos são sempre calculados pela soma dos seus dois antecessores.
Por exemplo: o elemento 5 é igual à soma dos dois anteriores (2 + 3).
Construa um algoritmo que recebe um número L (maior que zero) informado pelo usuário e imprime os L primeiros elementos da
série de Fibonacci. Exemplo: se o usuário digitar L = 8, então o seu algoritmo deverá imprimir os 8 primeiros elementos (0, 1, 1, 2, 3, 5, 8, 13).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, fib, a = 0, b = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n == 1)
        printf("Sequencia de Fibonacci: %d", a);
    else if(n == 2)
        printf("Sequencia de Fibonacci: %d %d ", a, b);
    else{
        printf("Sequencia de Fibonacci: %d %d ", a, b);

        for(i = 3; i <= n; i++){
            fib = a + b;
            a = b;
            b = fib;
            printf("%d ", fib);
        }
    }
    return 0;
}
