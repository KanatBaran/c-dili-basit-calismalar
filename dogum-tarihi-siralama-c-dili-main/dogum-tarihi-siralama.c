#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gun;
    int ay;
    int yil;

    printf("dogum tarihi gir \"Gun Ay Yil\" => ");
    scanf("%d %d %d", &gun,&ay,&yil);

    printf("Gun: %d\n", gun);
    printf("Ay: %d\n", ay);
    printf("Yil: %d\n\n", yil);

    printf("GG-AA-YYYY:\t%d-%d-%d\n", gun,ay,yil);
    printf("AA-GG-YYYY:\t%d-%d-%d\n",ay,gun,yil);
    printf("YYYY-AA-GG:\t%d-%d-%d\n", yil,ay,gun);


    return 0;
}
