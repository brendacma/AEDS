#include <stdlib.h>
#include <stdio.h>

int binomial(int n, int x) {
    if (x == 0 || x == n) {
        return 1;
    } else {
        return binomial(n - 1, x - 1) + binomial(n - 1, x);
    }
}

void triangulo(int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%i ", binomial(i, j));
        }
        printf("\n");
    }
}

int main() {
    int linhas;
    printf("digite o numero de linhas: ");
    scanf("%i", &linhas);

    triangulo(linhas);

    return 0;
}