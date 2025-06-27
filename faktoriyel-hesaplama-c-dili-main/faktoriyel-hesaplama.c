#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int carpim = 1;
    int sayac;

    printf("Faktoriyeli alinacak sayi:");
    scanf("%d", &sayi);

    for(sayac = 1; sayac <= sayi; sayac++)
    {
        carpim = carpim * sayac;
    }

    printf("Sonuc: %d", carpim);

    return 0;
}
