#include <stdio.h>

int main(void)
{
    int limiteI, limiteS, i, j, contDiv, soma, unidade, dezena, centena;

    do
    {

        printf("Digite um valor positivo para o limite inferior do intervalo: ");
        scanf("%d", &limiteI);

        if(limiteI>=0)
        {
            printf("Digite um valor positivo para o limite superior do intervalo: ");
            scanf("%d", &limiteS);
        }

        if(limiteI < 0 || limiteS < 0)
        {
            printf("Valor invalido! (Os limites nao podem ser negativos)\n");
        }
        else if(limiteI > limiteS)
        {
            printf("Valor invalido! (O limite inferior nao pode ser maior que o limite superior)\n");
        }

    }while((limiteI < 0 || limiteS < 0) || (limiteS < limiteI));

    for(i=limiteI; i<=limiteS; i++)
    {
        contDiv=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                contDiv++;
            }
        }
        if(contDiv==2)
        {
            printf("Primo %d => ", i);

            centena = i/100;
            dezena = i%100/10;
            unidade = i%10;

            soma = centena + dezena + unidade;

            printf("Soma dos digitos = %d\n", soma);
        }

    }



    return 0;
}
