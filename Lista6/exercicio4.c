#include <stdlib.h>
#include <stdio.h>

struct Data {
    int ano;
    int mes;
    int dia;
};

int numeroDiasNoMes(int mes, int ano) {
    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            return 29;
        } else {
            return 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}

struct Data adicionarDias(struct Data data, int dias) {
    while (dias > 0) {
        int diasNoMes = numeroDiasNoMes(data.mes, data.ano);
        if (data.dia + dias > diasNoMes) {
            dias -= (diasNoMes - data.dia + 1);
            data.dia = 1;
            if (data.mes == 12) {
                data.mes = 1;
                data.ano++;
            } else {
                data.mes++;
            }
        } else {
            data.dia += dias;
            dias = 0;
        }
    }
    return data;
}

int main() {
    struct Data minhaData = {2023, 10, 26};
    int diasAcrescentados = 10;

    struct Data novaData = adicionarDias(minhaData, diasAcrescentados);
    printf("Nova data: %d/%d/%d\n", novaData.dia, novaData.mes, novaData.ano);

    return 0;
}