#include <stdlib.h>
#include <stdio.h>

void TrianguloDecrescente(int n) {
    if (n == 0) {
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
    TrianguloDecrescente(n - 1);
}

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    TrianguloDecrescente(numero);

    return 0;
}