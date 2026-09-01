#include <stdio.h>

int main(void)
{
    float media, rec;

    printf("Informe a media final: ");
    scanf("%f", &media);

    if(media >= 6 && media <= 10)
    {
        printf("Aprovado!!\n");
    }
    else if(media >= 0 && media < 6)
    {
        printf("Em recuperacao!\n");

        printf("Qual eh a nota da recuperacao: ");
        scanf("%f", &rec);

        if(rec>=6 && rec<=10)
        {
            printf("Aprovado apos a recuperacao!\n");
        }
        else if(rec>=0 && rec<6)
        {
            printf("Reprovado apos a recuperacao!");
        }
        else
        {
            printf("Nota invalida!");
        }
    }
    else
    {
        printf("Nota invalida!");
    }




    return 0;
}
