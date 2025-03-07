#include <stdio.h>

int main(void) {

// Definindo a estrutura horario com suas propriedades

struct horario {
    int horas;
    int minutos;
    int segundos;
    double teste;
    char letra;
};

struct horario agora;   // Atribuindo as propriedades da estrutura horario na variável agora

// Atribuindo o valor de cada propriedade da variável agora

agora.horas = 9;
agora.minutos = 16;
agora.segundos = 30;

struct horario depois;  // Atribuindo as propriedades da estrutura horario na variável depois

// Definindo cada propriedade da variável depois

depois.horas = agora.horas + 10;
depois.minutos = agora.minutos;
depois.segundos = agora.segundos;
depois.teste = 50.55 / 123;
depois.letra = 'a';

// Mostrando as variáveis

printf("Agora: %i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
printf("Depois: %i:%i:%i\n", depois.horas, depois.minutos, depois.segundos);
printf("Depois teste: %f\n", depois.teste);
printf("Depois letra: %c\n", depois.letra);

}
