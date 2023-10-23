#include <stdio.h>
#include <stdlib.h>

int* somaVetores(int vetor1[], int vetor2[], int tamanho) {
    int *vetorSoma = (int *)malloc(tamanho * sizeof(int));

    if (vetorSoma == NULL) {
        printf("erro ao alocar memoria.");
        return 0;
    }

    for (int i = 0; i < tamanho; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }

    return vetorSoma;
}

int main() {
    int tamanho;
    printf("digite o tamanho dos vetores: ");
    scanf("%i", &tamanho);

    int *vetor1 = (int *)malloc(tamanho * sizeof(int));
    int *vetor2 = (int *)malloc(tamanho * sizeof(int));

    printf("digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %i: ", i + 1);
        scanf("%i", &vetor1[i]);
    }

    printf("digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %i: ", i + 1);
        scanf("%i", &vetor2[i]);
    }

    int *vetorSoma = somaVetores(vetor1, vetor2, tamanho);

    printf("A soma dos vetores: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%i ", vetorSoma[i]);
    }
    printf("\n");

    free(vetor1);
    free(vetor2);
    free(vetorSoma);

    return 0;
}