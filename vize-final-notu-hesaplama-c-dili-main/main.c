#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vize_notu;
    int final_notu;

    //Kullanicidan vize notunu aliyoruz
    printf("Vize notu giriniz:\t");
    scanf("%d", &vize_notu);

    //Kullanicidan final notunu aliyoruz
    printf("Final notu giriniz:\t");
    scanf("%d", &final_notu);

    // Vize notunun %40 aliyoruz.
    int vize_ort;
    vize_ort = vize_notu * 0.4;

    // Final notunun %60 aliyoruz.
    int final_ort;
    final_ort = final_notu * 0.6;

    //Ortalamayi hesapliyoruz.
    int  ort;
    ort = final_ort+vize_ort;


    printf("\nOrtalamaniz: %d\n", ort);


    /*
    Aldiginiz ortalamaya göre harflendirme sistemi yapilarak ekrana sonucu verilir.

    Puanlar Notlar katsayilar 90-100 AA 4.00
    85-89 BA 3.50
    75-84 BB 3.00
    70-74 CB 2.50
    60-69 CC 2.00
    55-59 DC 1.50
    50-54 DD 1.00
    40-49 FD 0.50
    0-39 FF 0.00
    --- F 0.00

    */
    if(ort >= 90)
    {
        printf("AA ile Gectiniz.\n");
    }
    else if(ort >= 85)
    {
        printf("BA ile Gectiniz.\n");
    }
    else if(ort >= 75)
    {
        printf("BB ile Gectiniz.\n");
    }
    else if(ort >= 70)
    {
        printf("CB ile Gectiniz.\n");
    }
    else if(ort >= 60)
    {
        printf("CC ile Gectiniz.\n");
    }
    else if(ort >= 55)
    {
        printf("DC ile Gectiniz.\n");
    }
    else if(ort >= 50)
    {
        printf("DD ile Gectiniz.\n");
    }
    else if(ort >= 40)
    {
        printf("FD ile Gectiniz.\n");
    }
    else if(ort >= 00)
    {
        printf("FF ile Gectiniz.\n");
    }


    return 0;
}
