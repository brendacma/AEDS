#include <stdio.h>

int main(){

int R,G,B;
printf("Vermelho\n");
scanf("%d", &R);
printf("Verde\n");
scanf("%d", &G);
printf("Azul\n");
scanf("%d", &B);

printf("%2x %2x %2x", R,G,B);

return 0;
}