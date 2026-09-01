#include <stdio.h>

int tamanhoString(char str[])
{
    int i=0;

    while(str[i]!= '\0')
    {
        i++;
    }
    return(i);
}

int tamanhoStringSemEspacos(char str[])
{
    int i=0, contS=0;

    while(str[i]!= '\0')
    {
        if(str[i] != ' ')
        {
            contS++;
        }
        i++;
    }
    return(contS);
}

void transformadorMaiusculo(char str[])
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i]= str[i]-32;
        }
    }
}

void transformadorMinusculo(char str[])
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] >= 'am' && str[i] <= 'z')
        {
            str[i]+=32;
        }
    }
}

int main(void)
{
    char nome[35];
    int i=0, cont=0;

    printf("Informe o seu nome: ");
    gets(nome);

    while(nome[i] != '\0')
    {
        switch(nome[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                cont++;
        }
        i++;
    }

    printf("Quantidade de vogais: %d\n", cont);
    printf("Tamanho da string: %d\n", tamanhoString(nome));
    printf("Tamanho da string sem espaços: %d\n", tamanhoStringSemEspacos(nome));

    transformadorMaiusculo(nome);
    printf("Maiusculo: %s\n", nome);
    return 0;
 }
