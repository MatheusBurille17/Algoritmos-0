#include <stdio.h>

int main(void)
{
    int num, i, j;
    char ch;

    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("Informe um caractere: ");
    setbuf(stdin, NULL);
    scanf("%c", &ch);

    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num; j++)
        {
            printf("%c\t", ch);
        }

        printf("\n");
    }



    return 0;
}
