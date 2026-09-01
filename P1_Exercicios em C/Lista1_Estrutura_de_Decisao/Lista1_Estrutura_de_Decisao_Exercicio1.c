#include <stdio.h>

int main(void)
{
    int idade;

    printf("Informe a idade do nosso craque: ");
    scanf("%d", &idade);

    if (idade>0 && idade<150)
    {
        if(idade>=0 && idade<=4)
        {
                printf("%d anos, AINDA EH CEDO PARA JOGAR!", idade);
        }
        else if(idade>=5 && idade<=10)
        {
            printf("%d anos, Sub-10", idade);
        }
        else if(idade>=11 && idade<=17)
        {
            printf("%d anos, Sub-17", idade);
        }
        else if(idade>=18 && idade<=20)
        {
            printf("%d anos, Sub-20", idade);
        }
        else if(idade>=21 && idade<=35)
        {
            printf("%d anos, Profissional", idade);
        }
        else if(idade>=36 && idade<=55)
        {
            printf("%d anos, Master", idade);
        }
        else if(idade>=56)
        {
            printf("%d anos, MELHOR APOSENTAR AS CHUTEIRAS!", idade);
        }
    }
    else
    {
        printf("OPCAO INVALIDA!");
    }

    return 0;
}
