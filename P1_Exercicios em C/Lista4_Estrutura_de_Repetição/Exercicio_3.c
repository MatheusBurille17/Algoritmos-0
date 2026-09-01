#include <stdio.h>

int main(void)
{
    char repetir;

    do
    {
        int num, i, j, contP=0;

        do
        {
            printf("Informe um valor entre 2 a 12: ");
            scanf("%d", &num);

            if(num < 2 || num > 12)
            {
                printf("Valor invalido!\n");
            }
        }while(num < 2 || num > 12);

        for(i=1; i<=6; i++)//Dado 1
        {
            for(j=1; j<=6; j++)//Dado 2
            {
                if(i+j==num)
                {
                    printf("%d + %d = %d\n", i, j, num);
                    contP++;
                }
            }
        }

        printf("\nNumero de possibilidade: %d", contP);

        printf("\nDeseja continuar no programa (S/N): ");
        setbuf(stdin, NULL);
        scanf("%c", &repetir);
    }while(repetir=='S' || repetir=='s');


    return 0;
}
