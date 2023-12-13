#include <stdio.h>

int main() {
    int HEXA;
    printf("Digite uma sequencia de cores no formato #RRGGBB\n");
    scanf("%x", &HEXA);
    int R,G,B;
    B = (16*16);
    R = (256*256);
    G = (256*256)/256 ;
    printf("R: %i G: %i B: %i", R,G,B);

    return 0;
}