// Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {

    // Definir a linguagem dos caracteres
    setlocale(LC_ALL, "Portuguese");

    // Declarar as variáveis
    int valor_1, valor_2, result;

    // Pedir para o usuário informar os dois valores
    printf("Digite o primeiro valor: \n");
    scanf("%i", &valor_1);
    printf("Digite o segundo valor: \n");
    scanf("%i", &valor_2);

    // Calcular a soma
    result = valor_1 + valor_2;

    // Mostrar o resultado
    printf("A soma dos valores é: %i", result);
}
