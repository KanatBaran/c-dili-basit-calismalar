#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dizi[10] = {34,26,38,5,42,11,3,15,28,12};
    int boyut = sizeof(dizi)/sizeof(int);
    int veri = 0;

    printf("\nOlusturulan dizimiz: ");
    for(int i = 0; i < boyut; i++)
    {
        printf("%d ", dizi[i]);
    }

    for(int j = 0; j < boyut; j++)
    {
        for(int l = j +1; l < boyut; l++)
            {
                if(dizi[j] > dizi[l])
                {
                    veri = dizi[l];
                    dizi[l] = dizi[j];
                    dizi[j] = veri;
                }
            }
    }

    printf("\n\nDuzenlenmis dizimiz:  ");
    for(int k = 0; k < boyut;  k++)
    {
        printf("%d ", dizi[k]);
    }

    return 0;
}
