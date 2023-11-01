#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Palindromo(const char *frase) {
    int tamanho = strlen(frase);

    for (int i = 0; i < tamanho / 2; i++) {
        if (frase[i] != frase[tamanho - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    char frase[1000];

    printf("Digite uma frase: ");
    gets(frase);

    if (Palindromo(frase))
        printf("A frase e um palindromo.\n");
    else
        printf("A frase nao e um palindromo.\n");
        
    return 0;
}