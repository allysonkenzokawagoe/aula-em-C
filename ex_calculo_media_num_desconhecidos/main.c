#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, i = 0, media = 0;

    if(num >= 0) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        media = num;
        while(num > 0) {
            printf("Digite um numero inteiro: ");
            scanf("%d", &num);
            media += num;
            i++;
        }
        if (num == 0) {
            media = media / i ;
            printf("A media dos numeros eh de: %d", media);
        }
    } else {
        printf("Digite um numero inteiro maior que zero!");
    }


    return 0;
}
