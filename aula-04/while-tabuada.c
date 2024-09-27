// Bibliotecas
#include <stdio.h>
#include <conio.h>

int main() {
    // Definir as variáveis
    unsigned int t, c, i = 0;

    // Pedir o valor para o usuário
    printf("Tabuada: ");
    scanf("%u", &t);
    printf("\n");

    // Calcular e mostrar a tabuada
    while (i <= 10) {
        c = t * i;
        printf("%u x %u = %u \n", t, i, c);
        i++;
    }
}
