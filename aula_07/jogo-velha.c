#include <stdio.h>

int main(void) {

    // Declarando variáveis e vetores

    int posicao[2] = {};
    int partida = 1;
    int vez = 1;
    int tabuleiro[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int velha = 0;

    printf("Tic Tac Toe\n");

    while (partida == 1) { // Rodada
        printf("Vez do %i\n", vez); // Mostrando de quem é a vez

        // Mostrando o tabuleiro

        for (int m = 0; m < 3; m++) {
            for (int n = 0; n < 3; n++) {
                printf("%i ", tabuleiro[m][n]);  
            }
            printf("\n");   
        }

        // Pedindo a linha e a coluna ao jogador

        printf("Informe a linha: ");
        scanf("%i", &posicao[0]);
        
        printf("Informe a coluna: ");
        scanf("%i", &posicao[1]);

        if (posicao[0] >= 0 && posicao[0] <= 2 && posicao[1] >= 0 && posicao[1] <= 2) { // Verificar se a posição é válida
            if (tabuleiro[posicao[0]][posicao[1]] == 0) { // Verificar se a posição está livre
                tabuleiro[posicao[0]][posicao[1]] = vez; // Marcar a posição com o número do jogador

                // Trocar a vez do jogador

                if (vez == 1) {
                    vez = 2;
                }
                else {
                    vez = 1;
                }

                // Verificar se alguém ganhou

                if ((tabuleiro[0][0] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][2] == 1) || (tabuleiro[0][0] == 1 && tabuleiro[0][1] == 1 && tabuleiro[0][2] == 1) || (tabuleiro[1][0] == 1 && tabuleiro[1][1] == 1 && tabuleiro[1][2] == 1) || (tabuleiro[2][0] == 1 && tabuleiro[2][1] == 1 && tabuleiro[2][2] == 1) || (tabuleiro[0][1] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][1] == 1) || (tabuleiro[0][0] == 1 && tabuleiro[1][0] == 1 && tabuleiro[2][0] == 1) || (tabuleiro[0][2] == 1 && tabuleiro[1][2] == 1 && tabuleiro[2][2] == 1) || (tabuleiro[0][2] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][0] == 1)) {
                    printf("O numero 1 ganhou");
                    partida = 0;
                }
                else if ((tabuleiro[0][0] == 2 && tabuleiro[1][1] == 2 && tabuleiro[2][2] == 2) || (tabuleiro[0][0] == 2 && tabuleiro[0][1] == 2 && tabuleiro[0][2] == 2) || (tabuleiro[1][0] == 2 && tabuleiro[1][1] == 2 && tabuleiro[1][2] == 2) || (tabuleiro[2][0] == 2 && tabuleiro[2][1] == 2 && tabuleiro[2][2] == 2) || (tabuleiro[0][1] == 2 && tabuleiro[1][1] == 2 && tabuleiro[2][1] == 2) || (tabuleiro[0][0] == 2 && tabuleiro[1][0] == 2 && tabuleiro[2][0] == 2) || (tabuleiro[0][2] == 2 && tabuleiro[1][2] == 2 && tabuleiro[2][2] == 2) || (tabuleiro[0][2] == 2 && tabuleiro[1][1] == 2 && tabuleiro[2][0] == 2)) {
                    printf("O numero 2 ganhou");
                    partida = 0;
                }

                // Verificar se deu velha

                velha = 1;

                for (int m = 0; m < 3; m++) {  
                    for (int n = 0; n < 3; n++) {  
                        if (tabuleiro[m][n] == 0) {
                            velha = 0;
                        }
                    }
                }

                if (velha == 1) {
                    partida = 0;
                }
            }
            else {
                printf("Esse espaco ja esta ocupado\n"); // Mostrando que o espaço está ocupada
            }
        }
        else {
            printf("Posicao invalida\n"); // Mostrando que a posição não é válida
        }
    }
    
}