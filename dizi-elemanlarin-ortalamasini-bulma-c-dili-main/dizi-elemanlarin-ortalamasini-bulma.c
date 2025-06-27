#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5] = {3,3,3,3,3};
    double toplam = 0;
    int boyut = sizeof(dizi)/sizeof(int); //Tek boyutlu dizide eleman sayisini yazan kod


    for(int i = 0; i < boyut; i++)
    {
        //printf("%d.eleman -> %d\n", i+1,dizi[i]); elemanlari alt ata yazd�ran kod
        toplam = toplam + dizi[i];
    }

    printf("Elemanlarin Ortalamsi: %.2lf\n",  toplam/boyut);

    return 0;
}
