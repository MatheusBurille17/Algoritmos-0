#include <stdio.h>

int main(void)
{
    char cat, M;

    printf("Informe um caracter: ");
    scanf("%c", &cat);

    if(cat >= 97 && cat <= 122)
    {
        M = cat - 32;

        printf("O caractere digitado pertence ao alfabeto.\n", M);

        switch(M)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("'%c' eh uma vogal", M);
            break;
            default:
                printf("'%c' eh uma consoante", M);
        }

    }
    else
    {
        printf("O caractere digitado nao pertence ao alfabeto.");
    }

    return 0;
}
