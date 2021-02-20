/*O Matem�tico Italiano Leonardo de Pisa nasceu na It�lia por volta de 1175 e ficou conhecido como
Fibonacci (Filho de Bonaccio). A partir da publica��o do livro Liber Abacci, (livro do �baco) em 1202,
Fibonacci tornou-se famoso, principalmente devido aos in�meros temas desenvolvidos nesse trabalho.
Nele aparecem estudos sobre o cl�ssico problema envolvendo popula��es de coelhos, o qual foi a
base para o estabelecimento da c�lebre sequ�ncia (n�meros) de Fibonacci, como segue:
F = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377 ...
Nesta sequ�ncia, a partir do terceiro elemento, os elementos s�o sempre calculados pela soma dos seus dois antecessores.
Por exemplo: o elemento 5 � igual � soma dos dois anteriores (2 + 3).
Construa um algoritmo que recebe um n�mero L (maior que zero) informado pelo usu�rio e imprime os L primeiros elementos da
s�rie de Fibonacci. Exemplo: se o usu�rio digitar L = 8, ent�o o seu algoritmo dever� imprimir os 8 primeiros elementos (0, 1, 1, 2, 3, 5, 8, 13).*/

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
