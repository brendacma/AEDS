#include <stdio.h>
#include <stdlib.h>

void org(int vetor[], int n){
    int aux;
    for(int i=1;i<n;i++){
        for(int j=0; j<n-1 ;j++){
            if(vetor[j] > vetor[j+1]){
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
}

int main()
{

    int vetor[10];

    for(int i=0; i<10; i++){
        scanf("%i", &vetor[i]);
    }

    org(vetor,10);
    printf("vetor organizado");
    for(int i=0; i<10;i++){
        printf("%5i", vetor[i]);
    }


    return 0;
}