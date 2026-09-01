#include <stdio.h>

int main(void)
{
    char repetir;
    int num, i, j, cont, maior;

    do//Repetir a execição do programa
    {
        maior=0;//Inicializando em 0

        do //Validar a entrada
        {

            printf("Informe um numero entre 2 e 100: ");
            scanf("%d", &num);

            if(num<2 || num>100)
            {
                printf("Valor invalido!\n");
            }

        }while(num<2 || num>100);

        for(i=1; i<=11; i++)
        {
            printf("%d ==> ", num);

            cont=0;//Inicializa cont em 0

            //Calcula e mostra os divisores do num;
            for(j=1; j<=num; j++)
            {
                if(num%j==0)
                {
                    printf("%d, ", j);
                    cont++;
                }
            }
            printf("%d divisores.\n", cont);

            if(cont>maior)
            {
                maior = cont;
            }
            num++;
        }

        printf("\nA maior quantidade de divisores eh: %d", maior);
        printf("\nDeseja repetir a execucao (S/s): ");
        setbuf(stdin, NULL);
        scanf("%c", &repetir);

    }while(repetir == 's' || repetir == 'S');

    return 0;
}
