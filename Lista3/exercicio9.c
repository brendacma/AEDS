//escreva um programa em C que leia um número natural e determine se esse número é primo ou não

#include <stdio.h>
    int main() {

    int n, primo = 1;
    printf("Digite um numero natural:\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf(" Nao pode ser escrito um numero negativo ou zero");
    } else {

        for (int i = 0; i < n / 2; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
            
        }
        if (primo == 1) {
            printf("O numero %d e primo.\n", n);
        } else {
            printf("O numero %d não e primo.\n", n);
        }
    }
         return 0;
}