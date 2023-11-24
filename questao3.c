#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#define MAX_CONTATOS 5000

int main()
{
    setlocale(LC_ALL, "portuguese");
    char nomes[MAX_CONTATOS][300];
    int numeros[MAX_CONTATOS];
    int opcao, i;
    int numContatos = 0;

    do
    {
        printf("\nMenu:\n");
        printf("1. Adicionar Contato\n");
        printf("2. Mostrar Contatos e Encerrar\n");
        printf("\nEscolha uma op��o:\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (numContatos < MAX_CONTATOS)
            {
                printf("Digite o nome do contato: ");
                scanf("%s", &nomes[numContatos]);
                fflush(stdin);
                printf("Digite o n�mero do contato: ");
                scanf("%d", &numeros[numContatos]);
                fflush(stdin);
                numContatos++;
                sleep(1);
                printf("Contato adicionado com sucesso!\n");
                sleep(1);
                system("cls");
            }
            else
            {
                printf("Agenda cheia. N�o � poss�vel adicionar mais contatos.\n");
            }
            break;
        case 2:
            printf("\nContatos cadastrados: %d\n", numContatos);
            for (i = 0; i < numContatos; i++)
            {
                printf("%d�. Nome: %s\n N�mero: %d\n\n", i + 1, nomes[i], numeros[i]);
            }
            break;
        default:
            printf("Op��o inv�lida. Tente novamente.\n");
        }

    } while (opcao != 2);

    return 0;
}
