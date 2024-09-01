#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < (b + c) && b < (a + c) && c < (a + b)) {
        if(a == b == c) {
            printf("Este eh um triangulo equilatero!");
        } else if(a == b || a == c || b == c) {
            printf("Este eh um triangulo isosceles!");
        } else {
            printf("Este eh um triangulo escaleno!");
        }
    } else {
        printf("Os valores nao formam um triangulo");
    }

    return 0;
}
