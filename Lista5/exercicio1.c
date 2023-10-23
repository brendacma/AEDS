#include <stdlib.h>
#include <stdio.h>

int verifica(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;
    printf("Digite um nmero: ");
    scanf("%i", &numero);

    if (verifica(numero) == 1) {
        printf("%i e um numero par.\n", numero);
    } else {
        printf("%i e um numero impar.\n", numero);
    }

    return 0;
}