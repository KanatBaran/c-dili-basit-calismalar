#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ay;

   //Kullanicidan ay sayisini aliyoruz.
   printf("Kacinci ayin gun sayisini merak ediyorsun:");
   scanf("%d", &ay);

   //alinan sayiya gore sonuc veriyoruz.
   switch(ay)
   {
    case 4: case 6: case 9: case 11:
        printf("\nMerak ettiginiz ayin gun sayisi 30'dur.");
    break;

    case 1: case 3:  case 5: case 7: case 8: case 10: case 12:
        printf("\nMerak ettiginiz ayin gun sayisi 31'dir.");
    break;

    case 2:
        printf("\nMerak ettiginiz ayin gun sayisi 28 vey 29'dur.");
    break;

    default:
        printf("\nYazdiginiz sayiya karsilik hicbir ay yok...");
    break;
   }


    return 0;
}
