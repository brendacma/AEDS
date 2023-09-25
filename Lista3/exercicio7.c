//escreva um programa em C que leia números inteiros, que variam de 1 a 100,
//e calcule a porcentagem de valores lidos entre os intervalos [1..25], [26..50], [51..75] e
//[76..100]. O programa deve parar quando o valor zero for lido. Faça a validação para
//que nenhum valor menor que zero ou maior que 100 seja admitido

#include <stdio.h>

int main() {
  
    int num, contador[4] = {0};
    float total = 0;

    while (1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);

        if (num == 0)
            break;

        if (num <= 1 || num >= 100) {
            printf("Numero invalido. Digite um numero entre 1 e 100.\n");
            continue;
        }

        total++;

        if (num >= 1 && num <= 25) {
            contador[0]++;
        } else if (num >= 26 && num <= 50) {
            contador[1]++;
        } else if (num >= 51 && num <= 75) {
            contador[2]++;
        } else if (num >= 76 && num <= 100) {
            contador[3]++;
        }
    }

    printf("\nValores:\n");
    printf("intervalo [1->25]: %.2f%%\n", (contador[0] / total) * 100);
    printf("intervalo [26->50]: %.2f%%\n", (contador[1] / total) * 100);
    printf("intervalo [51->75]: %.2f%%\n", (contador[2] / total) * 100);
    printf("intervalo [76->100]: %.2f%%\n", (contador[3] / total) * 100);

}