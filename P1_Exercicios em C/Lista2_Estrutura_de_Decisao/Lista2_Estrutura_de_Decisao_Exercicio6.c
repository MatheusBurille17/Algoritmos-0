#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num, numMagico;

    srand(time(NULL));

    numMagico = rand()%10;

    printf("Adivinhe o numero magico entre 0 e 10: ");
    scanf("%d", &num);

    if(numMagico == num)
    {
        printf("Certo! %d eh o numero magico!\n", num);
        printf("O numero magico eh %d", numMagico);
    }
    else if(num > numMagico)
    {
        printf("Errado, muito alto!\n");
        printf("Valor do numero magico era: %d", numMagico);
    }
    else if(num < numMagico)
    {
        printf("Errado, muito baixo!\n");
        printf("Valor do numero magico era: %d", numMagico);
    }


    return 0;
}
