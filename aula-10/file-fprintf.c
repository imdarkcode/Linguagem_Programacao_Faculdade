#include <stdio.h>

int main(void) {

    FILE *file;
    file = fopen("texto.txt", "w");
    fprintf(file, "Exemplo de texto.");
    fclose(file); 

    return 0;
}