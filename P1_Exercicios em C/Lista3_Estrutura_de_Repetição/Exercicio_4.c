#include <stdio.h>

int main(void)
{
    char cat;
    int contMaiusculo, contMinusculo, Ncaracter=0;

    do
    {
        printf("Informe caractere: ");
        setbuf(stdin, NULL);
        scanf("%c", &cat);

        if(cat>=65 && cat<=90)
        {
            contMaiusculo++;
        }
        else if(cat>=97 && cat<=122)
        {
            contMinusculo++;
        }
        else if(cat!='0')
        {
            Ncaracter++;
        }
    }while(cat!='0');


    printf("\nForam informadas %d letras maiusculas.\n", contMaiusculo);
    printf("Foram informadas %d letras minusculas.\n", contMinusculo);
    printf("Foram informadas %d caracteres que nao sao letras.\n", Ncaracter);

    return 0;
}
