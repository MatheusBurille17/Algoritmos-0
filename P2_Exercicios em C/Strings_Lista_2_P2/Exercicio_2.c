#include <stdio.h>

int vereficaSubstring(char str1[], char str2[])
{
    int i=0, j, resultado=0;

    while(str1[i] != '\0')
    {
        if(str1[i] == str2[0])
        {
            j=0;
            while(str1[i] != '\0' && str2[j] != '\0')
            {
                if(str1[i] != str2[j])
                {
                    break;
                }
                i++;
                j++;
            }

            if(str2[j] == '\0')
            {
                resultado = 1;
            }
        }
        i++;
    }

    return(resultado);
}

int main(void)
{
    char str[50], sub[50];

    printf("Informe uma string: ");
    gets(str);
    printf("Informe uma substring: ");
    gets(sub);

    if(vereficaSubstring(str, str) == 1)
    {
        printf("A substring \"%s\" faz parte da string \"%s\".", sub, str);
    }

    return 0;
}
