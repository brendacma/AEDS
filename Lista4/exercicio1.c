#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    for(int i=0;i<10;i++){
        printf("escreva o valor do vetor %i\n", i+1);
        scanf("%i", &vetor[i]);
    }

    int maior = 0;
    for(int i=0; i<10; i++){
        if(vetor[i] > maior){
            maior=vetor[i];
        }
    }
    printf("O maior numero eh: %i\n", maior);
    return 0;
}