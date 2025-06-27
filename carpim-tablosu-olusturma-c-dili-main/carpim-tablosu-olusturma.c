#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayac;
    int sayi;

    printf("Sayi Giriniz:");
    scanf("%d", &sayi);

    for( sayac = 1;  sayac <= 10; sayac++ )
    {
        printf("%d x %d = %d\n", sayi,sayac,sayi*sayac);
    }

    return 0;
}
