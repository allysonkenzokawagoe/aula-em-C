#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int num, fn, fn1 = 0, fn2 = 1;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        fn = fn1 + fn2;

        printf("%d, ", fn);

        fn2 = fn1;
        fn1 = fn;
    }

    return 0;
}
