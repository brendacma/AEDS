#include <stdlib.h>
#include <stdio.h>

void fibonacci(int n) {
    int primeiro = 0, segundo = 1, proximo;

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%i ", proximo);
    }
    printf("\n");
}

int main() {
    int n;
    printf("digite o numero de termos: ");
    scanf("%i", &n);

    fibonacci(n);

    return 0;
}