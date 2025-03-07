#include <stdio.h>

int main(void) {

    int vetor[5] = {1, 2, 3, 4, 5};    // Declarando um vetor e atribuindo seus valores

    for (int i = 0; i < 5; i++) {   // Utilizando o for para mostrar todos os valores do vetor
        printf("%i\n", vetor[i]);    // Mostrando o valor da posição i do vetor
    }

}