#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");
   
    int numeros[5];
    int i, impares = 0, negativos = 0, par = 0;
    int maior, menor, somaPares = 0, somaTotal = 0;
    float mediaPares, mediaTotal;

    printf("Digite 5 n�meros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("%d� numero:\n", i + 1);
        scanf("%d", &numeros[i]); 
        somaTotal += numeros[i];

        if (numeros[i] % 2 != 0) {
            impares++;
        }
        else if (numeros[i] < 0) {
            negativos++;
        }
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
        else if (i == 0 || numeros[i] < menor) {
            menor = numeros[i];
        }
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            par++;
        }
    }

    mediaPares = (float)somaPares / par;
    mediaTotal = (float)somaTotal / 5;

    printf("\nResultados:\n");
    printf("Quantidade de n�meros �mpares: %d\n", impares);
    printf("Quantidade de n�meros negativos: %d\n", negativos);
    printf("Maior n�mero: %d\n", maior);
    printf("Menor n�mero: %d\n", menor);
    printf("M�dia de n�meros pares: %.1f\n", mediaPares);
    printf("M�dia de todos os n�meros inseridos: %.1f\n", mediaTotal);

    return 0;
}
