// Bibliotecas
#include <stdio.h>
#include <conio.h>

int main() {
    // Definir as variáveis
    unsigned int t, c, i;

    // Pedir o valor para o usuário
    printf("Tabuada: ");
    scanf("%u", &t);
    printf("\n");

    // Calcular e mostrar a tabuada
    for (i = 0; i <= 10; i++) {
        c = t * i;
        printf("%u x %u = %u \n", t, i, c);
    }
}
