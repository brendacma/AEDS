#include <stdio.h>
#include <math.h>

#define MAX_DIM 10

void imprimirMatriz(int matriz[MAX_DIM][MAX_DIM], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int calcularDeterminante(int matriz[MAX_DIM][MAX_DIM], int n) {
    if (n == 1) {
        return matriz[0][0];
    } else if (n == 2) {
        return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    } else {
        int det = 0;
        for (int coluna = 0; coluna < n; coluna++) {
            int submatriz[MAX_DIM][MAX_DIM];
            int submatriz_n = 0;
            for (int i = 1; i < n; i++) {
                int submatriz_m = 0;
                for (int j = 0; j < n; j++) {
                    if (j != coluna) {
                        submatriz[submatriz_n][submatriz_m] = matriz[i][j];
                        submatriz_m++;
                    }
                }
                submatriz_n++;
            }
            det += (coluna % 2 == 0 ? 1 : -1) * matriz[0][coluna] * calcularDeterminante(submatriz, n - 1);
        }
        return det;
    }
}

int main() {
    int matriz[MAX_DIM][MAX_DIM];
    int n;

    printf("Digite a dimensao da matriz quadrada: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_DIM) {
        printf("A dimensao da matriz nao e valida.\n");
        return 1;
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz de entrada:\n");
    imprimirMatriz(matriz, n);

    int determinante = calcularDeterminante(matriz, n);
    printf("Determinante: %d\n", determinante);

    printf("Diagonal Principal:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}