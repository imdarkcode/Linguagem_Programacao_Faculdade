#include <stdio.h>

int main(void) {

    int matriz[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; // Declarando o vetor 5x5 e seus valores

    for (int m = 0; m < 5; m++) {   // Lendo as linhas da matriz
        for (int n = 0; n < 5; n++) {   // Lendo as colunas da matriz
            printf("%i ", matriz[m][n]);    // Mostrando o valor de acordo com sua posição na matriz
        }
        printf("\n");   // Pulando linha depois de ler uma linha completa
    }
}