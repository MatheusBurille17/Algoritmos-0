#include <stdio.h>

int main(void)
{
    char str[50];
    int i=0, k=0, cont;
    int vetor[50];

    printf("Informe um texto: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i]==' ')
        {
            cont++;
        }

        if(str[i]==' ' && str[i+1]!=' ')
        {
            vetor[k] = cont;
            k++;
            cont = 0;
        }
        i++;
    }

    printf("\n=== VETOR ===\n");
    for(i=0; i<k; i++)
    {
        printf("%d  ", vetor[i]);
    }

    return 0;
}
