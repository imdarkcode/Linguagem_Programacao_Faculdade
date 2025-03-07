#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *file;
    file = fopen("numero.txt", "r");

    int x, y, z;

    fscanf(file, "%i %i %i", &x, &y, &z);

    printf("%i %i %i\n", x, y, z);

    fclose(file);

    system("pause");
    return 0;
}