#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade, tempo_servico, aposentadoria;

    printf("Digite seu sexo(m/M)(f/F): ");
    scanf("%c", &sexo);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite o seu tempo de servico: ");
    scanf("%d", &tempo_servico);

    if(sexo == 'm' || sexo == 'M') {
        if(idade >= 62 && tempo_servico >= 35) {
            printf("O senhor pode se aposentar!");
        } else {
            printf("O senhor ainda nao pode se aposentar!");        }
    } else if(sexo == 'f' || sexo == 'F') {
        if(idade >= 60 && tempo_servico == 30) {
            printf("A senhora pode se aposentar!");
        } else {
            printf("A senhora ainda nao pode se aposentar!");
        }
    } else {
        printf("Sexo invalido!");
    }

    return 0;
}
