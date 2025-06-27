#include <stdio.h>

int main(){

    int sayi; //Kullanıcın sayı girebilmesi için değişken oluşturduk.
    int kalan; //Kullanıcının girdiği sayının kalan kısmını tutacağım değişkeni oluşturduk.

    printf("Sayı Gir:\t");
    scanf("%d", &sayi);

    kalan =  sayi%2; // Burada kullanıcın girdiği sayıyının kalanını "kalan" değişkenine atadık.

    /**
     * ÇALIŞMA MANTIĞI 
     * Kullanıcın girdiği sayıyı alıp MOD işlemnin uygulayarak kalanını alıyoruz. Eğer kalan "0" ise sayı çift,
     * kalan "0" farklı ise kullanıcının girdiği sayı tektir.
    */
   
    if(kalan == 0){
        printf("Girdiğiniz Sayı Çiftir.");
    }else{
        printf("Girdiğiniz Sayı Tekir.");
    }


    return 0;
}