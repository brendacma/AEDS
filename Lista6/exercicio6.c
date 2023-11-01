#include <stdlib.h>
#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct Horario validarHorario(int hora, int minuto, int segundo) {
    struct Horario horarioValida;
    if (hora >= 0 && hora < 24 && minuto >= 0 && minuto < 60 && segundo >= 0 && segundo < 60) {
        horarioValida.hora = hora;
        horarioValida.minuto = minuto;
        horarioValida.segundo = segundo;
        return horarioValida;
    } else {
        horarioValida.hora = 0;
        horarioValida.minuto = 0;
        horarioValida.segundo = 0;
        return horarioValida;
    }
}

int main() {
    struct Horario meuHorario;
    meuHorario = validarHorario(12, 30, 45);

    if (meuHorario.hora == 0 && meuHorario.minuto == 0 && meuHorario.segundo == 0) {
        printf("Horario invalido\n");
    } else {
        printf("Horario valido: %d:%d:%d\n", meuHorario.hora, meuHorario.minuto, meuHorario.segundo);
    }
    return 0;
}