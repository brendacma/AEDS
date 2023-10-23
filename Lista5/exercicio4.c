#include <stdlib.h>
#include <stdio.h>

void somavet(int v1[], int v2[], int somaV[], int tam) {
    for(int i = 0; i < tam; i++) {
        somaV[i] = v1[i] + v2[i];
    }
}

int main() {
    int tam;
    printf("quantidade de termos: ");
    scanf("%i", &tam);

    int v1[tam], v2[tam], somaV[tam];

    printf("vetor 1:\n");
    for(int i = 0; i < tam; i++) {
        scanf("%i", &v1[i]);
    }

    printf("vetor 2:\n");
    for(int i = 0; i < tam; i++) {
        scanf("%i", &v2[i]);
    }

    somavet(v1, v2, somaV, tam);

    printf("a soma dos vetores: ");
    for (int i = 0; i < tam; i++) {
        printf("%i ", somaV[i]);
    }
    printf("\n");

    return 0;
}
