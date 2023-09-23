//escreva um programa em C que leia um número inteiro entre 1 e 7 e escreva o dia da semana correspondente. Caso o usuário digite um número fora desse intervalo, deverá aparecer uma mensagem informando que não existe dia da semana com esse número.

#include <stdio.h>

int main () {

    int numero;
    printf("digite um numero entre 1 e 7: ");
    scanf("%d", &numero);
    switch (numero) {
    case 1:
        printf("segunda-feira");
        break;
    case 2:
        printf("terça-feira");
        break;
    case 3:
        printf("quarta-feira");
        break;
    case 4:
        printf("quinta-feira");
        break;
    case 5:
        printf("sexta-feira");
        break;
    case 6:
        printf("sabado");
        break;
    case 7:
        printf("domingo");
        break;
    default:
        printf("nao existe dia da semana correspondendo a este numero");
        break;
    }
    return 0;
}