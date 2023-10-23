#include <stdlib.h>
#include <stdio.h>

void triangulo(int n) {
    if (n == 0) {
        return;
    }
    triangulo(n - 1);
    for (int i = 1; i <= n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%i", &numero);

    triangulo(numero);

    return 0;
}
