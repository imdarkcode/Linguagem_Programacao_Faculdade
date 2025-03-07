#include <stdio.h>

int main (void) {
    float areaRetangulo(float x, float y);
    float area = areaRetangulo(10.0, 20.0);

    printf("A area é: %2.f", area);

    return 0;
}

float areaRetangulo(float base, float altura) {
    float area = base * altura;

    return area;
}
