#include <stdio.h>
#include <stdlib.h>

int **produtoMatrizes(int **matriz1, int **matriz2, int linhas1, int colunas1, int linhas2, int colunas2) {
    if (colunas1 != linhas2) {
        return NULL;
    }

    int **matrizProduto = (int **)malloc(linhas1 * sizeof(int *));
    if (matrizProduto == NULL) {
        printf("Erro ao alocar memoria.");
        exit(1);
    }

    for (int i = 0; i < linhas1; i++) {
        matrizProduto[i] = (int *)malloc(colunas2 * sizeof(int));
        if (matrizProduto[i] == NULL) {
            printf("Erro ao alocar memoria.");
            exit(1);
        }
        for (int j = 0; j < colunas2; j++) {
            matrizProduto[i][j] = 0;
            for (int k = 0; k < colunas1; k++) {
                matrizProduto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return matrizProduto;
}

int main() {
    int linhas1, colunas1, linhas2, colunas2;

    printf("Digite o numero de linhas e colunas da primeira matriz: ");
    scanf("%d %d", &linhas1, &colunas1);

    printf("Digite o numero de linhas e colunas da segunda matriz: ");
    scanf("%d %d", &linhas2, &colunas2);

    int **matriz1 = (int **)malloc(linhas1 * sizeof(int *));
    int **matriz2 = (int **)malloc(linhas2 * sizeof(int *));

    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < linhas1; i++) {
        matriz1[i] = (int *)malloc(colunas1 * sizeof(int));
        for (int j = 0; j < colunas1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < linhas2; i++) {
        matriz2[i] = (int *)malloc(colunas2 * sizeof(int));
        for (int j = 0; j < colunas2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    int **matrizProduto = produtoMatrizes(matriz1, matriz2, linhas1, colunas1, linhas2, colunas2);

    if (matrizProduto == NULL) {
        printf("Nao foi possivel realizar o produto das matrizes.\n");
    } else {
        printf("O produto das matrizes:\n");
        for (int i = 0; i < linhas1; i++) {
            for (int j = 0; j < colunas2; j++) {
                printf("%d ", matrizProduto[i][j]);
            }
            printf("\n");
        }
    }

    for (int i = 0; i < linhas1; i++) {
        free(matriz1[i]);
    }
    free(matriz1);

    for (int i = 0; i < linhas2; i++) {
        free(matriz2[i]);
    }
    free(matriz2);

    for (int i = 0; i < linhas1; i++) {
        free(matrizProduto[i]);
    }
    free(matrizProduto);

    return 0;
}