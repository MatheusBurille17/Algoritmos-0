#include <stdio.h>

int main(void)
{
    char repetir;
    int num, i, j;

    do//Repetir a execução do programa
    {

        do//Validar a entrada
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);

            if(num<=0)
            {
                printf("Valor invalido!");
            }
        }while(num<=0);

        for(i=1; i<=num; i++)
        {
            for(j=2; j<=num; j++)
            {
                printf("%d ", i);
            }

            printf("\n");
        }




        printf("\nDeseja repetir a execucao do programa (S/N): ");
        setbuf(stdin, NULL);
        scanf("%c", &repetir);

    }while(repetir == 's' || repetir == 'S');




    return 0;
}
