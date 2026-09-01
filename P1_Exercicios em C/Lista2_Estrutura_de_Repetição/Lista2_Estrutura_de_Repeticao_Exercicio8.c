#include <stdio.h>

int main(void)
{
    int i, contMultiplo10, SomaMultiplo10;
    float mediaDivisivel4, mediaMultiplo10;

    for(i=500; i>=0; i--)
    {
        if(i%4==0 || i%10==0)
        {
            printf("%d\t", i);


            if(i%10==0)
            {
                contMultiplo10++;
                SomaMultiplo10 = SomaMultiplo10 + i;
            }
        }
    }

    mediaMultiplo10 = SomaMultiplo10/contMultiplo10;

    printf("\nMedia: %f", mediaMultiplo10);


    return 0;
}
