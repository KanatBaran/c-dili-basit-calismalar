#include <stdio.h>

int main(){

    int sayi1; //Değişkenlerimizi oluşturduk.
    int sayi2; //Değişkenlerimizi oluşturduk.
    int sayi3; //Değişkenlerimizi oluşturduk.

    int kucuk; //Değişkenlerimizi oluşturduk.
    int buyuk; //Değişkenlerimizi oluşturduk.
    int orta = 0; //Değişkenlerimizi oluşturduk.

    /* Değişken oluşturmayı if(){} koşulunun dışında tutmalısınız. İstisna durum olmadıkça... */

    printf("1.Sayıyı Girin: \t");
    scanf("%d", &sayi1); //Kullanıcıdan Değer Girmesiniz İstedik.

    printf("2.Sayıyı Girin: \t");
    scanf("%d", &sayi2); //Kullanıcıdan Değer Girmesiniz İstedik.

    printf("3.Sayıyı Girin: \t");
    scanf("%d", &sayi3); //Kullanıcıdan Değer Girmesiniz İstedik.


    /* Bu koşulda Sıralama İşlemini Gerçekleştirdik. */
    if( sayi1 > sayi2 )
    {

        buyuk = sayi1;
        kucuk = sayi2;
        
        if( sayi1 > sayi3 )
        {
            if(sayi3 > sayi2)
            {
                orta = sayi3;
            }
            else{

                orta = kucuk;
                kucuk = sayi3;
            }
        }
        else{

            orta = buyuk;
            buyuk = sayi3;

        }

    }else{

        buyuk = sayi2;
        kucuk = sayi1;

        if( sayi2 > sayi3 )
        {
         
            if(sayi3 > sayi1 ){
                orta = sayi3;
            }
            else{
                orta = kucuk;
                kucuk = sayi3;
            }
        }else{
            orta = buyuk;
            buyuk = sayi3;
        }
    }


    /* Burada ise sonuçları yazdırdık. */
    printf("En Büyük Sayınız:%d\n", buyuk);
    printf("-------------\n");
    printf("Ortanca Sayınız:%d\n", orta);
    printf("-------------\n");
    printf("En Küçük Sayınız:%d\n", kucuk);


    return 0;
}