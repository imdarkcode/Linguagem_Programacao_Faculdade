#include <stdio.h>
#include <conio.h>
#include <locale.h>

float media(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

int main () {
    float n1, n2, n3;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    if (media(n1, n2, n3) >= 7) {
        printf("Meus parabéns você foi aprovado, seu média é %2.f", media(n1, n2, n3));
    }
    else if (media(n1, n2, n3) >= 5 && media(n1, n2, n3) < 7)
    {
        printf("Foi quase você ficou de recuperação, sua média é %2.f", media(n1, n2, n3));
    }
    
    else {
        printf("Eu lamento mas você foi reprovado, sua média é %2.f", media(n1, n2, n3));
    }
    return 0;
}