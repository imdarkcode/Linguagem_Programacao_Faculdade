#include <stdio.h>
#include <stdlib.h>

int main(void) {

    system("cls");

    FILE *file;
    file = fopen("string.txt", "r");

    if (file == NULL) {
        printf("Nao foi possivel abrir o arquivo.\n");
        system("pause");
        system("exit");
    }

    char frase[100];

    while (fgets(frase, 100, file) != NULL) {
        printf("%s", frase);
    }

    fclose(file);

    printf("\n");
    system("pause");
    return 0;
}