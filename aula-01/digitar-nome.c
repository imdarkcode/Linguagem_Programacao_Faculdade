// Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main() {

    //Definir a linguagem dos caracteres
    setlocale(LC_ALL, "Portuguese");

    // Declaracão da variável "nome" com tamanho 50
    char nome[50];

    // Pedir para o usuário informar o nome
    printf("Digite seu nome: \n");
    gets(nome);

    // Mostrar o nome
    printf("Seu nome é: %s", nome);
}
