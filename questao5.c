#include <stdio.h>
#include <locale.h>
#define MAX_VENDAS 1000

struct Loja {
    char nomeProduto[500];
    float preco;
    int quantidade;
};

int main() {    
    setlocale(LC_ALL, "portuguese");
    struct Loja vendas[MAX_VENDAS];
    int opcao, numVendas = 0;
    float totalPreco = 0.0;

    do {
        printf("1. Adicionar Venda\n");
        printf("2. Exibir Total de Vendas e Sair\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (numVendas < MAX_VENDAS) {
                    printf("Digite o nome do produto: ");
                    scanf("%s", vendas[numVendas].nomeProduto);
                    printf("Digite o preço do produto: ");
                    scanf("%f", &vendas[numVendas].preco);
                    printf("Digite a quantidade vendida: ");
                    scanf("%d", &vendas[numVendas].quantidade);
                    totalPreco += vendas[numVendas].preco * vendas[numVendas].quantidade;
                    numVendas++;
                    printf("Venda registrada com sucesso!\n");
                    system("cls");
                } else {
                    printf("Limite de vendas atingido. Não é possível adicionar mais vendas.\n");
                    system("cls");
                }
                break;
            case 2:
                system("cls");
                printf("Total de vendas: %d\n", numVendas);
                printf("Valor total das vendas: R$%.2f\n", totalPreco);
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                system("cls");
        }

    } while (opcao != 2);

    return 0;
}
