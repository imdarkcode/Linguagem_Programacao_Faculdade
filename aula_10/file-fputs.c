#include <stdio.h>
#include <stdlib.h>

int main(void) {

    system("cls");

    FILE *file;
    file = fopen("string.txt", "a");

    if (file == NULL) {
        printf("Nao foi possivel abrir o arquivo.\n");
        system("pause");
        system("exit");
    }

    fprintf(file, "Primeira linha\n");

    char frase[] = "Segunda linha";
    fputs(frase, file);

    fclose(file);

    system("pause");
    return 0;
}   