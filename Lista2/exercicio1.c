#include <stdio.h>

int main() {
    int numero;
    //pede pro usuario digitar o numero

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);
    //identifica se o numero é par ou nao
    if (numero %2 == 0) {
        printf("o numero %d é par", numero);
    }else{
        printf("o numero %d é impar", numero);
    }

return 0;

}