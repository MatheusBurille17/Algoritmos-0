#include <stdio.h>

int main(void)
{
    char ch='#';
    int contPares=0;

    while(ch != '0')
    {
        printf("Informe um caractere: ");
        setbuf(stdin, NULL);
        scanf("%c", &ch);

        if(ch != '0')//se o caracter for diferente de  '0' faz o que esta no if
        {
            printf("Caracetere: '%c' | ASCII: %d ==> ", ch, ch);

            if(ch%2==0)
            {
                printf("par\n");
                contPares++;
            }
            else
            {
                printf("impar\n");
            }
        }
    }

    printf("\n Total de caracteres com valor ASCII par: %d\n", contPares);

    return 0;
}
