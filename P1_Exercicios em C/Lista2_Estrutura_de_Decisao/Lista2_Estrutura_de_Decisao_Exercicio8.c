#include <stdio.h>

int main(void)
{
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Informe a primeira data abaixo\n");
    printf("Dia: ");
    scanf("%d", &dia1);
    printf("Mes: ");
    scanf("%d", &mes1);
    printf("Ano: ");
    scanf("%d", &ano1);

    printf("Informe a segunda data abaixo:\n");
    printf("Dia: ");
    scanf("%d", &dia2);
    printf("Mes: ");
    scanf("%d", &mes2);
    printf("Ano: ");
    scanf("%d", &ano2);

    if(ano1 > ano2)
    {
        printf("A maior data eh %02d/%02d/%d", dia1, mes1, ano1);
    }
    else if(ano1 < ano2)
    {
        printf("A maior data eh %02d/%02d/%d", dia2, mes2, ano2);
    }
    else if(ano1 == ano2)
    {
        if(mes1 > mes2)
        {
            printf("A maior data eh %02d/%02d/%d", dia1, mes1, ano1);
        }
        else if(mes1 < mes2)
        {
            printf("A maior data eh %02d/%02d/%d", dia2, mes2, ano2);
        }
        else if(mes1 == mes2)
        {
            if(dia1 > dia2)
            {
                printf("A maior data eh %02d/%02d/%d", dia1, mes1, ano1);
            }
            else if(dia1 < dia2)
            {
                printf("A maior data eh %02d/%02d/%d", dia2, mes2, ano2);
            }
            else if(dia1 = dia2)
            {
                printf("As datas sao iguais.");
            }
        }

    }

    return 0;
}
