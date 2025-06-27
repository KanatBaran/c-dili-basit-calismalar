#include <stdio.h>

int main(){

    int maliyet; //Ürün maliyeti İçin Değişken Oluşturduk.
    int fiyat; //Ürün Fiyatı İçin Değişken Oluşturduk.

    int oran1; //Kazanç ve zarar oranlarında işlem yapabilmek adına değişken oluşturduk.
    int oran2; //Kazanç ve zarar oranlarında işlem yapabilmek adına değişken oluşturduk.
    int oran3; //Kazanç ve zarar oranlarında işlem yapabilmek adına değişken oluşturduk.
    

    printf("Ürünün Maliyeti Ne Kadar?\t"); 
    scanf("%d", &maliyet); //Kullanıcıdan Ürün Maliyetini Girmesini İstiyoruz.

    printf("Ürünün Satış Fiyatı Ne Kadar?\t");
    scanf("%d", &fiyat); //Kullanıcıdan Ürün Satış Fiyatını Girmesini İstiyoruz.

    if( maliyet >  fiyat ){

        

        printf("Zarar Ettiniz.\n");

        /**
         * Zarar Hesaplaması Yapıyoruz.
         * Zarar oranını şu şekilde hesaplanır: Örnek olarak alış tutarı 500 TL olan bir malın satış tutarı 400 TL ise
         * bu satıştan meydana gelen zarar oranı (500 - 400) x 100 / 500 = 20 olur. Yani zarar ornınız %20'dir.
        */

        oran1 = maliyet - fiyat;
        oran2 = oran1 * 100;
        oran3 = oran2 / maliyet;

        printf("Zarar Oranınız Yuzdelik Olarak: %d", oran3);

    }else{

        printf("Kazanç Elde Ettiniz.\n");

        /**
         * Kazanç Hesaplaması Yapıyoruz.
         * Bir üründen elde edilen kazanç oranı şu şekilde bulunur: Örnek olarak alış fiyatı 500 TL, satış fiyatı ise 750 TL 
         * olan bir maldan elde edilen kazanç oranı (750 - 500) X 100 / 500 = 50 olur. Yani kazanç oranınız %50'dir.
        */

        oran1 = fiyat - maliyet;
        oran2 = oran1 * 100;
        oran3 = oran2 / maliyet;

        printf("Kazanç Oranınız Yüzdelik Olarak: %d", oran3);

    }

    return 0;
}