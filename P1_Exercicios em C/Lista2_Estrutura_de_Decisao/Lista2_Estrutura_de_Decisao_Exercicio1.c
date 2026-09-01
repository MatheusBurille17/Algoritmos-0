#include <stdio.h>

int main(void)
{
    float nota1, nota2, nota3, media, recuperacao, mediaFinal;

    printf("Informe sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe sua terceira nota: ");
    scanf("%f", &nota3);

    media = ((nota1*1)+(nota2*3)+(nota3*4))/1+3+4;

    if(media >= 6 && media <= 10)
    {
        printf("Aprovado!");
    }
    else if(media >=4 && media <= 5.9)
    {
        printf("Está de recuperacao!");
        printf("Informar nota da recuperacao: ");
        scanf("%f", &recuperacao);

        mediaFinal = (media+recuperacao)/2;

        if(media < 6)
        {
            printf("Reprovado apos recuperacao!");
        }
        else if(media >= 6)
        {
            printf("Aprovado apos a recuperacao!");
        }
    }
    else if(media < 4)
    {
        printf("Reprovado antes da recuperacao!");
    }

    return 0;
}
