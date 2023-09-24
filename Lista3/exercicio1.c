//somatorio

#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 0; i <= 1000; i++) {
        soma = soma + i;
    }
    printf("%d", soma);
    return 0;
}