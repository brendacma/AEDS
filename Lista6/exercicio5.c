#include <stdio.h>
#include <string.h>


struct Horas {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    struct Horas horario;
    horario.hora = 12;
    horario.minuto = 30;
    horario.segundo = 45;

    return 0;
}