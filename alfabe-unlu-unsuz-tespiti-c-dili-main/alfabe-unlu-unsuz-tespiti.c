#include <stdio.h>

int main(){

    char harf;

    printf("Sadece Tek Bir Harf Girin:\t");
    scanf("%c", &harf); //Kullanıcıdan tek bir harf alıyoruz.


    /**
     * #ÇALIŞMA MANTIĞI
     * if - else ve || (veya) koşulu ile tek tek harf sorgusu yapıp sonuça ulaşıyoruz.
    */
    if( harf == 'a' || harf == 'e' || harf == 'ı' || harf == 'i' || harf == 'u' || harf == 'ü' || harf == 'o' || harf == 'ö' )
    {
        printf("Harfiniz Ünlü(Sesli) Bir Harftir.");
    }
    else if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'İ' || harf == 'U' || harf == 'Ü' || harf == 'O' || harf == 'Ö' ){
        
    }
    else{
        printf("Harfiniz Ünsüz(Sesiz) Bir Harftir.");
    }

    return 0;
}