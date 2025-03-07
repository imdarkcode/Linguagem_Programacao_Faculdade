#include <stdio.h>

// Função para somar os valores do vetor

int somarVetor(int vetor[], int n) {
    int resultado = 0;

    for (int i = 0; i < n; i++) {  
        resultado += vetor[i];
    }
    return resultado;
}

// Função para achar o maior número

int maiorNumero(int vetor[], int n) {
    int maior = vetor[0];

    for (int i = 0; i < n; i++) {  
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

// Função para achar o menor número

int menorNumero(int vetor[], int n) {
    int menor = vetor[0];

    for (int i = 0; i < n; i++) {  
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

// Função para inverter o vetor

void inverterVetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {  
        printf("%i", vetor[9 - i]);
    }
}

int main(void) {

    int vetor[10] = {};

    // Pedir os valores do vetor ao usuário

    for (int i = 0; i < 10; i++) {  
        printf("Informe o valor %i: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("Soma dos valore: %i", somarVetor(vetor, 10));   // Mostrar a soma
    printf("\nMaior numero: %i", maiorNumero(vetor, 10));   // Mostrar o maior número
    printf("\nMenor numero: %i", menorNumero(vetor, 10));   // Mostrar o menor número
    printf("\nVetor invertido: ");
    inverterVetor(vetor, 10);   // Mostrar o vetor invertido

}