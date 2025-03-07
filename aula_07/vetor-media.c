#include <stdio.h>

int main(void) {

    // Declarando vetor e variáveis

    float notas[5] = {};
    float total = 0;
    float media = 0;

    printf("Insira 5 notas:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%f", &notas[i]); // Pedindo a nota ao usuário
        total += notas[i];  // Somando a nota ao total
    }

    media = total / 5;  // Calculando média

    printf("A media do aluno e %.1f", media);   // Mostrando média

}