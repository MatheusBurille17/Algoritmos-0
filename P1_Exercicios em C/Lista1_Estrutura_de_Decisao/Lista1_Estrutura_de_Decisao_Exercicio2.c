#include <stdio.h>

int main(void)
{
    int mes;

    printf("Informe o mes: ");
    scanf("%d", &mes);



    if(mes>0 && mes<=12)
    {
        if(mes>=1 && mes<=3)
        {
            printf("%d, primeiro trimestre", mes);
        }
        else if(mes>=4 && mes<=6)
        {
            printf("%d, segundo trimestre", mes);
        }
        else if(mes>=7 && mes<=9)
        {
            printf("%d, terceiro trimestre", mes);
        }
        else if(mes>=10 && mes<=12)
        {
            printf("%d, quarto trimestre", mes);
        }
    }
    else
    {
        printf("%d, numero digitado nao corresponde a um mes do ano!", mes);
    }


    return 0;
}
