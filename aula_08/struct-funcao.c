#include <stdio.h>

// Definindo a estrutura horario com suas propriedades

struct horario {
    int horas;
    int minutos;
    int segundos;
};

int main(void) {
    struct horario mudarHorario(struct horario x); // Declarando a função mudarHorario

    // Atribuindo o valor de cada propriedade da variável agora

    struct horario agora;
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 29;

    struct horario depois; // Declarando a variavel depois
    depois = mudarHorario(agora);  // Definir as propriedades da estrutura depois com a função mudarHorario

    printf("Depois: %i:%i:%i\n", depois.horas, depois.minutos, depois.segundos);
}

// Função para mostrar o horário atual e mudar o valor das propriedades

struct horario mudarHorario (struct horario x) {
    printf("Agora: %i:%i:%i\n", x.horas, x.minutos, x.segundos);

    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;

    return x;
}
