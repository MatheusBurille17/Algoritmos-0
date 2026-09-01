#include <stdio.h>

int main(void)
{
    int dia, mes;

    printf("Informe o dia do seu nascimento: ");
    scanf("%d", &dia);
    printf("Informe o mes do seu nascimento: ");
    scanf("%d", &mes);

    if(mes==12)
    {
        if(dia>=22)
        {
            printf("Capricornio");
        }
        else
        {
            printf("Sagitario");
        }
    }
    else if(mes==1)
    {
        if(dia>=21)
        {
            printf("Aquario");
        }
        else
        {
            printf("Capricornio");
        }
    }
    else if(mes==2)
    {
        if(dia>=20)
        {
            printf("Peixes");
        }
        else
        {
            printf("Aquario");
        }
    }
    else if(mes==3)
    {
        if(dia>=21)
        {
            printf("Aries");
        }
        else
        {
            printf("Peixes");
        }
    }
    else if(mes==4)
    {
        if(dia>=21)
        {
            printf("Touro");
        }
        else
        {
            printf("Aries");
        }
    }
    else if(mes==5)
    {
        if(dia>=21)
        {
            printf("Gemeos");
        }
        else
        {
            printf("Touro");
        }
    }
    else if(mes==6)
    {
        if(dia>=21)
        {
            printf("Cancer");
        }
        else
        {
            printf("Gemeos");
        }
    }
    else if(mes==7)
    {
        if(dia>=22)
        {
            printf("Leao");
        }
        else
        {
            printf("Cancer");
        }
    }
    else if(mes==8)
    {
        if(dia>=23)
        {
            printf("Virgem");
        }
        else
        {
            printf("Leao");
        }
    }
    else if(mes==9)
    {
        if(dia>=23)
        {
            printf("Libra");
        }
        else
        {
            printf("Virgem");
        }
    }
    else if(mes==10)
    {
        if(dia>=23)
        {
            printf("Escorpiao");
        }
        else
        {
            printf("Libra");
        }
    }
    else if(mes==11)
    {
        if(dia>=22)
        {
            printf("Sagitario");
        }
        else
        {
            printf("Escorpiao");
        }
    }
    return 0;
}
