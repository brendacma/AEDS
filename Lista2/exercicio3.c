#include <stdio.h>

int main() {
    int numero;
    printf("digite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero %2 == 0) {
        printf("e divisivel por 2\n");
    } 
    if (numero %5 == 0) {
        printf("e divisivel por 5\n");
    }
    if (numero %10 == 0) {
        printf("e divisivel por 10\n");
    } 
    if (numero %2 != 0 && numero %5 != 0 && numero %10 != 0) {
        printf("nao e divisivel.");
    }


    return 0;
}
