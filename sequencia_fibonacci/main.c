#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int fn1 = 0, fn2 = 1, fn = 0, num;
    bool passou = true;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(passou = true) {
        fn = fn1 + fn2;
        passou = false;
    }

    while(fn <= num) {
        printf("%d\t", fn);

        fn = fn1 + fn2;

        fn2 = fn1;
        fn1 = fn;
    }

    return 0;
}
