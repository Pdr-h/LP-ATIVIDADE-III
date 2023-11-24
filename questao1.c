#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct grupo
{
    char nome[200];
    int idade;
    float peso;
    float altura;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    struct grupo pessoas[5];
    float maiorAltura = 0.0, menorAltura = __INT_MAX__;
    char nomeMenorAltura[200], nomeMaiorAltura[200];
    float maiorPeso = 0.0, menorPeso = __INT_MAX__;
    char nomeMenorPeso[200], nomeMaiorPeso[200];
    int maiorIdade = 0, menorIdade = __INT_MAX__;
    char nomeMenorIdade[200], nomeMaiorIdade[200];

    for (i = 0; i < 5; i++)
    {
        printf("Digite os dados da %d° pessoa\n", i + 1);
        printf("Nome:");
        scanf("%s", pessoas[i].nome);
        fflush(stdin);
        printf("Idade:");
        scanf("%d", &pessoas[i].idade);
        printf("Peso:");
        scanf("%f", &pessoas[i].peso);
        printf("Altura:");
        scanf("%f", &pessoas[i].altura);
        
        system("cls");
    }

    for ( i = 0; i < 5; i++)
    {
        if (maiorAltura < pessoas[i].altura)
        {
            maiorAltura = pessoas[i].altura;
            strcpy(nomeMaiorAltura, pessoas[i].nome);
        }
        else if (menorAltura > pessoas[i].altura)
        {
            menorAltura = pessoas[i].altura;
            strcpy(nomeMenorAltura, pessoas[i].nome);
        }
        if (maiorPeso < pessoas[i].peso)
        {
            maiorPeso = pessoas[i].peso;
            strcpy(nomeMaiorPeso, pessoas[i].nome);
        }
        else if (menorPeso > pessoas[i].peso)
        {
            menorPeso = pessoas[i].peso;
            strcpy(nomeMenorPeso, pessoas[i].nome);
        }
        if (maiorIdade < pessoas[i].idade)
        {
            maiorIdade = pessoas[i].idade;
            strcpy(nomeMaiorIdade, pessoas[i].nome);
        }
        else if (menorIdade > pessoas[i].idade)
        {
            menorIdade = pessoas[i].idade;
            strcpy(nomeMenorIdade, pessoas[i].nome);
        }
    }
     printf("------Dados Armazenados\n\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%d° Pessoa:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d anos\n", pessoas[i].idade);
        printf("Peso: %.1fKg\n", pessoas[i].peso);
        printf("Altura: %.2fm\n", pessoas[i].altura);
        printf("\n");
    }
        printf("----------------------------------------------------\n\n");
        printf("%s é a pessoa mais alta, com %.2fm\n", nomeMaiorAltura, maiorAltura);
        printf("%s é a pessoa mais baixa, com %.2fm\n", nomeMenorAltura, menorAltura);
        printf("%s é a pessoa com maior peso: %.1fKg\n", nomeMaiorPeso, maiorPeso);
        printf("%s é a pessoa com menor peso: %.1fKg\n", nomeMenorPeso, menorPeso);
        printf("%s é o mais velho do grupo com: %d anos\n", nomeMaiorIdade, maiorIdade);
        printf("%s é o mais novo do grupo com: %d anos\n", nomeMenorIdade, menorIdade);

    return 0;
}
