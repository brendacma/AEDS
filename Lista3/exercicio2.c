//somatorio

#include <stdio.h>

int main () {

    int n=0;
    float soma=0;
    printf("digite no numero de termos n: ");
    scanf("%d", &n);

    for (int i=0; i<= n; i++) {
        soma += 1/(pow(2,i)); // que significa 1 sobre 2 elevado a i 
    }
    printf("%f", soma);
    
    return 0; 
}