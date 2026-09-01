#include <stdio.h>

int main(void)
{
    char repetir;

    do
    {
        int num, n, contImpares=0, i=1, somaTodos=0;
        float media;

        do
        {
            printf("Informe o numero de imapares que deseja mostrar: ");
            scanf("%d", &num);
        }while(num<0);

        printf("Quantos impares por linha deseja mostrar: ");
        scanf("%d", &n);

        do
        {
            printf("%d\t", i);
            somaTodos= somaTodos + i;
            contImpares++;
            i = i + 2;

            if(contImpares%n==0)
            {
                printf("\n");
            }

        }while(contImpares<num);

        media = (float)somaTodos/contImpares;

        printf("\nA media dos impares eh: %.2f", media);

        printf("\nDeseja repetir a execucao do programa (S ou N): ");
        setbuf(stdin, NULL);
        scanf("%c", &repetir);
    }while(repetir=='S' || repetir=='s');

    return 0;
}
