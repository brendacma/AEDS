#include <stdlib.h>
#include <stdio.h>

struct data {
    int ano;
    int mes;
    int dia;
};

struct data validarData(int dia, int mes, int ano) {
    struct data dataValidada;
    if (ano > 0 && mes >= 1 && mes <= 12) {
        if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31)) {
            dataValidada.ano = ano;
            dataValidada.mes = mes;
            dataValidada.dia = dia;
            return dataValidada;
        } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <= 30)) {
            dataValidada.ano = ano;
            dataValidada.mes = mes;
            dataValidada.dia = dia;
            return dataValidada;
        } else if (mes == 2) {
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                if (dia >= 1 && dia <= 29) {
                    dataValidada.ano = ano;
                    dataValidada.mes = mes;
                    dataValidada.dia = dia;
                    return dataValidada;
                }
            } else {
                if (dia >= 1 && dia <= 28) {
                    dataValidada.ano = ano;
                    dataValidada.mes = mes;
                    dataValidada.dia = dia;
                    return dataValidada;
                }
            }
        }
    }
    dataValidada.ano = 0;
    dataValidada.mes = 0;
    dataValidada.dia = 0;
    return dataValidada;
}

int main() {
    struct data minhaData = validarData(30, 3, 2023);
    if (minhaData.ano == 0 && minhaData.mes == 0 && minhaData.dia == 0) {
        printf("Data invalida\n");
    } else {
        printf("Data valida: %d/%d/%d\n", minhaData.dia, minhaData.mes, minhaData.ano);
    }
    return 0;
}