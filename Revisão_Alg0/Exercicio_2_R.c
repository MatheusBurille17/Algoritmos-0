#include <stdio.h>

int contPalavras(char str[])
{
    int i=0, cont=0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ' && str[i+1] != ' ')
        {
            cont++;
        }
        i++;
    }

    return(cont);
}

void contLetras(char str[], int vetor[])
{
    int i=0, j=0, cont=0;

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i+1] != ' ' && str[i+1] != '\0')
        {
            cont++;
        }
        else if(str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0'))
        {
            cont++;
            vetor[j] = cont;
            j++;
            cont = 0;
        }
        i++;
    }
}

void ordenarVetor(int vetor[], int tamanho)
{
    int i, j, aux=0;

    for(i=tamanho-1; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(vetor[j] > vetor[j+1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

int contDiv(int valor)
{
    int i, j=0,cont = 0;

    for(i=0; i<=valor; i++)
    {
        if(valor % i == 0)
        {
            j++;
        }
    }
    return(j);
}

int ehPrimo(int valor)
{
    int i;

    if (valor<2)
    {
        return 0;
    }

    for(i=2; i*i<=valor; i++)
    {
        if(valor % i == 0)
        {
            return 0;
        }
    }

    return 1;
}


int main(void)
{
    //Variaveis
    char repete, str[100];
    int tamanho = 100, i, j=0;
    int vetor[tamanho], matriz[100][3];


    do//repetição de programa
    {
        //Recebe a string
        printf("Informe a string: ");
        setbuf(stdin, NULL);
        gets(str);

        contLetras(str, vetor);

        tamanho = contPalavras(str);

        //Saída
        printf("A string tem %d palavras.\n", contPalavras(str));

        printf("\n=== VETOR ===\n");
        for(i=0; i<tamanho; i++)
        {
            printf("%d  ", vetor[i]);
        }

        ordenarVetor(vetor, tamanho);

        printf("\n=== VETOR ORDENADO ===\n");
        for(i=0; i<tamanho; i++)
        {
            printf("%d  ", vetor[i]);
        }

        for (i=0; i<tamanho; i++)
        {
            if (i == 0 || vetor[i] != vetor[i-1])
            {
                matriz[j][0] = vetor[i];
                matriz[j][1] = contDiv(vetor[i]);
                j++;
            }
        }
        printf("\nMatriz (Valor | Divisores | Primo?)\n");
        for (i=0; i<j; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("%d\t", matriz[i][j]);
            }
            if(ehPrimo(matriz[i][0]) == 1)
            {
                printf("SIM");
            }
            else
            {
                printf("NAO");
            }
            printf("\n");
        }


        printf("\n\nDeseja repetir o programa (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');

    return 0;
}
