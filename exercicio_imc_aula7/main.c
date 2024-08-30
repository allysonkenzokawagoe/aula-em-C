#include <stdio.h>
#include <stdlib.h>

int main()
{
    double altura, peso_ideal;
    char sexo;

    printf("Digite seu sexo com as siglas M e F: ");
    scanf("%c", &sexo);
    printf("Digite sua altura em metros: ");
    scanf("%lf", &altura);

    if(sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal eh de: %.02lf", peso_ideal);
    } else if(sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh de: %0.02lf", peso_ideal);
    } else {
        printf("Não foi possivel identificar o seu sexo!");
    }



    return 0;
}
