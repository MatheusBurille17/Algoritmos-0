#include <stdio.h>

int main(void)
{
    int qntPessoas;
    float valorIngresso=15, valorRecebido;

    do
    {
        printf("Informe a quantidade de  pessoas: ");
        scanf("%d", &qntPessoas);
    }while(qntPessoas < 0);

    printf("\nVALOR DO INGRESSO\t");
    printf("VALOR TOTAL RECEBIDO\n");

    while(valorIngresso <= 20)
    {
        valorRecebido = qntPessoas * valorIngresso;

        printf("R$ %.2f\t\t", valorIngresso);
        printf("R$ %.2f\n", valorRecebido);


        valorIngresso += 0.5;
    }

    return 0;
}
