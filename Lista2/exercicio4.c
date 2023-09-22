#include <stdio.h>
 int main () {
    float peso, altura, imc;
    printf("digite seu peso: ");
    scanf("%f", &peso);
    printf("digite sua altura: ");
    scanf("%f", &altura);

    //calculando o img
    imc = peso/(altura*altura);
    printf("o seu imc e %2f\n", imc);

    if (imc < 16) {
        printf("hecticidade morbida");
    } 
    if (imc >= 16 && imc <= 17) {
        printf("hecticidade grave");
    }
    if (imc >= 17 && imc <= 18.5) {
        printf("abaixo do peso");
    }
    if (imc >= 18.5 && imc <= 25) {
        printf("peso normal");
    }
    if (imc >= 25 && imc <= 30) {
        printf("sobrepeso");
    }
    if (imc >= 30 && imc <= 35) {
        printf("obesidade");
    }
    if (imc >= 35 && imc <= 40) {
        printf("obesidade grave");
    }
    if (imc > 40) {
        printf("obesidade morbida");

    }



    return 0;
 }