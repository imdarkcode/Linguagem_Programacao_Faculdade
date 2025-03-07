#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char resposta[10];

    FILE *file;
    file = fopen("arquivo.txt", "r");

    if (file == NULL) {
        printf("Arquivo nao encontrado, deseja cria-lo?\n");
        scanf("%s", resposta);

        if(strcmp(resposta, "s") == 0) {
            file = fopen("arquivo.txt", "w");
            fprintf(file, "Exemplo de texto");
        }
        else {
            system("pause");
            return 0;
        }
    }
    else {
        printf("Arquivo encontrado\n");
        system("pause");
        return 0;
    }
}