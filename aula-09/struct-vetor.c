#include <stdio.h>

int main (void) {
    struct horario {
        int hora;
        int minuto;
        int segundo;
    };

    struct horario teste[5];

    teste[0].hora = 10;
    teste[0].minuto = 45;
    teste[0].segundo = 18;

    printf("%i:%i:%i\n", teste[0].hora, teste[0].minuto, teste[0].segundo);
}