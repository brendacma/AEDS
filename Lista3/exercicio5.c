//escreva um programa que leia dois números inteiros e calcule o mínimo múltiplo comum entre eles

#include <stdio.h>
 
 int main() {
    int n1,n2, maior;

    printf("digite o primeiro numero inteiro: \n");
    scanf("%d", &n1);
    printf("digite o segundo numero  inteiro: \n");
    scanf("%d", &n2);

    if (n1 > n2) {
        maior = n1;
    }else{
        maior = n2;
    }

    while (1) {
        if (maior % n1 == 0 && maior % n2 == 0)
        {
            printf("O MMC entre %d e %d e:  %d\n", n1, n2, maior);
            break;
        }
        maior++;
    }
    return 0;
 }