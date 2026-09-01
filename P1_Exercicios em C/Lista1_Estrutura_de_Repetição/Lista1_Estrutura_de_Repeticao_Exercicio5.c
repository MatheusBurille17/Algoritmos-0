#include <stdio.h>

int main(void)
{
   int qnt=1, somaM=0, somaF=0, somaI=0, somaTotal;
   char cat;

   while(qnt>0)
   {
       printf("Informe a quantidade: ");
       scanf("%d", &qnt);

       if(qnt>0)
       {
           do
           {
               printf("Informe a categoria (M/F/I): ");
               fflush(stdin);
               scanf("%c", &cat);

           }while(cat != 'M' && cat != 'm' && cat != 'F' && cat != 'f' && cat != 'I' && cat != 'i');

       }
       percM = (float)somaM * 100 / somaTotal;
       percF = (float)somaF * 100 / somaTotal;
       percI = (float)somaI * 100 / somaTotal;

       printf("%f")
   }

    return 0;
}
