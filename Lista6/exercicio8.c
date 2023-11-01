#include <stdlib.h>
#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
}meuHorario;

int calcularSegundos(struct Horario horario) {
    int totalSec = horario.hora * 3600 + horario.minuto * 60 + horario.segundo;
    return totalSec;
}

int main() {
    struct Horario meuHorario = {5, 20, 12};
    int totalSegundos = calcularSegundos(meuHorario);
    printf("Total de segundos: %d\n", totalSegundos);
    return 0;
}
