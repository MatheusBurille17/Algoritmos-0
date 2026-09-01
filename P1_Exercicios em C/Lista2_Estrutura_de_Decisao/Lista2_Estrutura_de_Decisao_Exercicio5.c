#include <stdio.h>

int main(void)
{
    int data, dia, mes, ano;

    printf("Informe uma data: ");
    scanf("%d", &data);

    dia = data/1000000;
    mes = (data%1000000)/10000;
    ano = data%10000;

    if(ano > 0 && ano < 9999)
    {
        if(mes >= 1 && mes <=12)
        {
            if(dia >= 1 && dia <= 31)
            {
                printf("Data eh valida");
            }
            else
            {
                printf("Data eh invalida");
            }
        }
        else
            {
                printf("Data eh invalida");
            }
    }
    else
            {
                printf("Data eh invalida");
            }

    return 0;
}
