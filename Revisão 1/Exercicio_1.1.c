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

void ordernarVetor(int vetor[], int tamanho)
{
    int i, j, aux;

    for(i=tamanho-1; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(vetor[j] > vetor[j+1])
            {
                aux = vetor[j];
                vetor [j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

int main(void)
{
    char repete, str[100];
    int tamanho=100, valor, qnt=0, encontrado, i, j;
    int vetor[tamanho], matriz[100][2];

    do
    {
        //Le a string
        printf("Informe um texto: ");
        setbuf(stdin, NULL);
        gets(str);

        //Contar os espaços
        tamanho = contEspacos(str, vetor);

        //Imprime vetor
        printf("\n=== VETOR ===\n");
        mostrarVetor(vetor, tamanho);

        //Ordena o vetor
        ordernarVetor(vetor, tamanho);

        //Imprime o vetor ordenado
        printf("\n=== VETOR ORDENADO ===\n");
        mostrarVetor(vetor, tamanho);

        for(i=0; i<tamanho; i++)
        {
            valor = vetor[i];
            encontrado = 0;

            for(j=0; j<qnt; j++)
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
                matriz[qnt][0] = valor;
                matriz[qnt][1] = 1;
                qnt++;
            }
        }

        //Imprime a matriz
        printf("\n=== MATRIZ ===\n");
        for (i=0; i<qnt; i++)
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
