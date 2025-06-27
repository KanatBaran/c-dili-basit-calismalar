#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi;
    int sayac;
    int toplam = 0;


    printf("Sayi giriniz:");
    scanf("%d",  &sayi);


    for(sayac = 1; sayac <= sayi; sayac++)
    {
        toplam = toplam + sayac;
    }

    printf("Toplam Sayiniz: %d", toplam);

    return 0;
}
