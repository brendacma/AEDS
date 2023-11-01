#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool primo(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    printf("digite um numero natural n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("numero invalido \n");
        return 1;
    }

    printf("%d numeros primos: ", n);

    int numero = 2;
    int contador = 0;

    while (contador < n) {
        if (primo(numero)) {
            printf("%d ", numero);
            contador++;
        }
        numero++;
    }

    printf("\n");

    return 0;
}