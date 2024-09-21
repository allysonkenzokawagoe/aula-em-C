#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fn1 = 0, fn2 = 1, fn = 0, num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while(fn <= num) {
        if(fn1 > 0) {
            printf("%d\t", fn1);
        }

        fn = fn1 + fn2;

        fn1 = fn2;
        fn2 = fn;
    }

    return 0;
}
