#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i = 0, soma = 0;
    float media;

    do {
        printf("Digite um numero inteiro: ", num);
        scanf("%d", &num);
        soma += num;
        if(num != 0) {
            i++;
        }
    } while(num != 0);

        media = soma / i;
        printf("A media dos numeros eh de: %.2f", media);

    return 0;
}
