#include <stdio.h>
#include <conio.h>
#include <locale.h>

int numeroDigitado(int numero) {
    numero = numero + 10;

    return numero;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n = 10;
    printf("Número da função: %i\n", numeroDigitado(n));
    printf("Número do método: %i", n);

    return 0;
}
