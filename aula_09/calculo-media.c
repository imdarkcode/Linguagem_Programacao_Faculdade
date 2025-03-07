#include <stdio.h>
#include <string.h>

int main(void) {

    int count = 0;
    char repetir[10] = "s";

    struct alunos {
        char nome[50];
        float nota_1;
        float nota_2;
        float nota_3;
    };

    struct alunos aluno[100];

    while(strcmp(repetir, "s") == 0) {

        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[count].nome);

        printf("Digite a primeira nota: ");
        scanf("%f", &aluno[count].nota_1);

        printf("Digite a primeira nota: ");
        scanf("%f", &aluno[count].nota_2);

        printf("Digite a primeira nota: ");
        scanf("%f", &aluno[count].nota_3);

        printf("Deseja cadastrar um novo aluno? (s/n)\n");
        scanf("%s", repetir);

        count++;
    }

    for(int i = 0; i < count; i++) {
        float media = (aluno[i].nota_1 + aluno[i].nota_2 + aluno[i].nota_3) / 3;
        printf("%s: %.2f - ", aluno[i].nome, media);
        
        if(media >= 6) {
            printf("Aprovado\n");
        }
        else {
            printf("Reprovado\n");
        }
    }
}
