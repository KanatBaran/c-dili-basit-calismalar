#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alt_limit, ust_limit, sayi=0, kalan=0, ters=0;

    printf("Alt limit  giriniz: ");
    scanf("%d", &alt_limit);

    printf("Ust limit giriniz: ");
    scanf("%d", &ust_limit);

    for(; alt_limit<=ust_limit; alt_limit++)
    {
        sayi = alt_limit;
        while( 0<sayi )
        {
            kalan = sayi % 10;
            sayi = sayi / 10;
            ters = kalan  + (ters*10);
        }

        if(ters == alt_limit)
        {
            printf("%d sayiniz polidromdur.\n", ters);
        }
        ters = 0;
        kalan = 0;
    }
    return 0;
}
