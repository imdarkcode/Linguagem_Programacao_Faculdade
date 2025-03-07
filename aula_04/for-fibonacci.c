// Bibliotecas
#include <stdio.h>
#include <conio.h>

int main() {
    // Definir as variáveis
    unsigned a = 0, b = 1, c = 0, i;

    // Mostrar os dois valores iniciais
    printf("%u \n", a);
    printf("%u \n", b);

    // Calcular e mostrar os demais valores
    for (i = 1; i < 20; i++) {
        a = b + c;
        c = b;
        b = a;
        
        printf("%u \n", a);
    }
}
