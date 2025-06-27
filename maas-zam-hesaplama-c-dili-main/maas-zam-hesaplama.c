#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Degiskenlerimizi olusturuyoruz.
    int mevcutmaas;
    int cocuksayisi;
    int eskizam;
    int zamorani;

    //Kullanicidan gerekli bilgileri aliyoruz.
    printf("Mevcut maasiniz: ");
    scanf("%d", &mevcutmaas);

    printf("Cocuk sayiniz: ");
    scanf("%d", &cocuksayisi);

    printf("Eski zamminiz: ");
    scanf("%d", &eskizam);


    //mevcut maasina gore zam hesabi yapiyoruz.
    if( mevcutmaas <= 2000 )
    {
        zamorani =  mevcutmaas * 0.20;
    }
    else if(mevcutmaas <= 3000)
    {
        zamorani = mevcutmaas * 0.15;
    }
    else
    {
        zamorani = mevcutmaas * 0.10;
    }

    //cocuk sayisina gore zammini artiriyoruz.
    cocuksayisi = cocuksayisi * 30;
    zamorani = zamorani + cocuksayisi;

    //eski zammi ile yeni zammi karsilastiriyoruz yuksek olani mevcut maasa ekliyoruz.
    if(zamorani > eskizam)
    {
        printf("Yeni zamminiz: %d\n",  zamorani);
        printf("Guncel Maasiniz: %d",  zamorani+mevcutmaas);
    }
    else{
        printf("Yeni Zamminiz: %d\n", eskizam);
        printf("Guncel Maasiniz: %d",  eskizam+mevcutmaas);
    }



    return 0;
}
