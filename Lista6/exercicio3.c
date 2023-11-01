#include <stdlib.h>
#include <stdio.h>

struct Data {
    int ano;
    int mes;
    int dia;
};

int diasNoMes(int mes, int ano) {
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

struct Data acrescentarDias(struct Data data, int dias) {
    while (dias > 0) {
        int diasRestantesNoMes = diasNoMes(data.mes, data.ano) - data.dia + 1;
        if (diasRestantesNoMes > dias) {
            data.dia += dias;
            break;
        } else {
            dias -= diasRestantesNoMes;
            data.dia = 1;
            if (data.mes == 12) {
                data.mes = 1;
                data.ano++;
            } else {
                data.mes++;
            }
        }
    }
    return data;
}

int main() {
    struct Data minhaData = {2023, 10, 25};
    int diasAcrescentados = 15;
    struct Data novaData = acrescentarDias(minhaData, diasAcrescentados);
    printf("Nova data: %d/%d/%d\n", novaData.dia, novaData.mes, novaData.ano);
    return 0;
}