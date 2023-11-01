#include <stdlib.h>
#include <stdio.h>

struct Data {
    int ano;
    int mes;
    int dia;
};

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct DataHorario {
    struct Data data;
    struct Horario horario;
};

int main() {
    struct Data minhaData = {2023, 10, 26};
    struct Horario meuHorario = {14, 30, 45};

    struct DataHorario meuDataHorario;
    meuDataHorario.data = minhaData;
    meuDataHorario.horario = meuHorario;

    printf("Data e Horario: %i/%i/%i %i:%i:%i\n", meuDataHorario.data.dia, meuDataHorario.data.mes, meuDataHorario.data.ano,
           meuDataHorario.horario.hora, meuDataHorario.horario.minuto, meuDataHorario.horario.segundo);

    return 0;
}