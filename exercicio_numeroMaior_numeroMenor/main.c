#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n1 = 0, n2 = 0;

    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        if(num == 0) {
            printf("O maior numero eh o %d e o menor eh o %d", n1, n2);
        }   else if(num >= n1) {
                n1 = num;
            } else{
                if(n1 < n2 || num < n1 || num < n2) {
                    n2 = num;
                }
            }

    } while(num != 0);



    return 0;
}
