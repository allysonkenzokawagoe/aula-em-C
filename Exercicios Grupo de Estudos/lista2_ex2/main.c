#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num, numMaior, numMenor, soma = 0, i = 0;
    bool passou;
    float media;

    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        if(passou == true) {
            numMaior, numMenor = num;
            passou = false;
        }

        if(num > numMaior) {
            numMaior = num;
        } else {
            numMenor = num;
        }

        soma += num;
        i++;
    } while(i < 10);

    media = soma / i;

    printf("O numero maior eh %d\nO numero menor eh de: %d\nA media eh de: %.2f",numMaior, numMenor, media);

    return 0;
}
