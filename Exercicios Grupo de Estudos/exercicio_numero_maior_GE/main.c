#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Digite o numero 1: ");
    scanf("%d", &n1);

    printf("Digite o numero 2: ");
    scanf("%d", &n2);

    if(n1 > n2) {
        printf("O numero maior eh o: %d", n1);
    } else if(n2 > n1) {
        printf("O numero maior eh o: %d", n2);
    } else {
        printf("Os numeros sao iguais!");
    }

    return 0;
}
