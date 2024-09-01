#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num, raiz, quad;

    printf("Digite um numero: ");
    scanf("%lf", &num);

    if(num > 0) {
        raiz = sqrt(num);
        printf("A raiz do numero %.2lf eh de: %.2lf", num, raiz);
    } else {
        quad = pow(num, 2);
        printf("O quadrado do numero %.2lf eh de: %.2lf", num, quad);
    }

    return 0;
}
