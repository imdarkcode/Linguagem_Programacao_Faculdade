// Bibliotecas
#include <stdio.h>
#include <conio.h>

int main() {
    // Definir as variáveis
    int n1, n2, r;

    // Pedir os valores ao usuário
    printf("Digite o primeiro valor: \n");
    scanf("%i", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%i", &n2);

    // Calcular a soma
    r = n1 + n2;

    // Verificar se a soma for maior, menor ou igual a 10
    if (r > 10){
        printf("%i maior que 10", r);
    }
    else if (r < 10) {
        printf("%i menor que 10", r);
    }
    else {
        printf("%i igual a 10", r);
    }

}
