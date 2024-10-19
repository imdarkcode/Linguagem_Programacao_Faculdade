#include <stdio.h>
#include <string.h>
#include <conio.h>

struct produto {
    char nome[50];
    int quantidade;
    float preco;
};

int main(void) {

    int acao, count = 0, codigo, quantidade;
    struct produto produtos[100];
    float soma;

    do {
        printf("===============================================\n");
        printf("Bem vindo ao sistema de controle de estoque\n");
        printf("===============================================\n");
        printf("1. Cadastrar novo produto\n");
        printf("2. Registrar venda\n");
        printf("3. Exibir produtos cadastrados\n");
        printf("4. Calcular valor total do estoque\n");
        printf("0. Sair do programa\n");
        printf("Insira o numero da acao que deseja realizar: ");
        scanf("%i", &acao);
        printf("\n");

        if(acao == 1) {
            printf("===============================================\n");
            printf("Cadastrar novo produto\n");
            printf("===============================================\n");
            printf("Nome do produto: ");
            scanf("%s", produtos[count].nome);
            printf("Quantidade: ");
            scanf("%i", &produtos[count].quantidade);
            printf("Preco: ");
            scanf("%f", &produtos[count].preco);
            count ++;
            printf("Produto cadastrado, pressione enter para voltar ao menu\n");
            getch();
        }
        else if (acao == 2) {
            printf("===============================================\n");
            printf("Vender produto\n");
            printf("===============================================\n");
            printf("Informe o numero do produto: ");
            scanf("%i", &codigo);
            printf("Informe a quantidade: ");
            scanf("%i", &quantidade);

            if(codigo < count) {
                if (quantidade <= produtos[codigo].quantidade) {
                    produtos[codigo].quantidade -= quantidade;
                    printf("Produto vendido, pressione enter para voltar ao menu\n");
                    getch();
                }
                else {
                printf("Quantidade insuficiente, pressione enter para voltar ao menu\n");
                getch();
                }
            }
            else {
                printf("Produto inexistente, pressione enter para voltar ao menu\n");
                getch();
            }
            
        }
        else if(acao == 3) {
            printf("===============================================\n");
            printf("Lista de produtos\n");
            printf("===============================================\n");

            for(int i = 0; i < count; i++){
                printf("%i. Produto: %s | Quantidade: %i | Preco: %.2f\n", i, produtos[i].nome, produtos[i].quantidade, produtos[i].preco); 
            }

            printf("Pressione enter para voltar ao menu\n");
            getch();
        }
        else if(acao == 4) {
            printf("===============================================\n");
            printf("Total de estoque\n");
            printf("===============================================\n");

            soma = 0;

            for(int i = 0; i < count; i++){
                soma += produtos[i].preco * produtos[i].quantidade;
            }

            printf("Produtos cadastrados: %i\n", count);
            printf("Valor total: %.2f\n", soma);
            printf("Pressione enter para voltar ao menu\n");
            getch();
        }
        else if (acao != 0) {
            printf("Comando nao reconhecido, pressione enter para voltar ao menu\n");
            getch();
        }

    } while(acao != 0);

}