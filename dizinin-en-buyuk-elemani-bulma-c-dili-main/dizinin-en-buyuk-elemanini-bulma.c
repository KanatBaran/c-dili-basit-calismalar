#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10] = {34,26,38,5,42,11,3,15,28,12};
    int boyut = sizeof(dizi)/sizeof(int);
    int buyuk = 0;

    buyuk = dizi[0];

    for(int i = 0; i < boyut; i++)
    {

        if(dizi[i] > buyuk)
        {
            buyuk = dizi[i];
        }

    }

    printf("\nEn buyuk eleman: %d\n", buyuk);

    return 0;
}
