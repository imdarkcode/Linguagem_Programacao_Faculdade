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

    teste[1].hora = 12;
    teste[1].minuto = 14;
    teste[1].segundo = 52;

    teste[2].hora = 19;
    teste[2].minuto = 42;
    teste[2].segundo = 17;

    teste[3].hora = 20;
    teste[3].minuto = 14;
    teste[3].segundo = 47;

    teste[4].hora = 23;
    teste[4].minuto = 25;
    teste[4].segundo = 31;

    for (int i = 0; i < 5; i++) {
        printf("%i:%i:%i\n", teste[i].hora, teste[i].minuto, teste[i].segundo);
    }
}