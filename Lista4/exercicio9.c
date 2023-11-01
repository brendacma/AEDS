#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[100][100], B[100][100], C[100][100];
    int m, n, p, q;

    printf("digite as dimensoes da matriz A: ");
    scanf("%d %d", &m, &n);

    printf("digite os elementos da matriz A: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("digite as dimensoes da matriz B (p x q): ");
    scanf("%d %d", &p, &q);

    printf("digite os elementos da matriz B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    if (n != p) {
        printf("as matrizes nao podem ser multiplicadas\n");
        return 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("produto de A x B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}