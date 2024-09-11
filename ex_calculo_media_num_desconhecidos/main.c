#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, media = 0, i = 0;

    do {
        printf("Digite um numero inteiro: ", num);
        scanf("%d", &num);
        media += num;
        i++;
    } while(num > 0);

    if(num == 0) {
        media = media / (i - 1);
        printf("A media dos numeros eh de: %d", media);
    }

    return 0;
}
