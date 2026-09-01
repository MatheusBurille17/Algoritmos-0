#include <stdio.h>

int main(void)
{
    char str[50];
    int i;

    printf("Informe um texto com ate 50 caracteres: ");
    gets(str);

    for(i=0; str[i]!= '\0'; i++)
    {
        if(str[i] != ' ')
        {
            printf("%c", str[i]);
        }
        else if(str[i] == ' ' && str[i+1] != ' ')
        {
            printf("\n");
        }
    }

    return 0;
}
