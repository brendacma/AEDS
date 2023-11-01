#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

double calcularMedia(int numeros[], int n) {
    float media, soma;
    for(int i=0;i<n;i++){
        soma+=numeros[i];
    }
    media=soma/n;
    return media;
}

double calcularMediana(int numeros[], int n) {
    if (n % 2 == 1) {
        return numeros[n / 2];
    } else {
        return (numeros[n / 2 - 1] + numeros[n / 2]) / 2.0;
    }
}

int calcularModa(int numeros[], int n) {
    int moda = numeros[0];
    int frequenciaMax = 1;

    int contagem = 1;
    for (int i = 1; i < n; i++) {
        if (numeros[i] == numeros[i - 1]) {
            contagem++;
        } else {
            if (contagem > frequenciaMax) {
                frequenciaMax = contagem;
                moda = numeros[i - 1];
            }
            contagem = 1;
        }
    }

    if (contagem > frequenciaMax) {
        moda = numeros[n - 1];
    }

    return moda;
}

double calcularDesvioPadrao(int numeros[], int n, double media) {
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += pow(numeros[i] - media, 2);
    }
    return sqrt(soma / n);
}

int main() {
    int numeros[MAX_SIZE];
    int n = 0;

    int numero;
    do {
        printf("digite um numero natural (0 para encerrar): ");
        scanf("%d", &numero);
        if (numero != 0) {
            numeros[n] = numero;
            n++;
        }
    } while (numero != 0);

    if (n == 0) {
        printf("nenhum numero foi inserido.\n");
        return 0;
    }

    double media = calcularMedia(numeros, n);
    printf("media: %.2f\n", media);

    double mediana = calcularMediana(numeros, n);
    printf("mediana: %.2f\n", mediana);

    int moda = calcularModa(numeros, n);
    printf("moda: %d\n", moda);

    double desvioPadrao = calcularDesvioPadrao(numeros, n, media);
    printf("desvio oadrao: %.2f\n", desvioPadrao);

    return 0;
}