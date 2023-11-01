#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct data{
    int dia;
    int mes;
    int ano;
    };

    struct data minhadata = {25, 10, 2023};
    printf("%i/%i/%i", minhadata.dia, minhadata.mes, minhadata.ano);

    return 0;
}