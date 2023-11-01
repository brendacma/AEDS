#include <stdio.h>
#include <stdlib.h>

int binomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}

int main() {
    int n;

    printf("Digite o numero de linhas do Triangulo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor invalido\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", binomial(i, j));
        }
        printf("\n");
    }

    return 0;
}