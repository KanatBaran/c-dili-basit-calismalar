#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int kalan;
    int deger;

    printf("Sayi Giriniz:");
    scanf("%d", &sayi);

    for( deger=0; 0 < sayi; deger++ )
    {
    kalan = sayi % 10;
    sayi = sayi - kalan;
    sayi = sayi / 10;
    }

    printf("Basamak Sayisi:%d", deger);

    return 0;
}
