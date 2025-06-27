#include <stdio.h>
#include <stdlib.h>


int main()
{

    int sayi,i,sayac = 0;

    printf("sayi gir: ");
    scanf("%d", &sayi);

    if(sayi >= 2)
    {
        int durum = 1;
        while(durum == 1)
        {
            for(i = 1; i<=sayi; i++)
            {
                if(sayi % i == 0)
                {
                    sayac = sayac + 1;
                }
            }

            if(sayac > 2)
            {
                printf("Sayiniz %d asal degildir.Sayi degerini bir buyutuyorum > %d", sayi,sayi+1);
                sayi = sayi + 1;
                durum = 1;
                sayac = 0;
            }
            else
            {
                printf("%d sayiniz asaldir.", sayi);
                durum = 0;
                sayac = 0;
            }
            printf("\n");
        }
    }
    else
    {
        printf("Girdiginiz sayi asal degildir.");
    }

    return 0;
}
