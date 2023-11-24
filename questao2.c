#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Escola
{
    char nome[300];
    int idade;
    float notas[3], media;
    char resultado[50];
};

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct Escola alunos[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite os dados do aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        for (int j = 0; j < 3; j++)
        {
        printf("Digite a %d nota de %s: ", j + 1, alunos[i].nome);
        scanf("%f", &alunos[i].notas[j]);
        }

        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3.0;

        if (alunos[i].media >= 7.0)
        {
            strcpy(alunos[i].resultado, "Aprovado");
        }
        else if (alunos[i].media >= 5.0)
        {
            strcpy(alunos[i].resultado, "Recupera��o");
        }
        else
        {
            strcpy(alunos[i].resultado, "Reprovado");
        }

        printf("\n");
    }
    system("cls");
    printf("Dados dos alunos e Resultados:\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d anos\n", alunos[i].idade);
        printf("Notas: %.2f, %.2f, %.2f\n", alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
        printf("M�dia: %.2f\n", alunos[i].media);
        printf("Resultado: %s\n", alunos[i].resultado);
        printf("\n");
    }

    return 0;
}
