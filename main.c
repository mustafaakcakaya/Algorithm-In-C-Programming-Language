
#include <stdio.h>
#include <conio.h>

int main()
{
    
    //----------100 Ogrencinin dersi gecme durumu------------
    /*
    A dersi için, 100 öğrencinin Vize(V) ve Final (F) notları klavyeden girilmektedir. Buna
    göre A dersini geçen öğrenci sayısını (os) bulup ekrana yazan C programını yazınız.
    Not: Ortalama (ort), vize sınvının %40 ve final sınavının %60’ının toplamından oluşmaktadır.
    (A dersini geçme şartı: Final ? 50 ve Ortalama ? 50 olmalı )
	*/
    
    int sayac = 0;
    int vize,final;
    float ort;

    for (int i = 0; i<100; i++) {
        printf("%i. öğrencinin vize ve final notunu arasında boşluk olarak şekilde giriniz : \n", i+1);
        scanf("%d %d",&vize,&final);
        
        ort=(vize*0.4)+(final*0.6);
        
        if(ort>50 && final>50){
            sayac++;
        }
    }
    printf("Sınavı geçen kişi sayısı %d", sayac);


    //----------------------------------------------------------
    //Klavyeden girilen iki pozitif tek doğal sayı (a,b) arasındaki çift sayıları ekrana yazan C programını yazınız.
    int sayi1, sayi2;
    printf("Pozitif bir sayı giriniz:");
    scanf("%d", &sayi1);
    
    printf("Pozitif bir sayı giriniz:");
    scanf("%d", &sayi2);
    
    for (int i = sayi1+1; i<sayi2; i++) {
        if(i%2 == 0)
        {
            printf("%d", i);
        }
    }
    //--------------3 basamaklı rakamları birbirinden farklı 3'e bölülenbilen sayıları bulunuz---------------
    // Üç basamaklı rakamları birbirinden farklı ve 3’e bölünebilen tüm sayıları bulup ekranda gösteren ve bu kurala uygun kaç tane sayı olduğunu söyleyen C programını yazınız. 

    int a,b,c,sayac=0;
    for(int i = 100; i<1000; i++){
        a = i%10;
        b = a%10;
        c = b%10;
        if((i%3 == 0) && (a!=b!=c)){
            sayac++;
        }
    }
    printf("%d adet koşula uygun sayı mevcut", sayac);

    //------------
    /*      𝐴 =  2 3 1
                 6 2 4
                 3 8 0
         matrisi verilmiştir. B=A^T
         ‘yi hesaplayıp ekrana yazdıran C programını yazınız.
        ( Not: B=A^T=  2 6 3
                       3 2 8
                       1 4 0
         )
    */
    int a[3][3], b[3][3], r=3, c=3, i, j;
    
    a[0][0]= 2; a[0][1]= 3; a[0][2]= 1;
    a[1][0]= 6; a[1][1]= 2; a[1][2]= 4;
    a[2][0]= 3; a[2][1]= 8; a[2][2]= 0;
    
    
    // A Matrisini Gösterme
    printf("\nA matrisi: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    // A'nın Tersini Bulma(B matrisi)
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            b[j][i] = a[i][j];
        }

    // B Batrsini Gösterme
    printf("\nA matrisinin Tersi(B matrisi):\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d  ", b[i][j]);
            if (j == r - 1)
                printf("\n");
        }


    return 0;
}

