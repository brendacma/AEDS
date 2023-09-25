//escreva um programa em C que leia números inteiros até que o usuário digite o número zero, 
//calcule a média destes números, exceto o valor zero

#include <stdio.h>

int main () {
    int n, soma=0, digitados;
    printf("digite numeros inteiros e, para finalizar, digite ZERO (0): \n" );
    
    do {                 // leia os numeros digitados...
        scanf("%d", &n);
        if (n !=0) {
            soma += n;
            digitados++;
        }
    } while (n !=0); //... enquanto eles forem diferente de zero 

    if (digitados > 0) {
        double media = (double)soma/digitados;
        printf("a media dos numeros e: %2lf\n", media);
    } else {
        printf("nenhum numero diferente de zero foi digitado.\n");
    }
    return 0;
}