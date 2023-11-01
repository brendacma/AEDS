#include <stdlib.h>
#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct Horario somarHorarios(struct Horario horario1, struct Horario horario2) {
    struct Horario resultado1;
    int totalSegundos1 = horario1.hora * 3600 + horario1.minuto * 60 + horario1.segundo;
    int totalSegundos2 = horario2.hora * 3600 + horario2.minuto * 60 + horario2.segundo;
    int somaSegundos = totalSegundos1 + totalSegundos2;

    resultado1.hora = somaSegundos / 3600;
    resultado1.minuto = (somaSegundos % 3600) / 60;
    resultado1.segundo = (somaSegundos % 3600) % 60;

    return resultado1;
}

int main() {
    struct Horario meuHorario1 = {2, 30, 45};
    struct Horario meuHorario2 = {1, 15, 30};
    struct Horario resultado = somarHorarios(meuHorario1, meuHorario2);

    printf("soma = %i:%i:%i\n", resultado.hora, resultado.minuto, resultado.segundo);

    return 0;
}