#include <stdio.h>

int contadorPalavras(char str[])
{
    int i, cont=0;

    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]==' ' && str[i+1]!=' ') || str[i+1]=='\0')
        {
            cont++;
        }
    }
    return(cont);
}

void iniciaisPalavras(char str[], char iniciais[])
{
    int i, j=0;

    for(i=0; str[i]!='\0'; i++)
    {
        if(i==0 || (str[i-1]==' ' && str[i]!=' '))
        {
            iniciais[j] = str[i];
            j++;
            iniciais[j] = ' ';
            j++;
        }
    }

}

void finalPalavras(char str[], char ultimo[])
{
    int i, j=0;

    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]!=' ' && str[i+1]==' ') || str[i+1]=='\0')
        {
            ultimo[j] = str[i];
            j++;
            ultimo[j] = ' ';
            j++;
        }
    }

}

void primeiraPalavras(char str[], char palavra[])
{
    int i, j=0;

    for(i=0; str[i]!=' '; i++)
    {
        palavra[j] = str[i];
        j++;
    }

}

int main(void)
{
    char str[100];

    printf("Informe uma string de ate 100 caracteres: ");
    gets(str);

    char iniciais[contadorPalavras(str)], ultimo[contadorPalavras(str)], palavra[44];
    iniciaisPalavras(str, iniciais);
    finalPalavras(str, ultimo);
    primeiraPalavras(str, palavra);



    printf("\"%s\" possui %d palavras.\n", str, contadorPalavras(str));
    printf("Primeiro caractere de cada palavra da string: %s\n", iniciais);
    printf("Ultimo caractere de cada palavra da string: %s\n", ultimo);
    printf("\nPrimeira palavra da string: %s\n", palavra);

    return 0;
}
