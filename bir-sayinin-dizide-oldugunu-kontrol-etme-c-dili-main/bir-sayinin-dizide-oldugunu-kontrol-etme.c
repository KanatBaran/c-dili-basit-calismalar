#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10] = {34,26,38,5,42,11,3,15,28,12};
    int sayi, bulundu = 0;
    int boyut = sizeof(dizi)/sizeof(int);

    printf("Aramak istediginiz sayiyi giriniz: ");
    scanf("%d", &sayi);

    for(int i = 0; i < boyut; i++)
    {
        if(dizi[i] == sayi)
        {
            bulundu = 1;
            break;
        }
    }

    if(bulundu == 1)
    {
        printf("Girdiginiz sayi elemanlar arasinda mevcuttur.");
    }
    else{
        printf("Girdiginiz sayi elemanlar arasinda YOK.");
    }


    return 0;
}
