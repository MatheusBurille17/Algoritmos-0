#include <stdio.h>

int comparaString(char str1[], char str2[])
{
    int i, j, k=0, l=0, valor;
    char aux1[45], aux2[45];

    for(i=0; str1[i] != '\0'; i++)
    {
        if(str1[i] != ' ')
        {
            aux1[k] = str1[i];
            k++;
        }
    }
    aux1[k] = '\0';

    for(j=0; str2[j] != '\0'; j++)
    {
        if(str2[j] != ' ')
        {
            aux2[l] = str2[j];
            l++;
        }
    }
    aux2[l] = '\0';

    if(k != l)
    {
        valor = 0;
    }
    else
    {
        for(k=0; aux1[k] != '\0'; k++)
        {
            valor = 1;
            if(aux1[k] != aux2[k])
            {
                valor = 0;
            }
        }
    }

    return(valor);
}


int main(void)
{
    char str1[45], inversa[45];
    int i, cont=0, k=0;

    printf("Informe uma palavra: ");
    gets(str1);


    for(i=0; str1[i]!='\0'; i++)
    {
        cont++;
    }

    for(i=cont-1; i>=0; i--)
    {
        inversa[k] = str1[i];
        k++;
    }
    inversa[k] = '\0';

    if(comparaString(str1, inversa) == 1)
    {
        printf("Eh palindromo\n");
    }
    else
    {
        printf("Nao eh palindromo\n");
    }


    return 0;
}
