o#include <stdio.h>

int main(void)
{
    char str[50], palavra[45];
    int i=0, j=0;

    printf("Informe um texto: ");
    gets(str);

    while(str[i] != ' ')
    {
        palavra[j] = str[i];
        i++;
        j++;
    }
    palavra[j] = '\0';

    printf("A string copiada eh: %s", palavra);

    return 0;
}
