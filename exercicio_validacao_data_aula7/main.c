#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano, bissexto;

    printf("Digite uma data no formato dd/mm/aa: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    bissexto = ano % 100;

    if(mes >= 1 && mes <= 12) {
        if(mes == 2) {
            if(bissexto%4 == 0) {
                if(dia > 29 || dia < 1) {
                    printf("Essa data nao existe");
                } else {
                    printf("Data valida");
                }
            } else {
                if(dia > 28 || dia < 1) {
                    printf("Essa data nao existe");
                }
            }
        } else if(dia < 1 || dia > 31){
            printf("Essa data nao existe");
        } else {
            printf("Data valida");
        }
    }

    return 0;
}
