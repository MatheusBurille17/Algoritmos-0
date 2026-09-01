#include <stdio.h>

int contEspacos(char str[], int vetor[])
{
    int i=0, j=0, cont=0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ' && str[i+1] == ' ')
        {
            cont++;
        }
        else if(str[i] == ' ' && str[i+1] != ' ' || str[i+1] == '\0')
        {
            cont++;
            vetor[j] = cont;
            cont = 0;
            j++;
        }
        i++;
    }

    return(j);
}

void mostrarVetor(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d   ", vetor[i]);
    }
}

int ordernarVetor(int vetor[], int tamanho)
{
    int i, j, aux;

    for(j=tamanho-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
}

int main(void)
{
    //Declaracao de variaveis
    char repete, str[100];
    int tamanho = 100, i=0, j=0, valor, encontrado, qtd=0;
    int vetor[tamanho], matriz[100][2];

    do
    {
        //Ler a string
        printf("Informe um texto: ");
        setbuf(stdin, NULL);
        gets(str);

        //Contar os espacos e passa o tamanho para o vetor
        tamanho = contEspacos(str, vetor);

        //Imprime o vetor
        printf("\n\n=== VETOR ===\n");
        mostrarVetor(vetor, tamanho);

        //Ordena o vetor
        ordernarVetor(vetor, tamanho);

        //Imprime o vetor ordenado
        printf("\n\n=== VETOR ORDENADO ===\n");
        mostrarVetor(vetor, tamanho);

        //Matriz
        for(i=0; i<tamanho; i++)
        {
            valor = vetor[i];
            encontrado = 0;

            for(j=0; j<qtd; j++)
            {
                if(matriz[j][0] == valor)
                {
                    matriz[j][1]++;
                    encontrado = 1;
                    break;
                }
            }

            if(encontrado == 0)
            {
                matriz[qtd][0] = valor;
                matriz[qtd][1] = 1;
                qtd++;
            }
        }

        //Imprime a matriz
        printf("\n=== MATRIZ ===\n");
        for (i=0; i<qtd; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("%d\t", matriz[i][j]);
            }
            printf("\n");
        }

        printf("\n\nDeseja repetir o programa(S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');



    return 0;
}
