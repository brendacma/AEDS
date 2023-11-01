#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int valor;
    int contador = 0;
    int posicoes[10];

    for (int i = 0; i < 10; i++) {
        printf("digite o %i numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("digite um novo valor: ");
    scanf("%i", &valor);

    for(int i=0; i<10; i++){
        if(vetor[i] == valor){
            posicoes[contador] = i;
            contador++;
        }
    }

    if (contador == 0) {
        printf("o valor %i nao foi encontrado no vetor.\n", valor);
    } else {
        printf("o valor %i aparece %i vezes no vetor nas posicoes:\n", valor, contador);
        for (int i = 0; i < contador; i++) {
            printf("posicao %i\n", posicoes[i] + 1);
        }
    }

    return 0;
}