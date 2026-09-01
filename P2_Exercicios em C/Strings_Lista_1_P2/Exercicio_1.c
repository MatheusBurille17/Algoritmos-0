#include <stdio.h>

void Zerarvetor(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = 0;
    }
}

int main(void)
{
    char repete;

    do
    {
        char str[100];
        int vetVogais[5], i;

        printf("Informe um texto com ate 100 caracteres: ");
        gets(str);

        Zerarvetor(vetVogais, 5);

        while(str[i] != '\0')
        {
            switch(str[i])
            {
                case 'a':
                case 'A':
                    vetVogais[0]++;
                    break;
                case 'e':
                case 'E':
                    vetVogais[1]++;
                    break;
                case 'i':
                case 'I':
                    vetVogais[2]++;
                    break;
                case 'o':
                case 'O':
                    vetVogais[3]++;
                    break;
                case 'u':
                case 'U':
                    vetVogais[4]++;
                    break;
            }
            i++;
        }

        printf("\nVOGAL\tQUANTIDADE\n");
        printf("====================\n");
        printf("A/a\t    %d\n", vetVogais[0]);
        printf("E/e\t    %d\n", vetVogais[1]);
        printf("I/i\t    %d\n", vetVogais[2]);
        printf("O/o\t    %d\n", vetVogais[3]);
        printf("U/u\t    %d\n", vetVogais[4]);


        printf("\n\nDeseja repetir o codigo? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');

    return 0;
}
