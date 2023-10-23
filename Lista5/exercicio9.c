#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void Ifibonacci(int n) {
    for (int i = 0; i < n; i++) {
        printf("%i ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int termos;
    printf("digite o numero de termos: ");
    scanf("%i", &termos);

    Ifibonacci(termos);

    return 0;
}