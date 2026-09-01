#include <stdio.h>

//MOSTRA VETOR
void mostraVetor(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d  ", vetor[i]);
    }
}

//CONTA ESPACO
int contEspacos(char str[], int vetor[])
{
    int i, j=0, cont=0;

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ' && str[i+1]==' ')
        {
            cont++;
        }
        else if(str[i]==' ' && str[i+1]!=' ')
        {
            cont++;
            vetor[j] = cont;
            j++;
            cont=0;
        }
    }

    return(j);
}
//ORDENA O VETOR
void ordenaVetor(int vetor[], int tamanho)
{
    int aux, i, j;

    for(j=tamanho-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}

int ocorreNoVetor(int vetor[], int tamanho, int valor)
{
    int i, cont=0;

    for(i=0; i<tamanho; i++)
    {
        if(valor == vetor[i])
        {
            cont++;
        }
    }
    return(cont);
}

int main(void)
{
    char repete, str[100];
    int vetor[100], tamanho, valor;

    do
    {
        contaux=0;

        printf("Informe um texto: ");
        setbuf(stdin, NULL);
        gets(str);

        tamanho = contEspacos(str, vetor);

        printf("=== VETOR ===\n");
        mostraVetor(vetor, tamanho);

        ordenaVetor(vetor, tamanho);

        printf("\n=== VETOR ORDENADO===\n");
        mostraVetor(vetor, tamanho);


        for(i=0; i<tamanho; i++)
        {
            valor = vetor[i];

        }
        ocorreNoVetor(vetor, tamanho, valor);



        printf("\n\nDeseja repetir o programa (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);

    }while(repete == 'S' || repete == 's');

    return 0;
}
