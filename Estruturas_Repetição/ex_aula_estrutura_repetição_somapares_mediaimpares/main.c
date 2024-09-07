#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n, i = 0, soma = 0, media, m = 0;

    printf("Digite a quantidade de numeros a ser digitada: ");
    scanf("%d", &n);

    while (i < n) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num%2 == 0) {
            soma += num;
        }
        if(num%2 != 0) {
            media += num;
            m++;
        }
        i++;
    }

    media = media / m;

    printf("A soma eh de: %d\nA media dos numeros eh de: %d", soma, media);

    return 0;
}
