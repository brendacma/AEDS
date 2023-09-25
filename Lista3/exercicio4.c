//escreva um programa em C que imprima a sequência de Fibonacci, sendo
//que a sequência começa com os valores 0 e 1. Peça ao usuário para digitar o número de termos da sequência

#include <stdio.h>

int main() {

    int i, n;
    int a = 0, b = 1, c;

    printf("Digite o numero de termos para a sequencia de fibonacci:\n");
    scanf("%d", &n);

    if (n >= 1) {
        printf("%2.f", a);
    }

    for (i = 1; i < n; i++) {
        printf(", %.2f", a + b);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}