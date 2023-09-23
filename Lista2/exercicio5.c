#include <stdio.h>

int main () {

    int a=0, b=0, c=0, aux=0;
    printf("digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {    
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    printf("%d %d %d\n", a, b, c);

}