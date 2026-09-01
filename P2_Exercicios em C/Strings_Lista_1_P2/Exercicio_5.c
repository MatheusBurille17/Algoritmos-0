ma#include <stdio.h>

int main(void)
{
    char str[45];
    int i, contLetras=0, contNum=0;

    printf("Informe uma palavra: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            contLetras++;
        }
        else if( str[i] <= '9' && str[i] >= '0')
        {
            contNum++;
        }
    }

    printf("Existem %d caracteres alfabeticos no texto.\n", contLetras);
    printf("Existem %d digitos numericos no texto.\n", contNum);

    return 0;
}
