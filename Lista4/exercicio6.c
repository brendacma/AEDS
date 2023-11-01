#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool Palindromo(char *palavra) {
    int i = 0;
    int j = strlen(palavra) - 1;

    while (i < j) {
        if (tolower(palavra[i]) != tolower(palavra[j])) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char frase[1000];
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);

    char palavra[100];
    int i, j = 0;
    bool palindromo = false;

    printf("Palindromos na frase:\n");

    for (i = 0; frase[i] != '\0'; i++) {
        if (isalpha(frase[i])) {
            palavra[j] = frase[i];
            j++;
        } else {
            palavra[j] = '\0';
            j = 0;
            if (strlen(palavra) > 3 && Palindromo(palavra)) {
                printf("%s\n", palavra);
                palindromo = true;
            }
        }
    }

    if (!palindromo) {
        printf("Nenhum palindromo foi encontrado na frase.\n");
    }

    return 0;
}