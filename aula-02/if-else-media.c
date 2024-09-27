// Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
    // Definir a linguagem dos caracteres
    setlocale(LC_ALL, "Portuguese");

    // Declarar as variáveis
    float n1, n2, n3, media;

    // Pedir os valores ao usuário
    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);

    // Calcular média
    media = (n1 + n2 + n3) / 3;

    // Verificar se foi aprovado
    if (media >= 7){
        printf("Média: %.2f aprovado", media);
    }
    else if (media < 7 && media >= 5) {
        printf("Média: %.2f recuperação", media);
    }
    else {
        printf("Média: %.2f reprovado", media);
    }

}
