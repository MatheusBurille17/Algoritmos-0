#include <stdio.h>

int main(void)
{
    char ch;
    int contPar=0;

    printf("Digite caracteres (digite '0' para parar):\n");

    do//Ler caracteres até ch='0'
    {
        setbuf(stdin, NULL);
        scanf("%c", &ch);

        if(ch!='0')
        {
            printf("Caractere: '%c' ", ch);
            printf("| ASCII: %d ", ch);

            if(ch%2==0)
            {
                printf("==> par\n");
                contPar++;
            }
            else
            {
                printf("==> impar\n");
            }
        }
    }while(ch!='0');

    printf("\nTotal de caracteres com valor ASCII par: %d", contPar);


    return 0;
}
