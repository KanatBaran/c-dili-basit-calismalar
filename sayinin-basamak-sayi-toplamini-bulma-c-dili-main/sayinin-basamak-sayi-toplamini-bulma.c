#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int kalan = 0;
    int deger = 0;

    printf("Sayi Giriniz: ");
    scanf("%d", &sayi);

    while( 0 < sayi )
    {
        kalan = sayi % 10;
        sayi = sayi - kalan;
        sayi =  sayi / 10;
        deger = deger + kalan;
    }

    printf("sonuc: %d", deger);

    return 0;
}
