#include <stdio.h>

void juntadorString(char str1[], char str2[], char strJ[])
{
    int i, j, k=0;

    for(i=0; str1[i] != '\0'; i++)
    {
            strJ[k] = str1[i];
            k++;
    }
    for(j=0; str2[j] != '\0'; j++)
    {
            strJ[k] = str2[j];
            k++;
    }

    strJ[k] = '\0';
}


int main(void)
{
    char str1[50], str2[50], strJ[50];

    printf("Informe um texto: ");
    gets(str1);

    printf("Informe o segundo texto: ");
    gets(str2);

    juntadorString(str1, str2, strJ);

    printf("%s", strJ);



    return 0;
}
