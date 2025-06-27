#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dizi[] = {16,12,11,15,0,4,20,18,5,6};
    int toplam = 0;
    int boyut = sizeof(dizi)/sizeof(int);


    printf("\nCift indisli elemanlar;\n");

    for(int i = 0; i < boyut; i++)
    {
        if(i % 2 == 0)
        {
                printf("dizi[%d] -> %d\n", i,dizi[i]);
                toplam = toplam + (dizi[i]*dizi[i]);
        }
    }

    printf("\nCift indisli elemanlarin karesinin toplami: %d\n", toplam);

    return 0;
}
