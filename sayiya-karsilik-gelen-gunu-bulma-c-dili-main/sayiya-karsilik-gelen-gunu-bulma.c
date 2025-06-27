#include <stdio.h>
#include <stdlib.h>

int main()
{

    int gun;


    //Kullanicidan gun sayisi aliyoruz.
    printf("Gun sayisi giriniz:");
    scanf("%d", &gun);


    //Alinan gun sayisina karsilik gelen gunu yazdiriyoruz.
    switch(gun) {
    case 1 :
        printf("\n 1 Sayisina karsilik gelen gun  Pazartesidir.\n");
    break;

    case 2 :
        printf("\n 2 Sayisinia karsilik gelen gun Salidir.\n");
    break;

    case 3 :
        printf("\n 3 Sayisina karsilik gelen gun Carsambadir.\n");
    break;

    case 4 :
        printf("\n 4 Sayisina karsilik gelen gun Persembedir.\n");
    break;

    case 5 :
        printf("\n 5 Sayisina karsilik gelen gun Cumadir.\n");
    break;

    case 6 :
        printf("\n 6 Sayisina karsilik gelen gun Cumartesidir.\n");
    break;

    case 7 :
        printf("\n 7 Sayisina karsilik gelen gun Pazardir.\n");
    break;

    default:
        printf("\n%d sayiniz hicbir gune karsilik gelmiyor.\n", gun);
    break;
    }

    return 0;
}
