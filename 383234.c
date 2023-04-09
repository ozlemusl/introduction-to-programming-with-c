
// #383180 #Ezgi CAKMAK #383180@ogr.ktu.edu.tr #BIREYSEL DEGERLENDIRME-1
// #383234 #Ozlem USLU #383234@ogr.ktu.edu.tr #BIREYSEL DEGERLENDIRME-2

#include <stdio.h>
#include <stdlib.h>
#define N 10
 struct takimlar  //Tabloda olusturulacak takim özellikleri struct yapisi icerisinde belirtildi.
   {
       char ad[20];
       char takma_ad;
       int om;
       int g;
       int b;
       int m;
       int av;
       int ag;
       int yg;
       int p;
   }takim[10];
void takim_adi() //Fonksiyonun icinde takimlarin isimleri dosyadan okundu.
{
    FILE*dosya;
    if((dosya=fopen("takimlar.txt","r"))!=NULL) //Dosyanin olup olmadigi kontrol edildi.
    {
        for(int i=0;i<N;i++)
        {
            fscanf(dosya,"%s",&takim[i].ad); //Fscanf ile dosyanin icindeki isimler takim adlari olarak atandi.
        }
    }
    else
    {
        printf("Takimlar dosyasi bulunamadi.");
    }
}
void takma_ad_ata() //ASCII tablosundan 65'ten 74'e kadar olan harfler takma ad olarak takimlara atandi.
{
     int c=65;
    for(int a=0;a<N;a++)
    {
        takim[a].takma_ad=c;
        c++;
    }
}
void ozellikleri_sifirla() //Baslangicta takimlarin tum  ozellikleri "0" alindi.
{


    int t;
    for(t=0;t<N;t++)
    {


        takim[t].om=0;
        takim[t].g=0;
        takim[t].b=0;
        takim[t].m=0;
        takim[t].p=0;
        takim[t].ag=0;
        takim[t].yg=0;
        takim[t].av=0;

    }

}

void isim_sirasi()  //Takim isimleri alfabetik olarak siralandi.
{
     struct takimlar gecici;


    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            if(takim[i].ad[0]<takim[j].ad[0])
            {
                gecici=takim[i];
                takim[i]=takim[j];
                takim[j]=gecici;
            }
        }
    }
}
void dosyaya_yazma()
{
    FILE*dosya;  //Dosya acildi.

 if((dosya=fopen("puan tablosu.txt","w"))!=NULL) //Dosyanin varligi kontrol edildi.
 {
      fprintf(dosya," om  g  m  b  av ag yg p\n"); //Takim ozelliklerinin kisa isimleri bir ust satirda belirtildi.
 for(int j=0;j<N;j++) //Dongu olusturuldu ve takim ozellikleri sirasiyla tabloda, dosya icinde gosterildi.
   {

     fprintf(dosya,"%c %d  %d  %d  %d  %d  %d  %d  %d  %s\n",takim[j].takma_ad,takim[j].om,takim[j].g,takim[j].m,takim[j].b,takim[j].av,takim[j].ag,takim[j].yg,takim[j].p,takim[j].ad);
   }
 }
}

void tablo_degerleri()
{

    char ev_sahibi;
    char misafir;
    int skor1=0;   //Degiskenler belirtildi.
    int skor2=0;
    int i,j=0;
    FILE*dosya;

    if((dosya=fopen("maclar1.txt","r"))!=NULL)
    {
        while(!feof(dosya)) //Dosya bastan sona okundu.
      {

          fscanf(dosya,"%c %d %c %d\n",&ev_sahibi,&skor1,&misafir,&skor2); //Dosyadaki degerler fscanf ile sirasiyla okundu
          for(i=0;i<N;i++)
    {
        if(ev_sahibi==takim[i].takma_ad)
        {
           break;
        }
    }
    for(j=0;j<N;j++)
    {
        if(misafir==takim[j].takma_ad)
        {
           break;
        }
    }
    takim[i].ag=takim[i].ag+skor1; //Ev sahibi olan takimda atilan ve yenilen gol sayilari oncekilerle toplanip yeni degerler olusturuldu.
    takim[i].yg=takim[i].yg+skor2;

    takim[j].ag=takim[j].ag+skor2; //Misafir olan takimda atilan ve yenilen gol sayilari öncekilerle toplanip yeni degerler olusturuldu.
    takim[j].yg=takim[j].yg+skor1;

    takim[i].om=takim[i].om+1; //Oynanan mac sayisi hesaplandi.
    takim[j].om=takim[j].om+1;


    if(skor1>skor2)
    {
        takim[i].g=takim[i].g+1;
        takim[j].m= takim[j].m+1;
    }

    else if(skor1<skor2)               //Maglubiyet,galibiyet ve beraberlikler hesaplandi.
    {
        takim[j].g=takim[j].g+1;
        takim[i].m= takim[i].m+1;
    }
    else
    {
        takim[i].b= takim[i].b+1;
        takim[j].b= takim[j].b+1;
    }

    takim[i].av=takim[i].ag-takim[i].yg;  //Averaj hesaplandi.
    takim[j].av=takim[j].ag-takim[j].yg;

      }
    }

     else
    {
        printf("Maclar dosyasi bulunamadi.");
    }

}

void buyuk_harfe_cevirme()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<=12;j++) //Bir takim ismi en fazla 12 harften olustugu için 12'ye kucuk esit alindi.
        {
         if(takim[i].ad[j]>=97) //ASCII kodu 97'den buyuk olanlar kücük harf oldugu için 97'ye buyuk esit alindi.
         {
            takim[i].ad[j]=takim[i].ad[j]-32; //Buyuk harfler matematiksel islemle kucuk harfe cevrildi.
         }
        }

    }
}
void yazdirma() //Bu fonksiyon degerleri ekrana yazdirir.
{
     printf(" om  g  m  b  av ag yg p\n");

    for(int j=0;j<N;j++)
   {
     printf("%c %d  %d  %d  %d  %d  %d  %d  %d  %s\n",takim[j].takma_ad,takim[j].om,takim[j].g,takim[j].m,takim[j].b,takim[j].av,takim[j].ag,takim[j].yg,takim[j].p,takim[j].ad);
   }
}
void arayuz1() //Bu fonksiyon sayesinde gerceklesmesi istenen islem yazilan deger girildiginde ekrana yansir.
{
         int a;

         printf("Tablo degerlerini goruntulemek icin 0'a basiniz.\n");
         printf("Takim ismine gore siralamak icin 1'e basiniz.\n");
         printf("Takim isimlerini buyuk harfe cevirmek icin 2'ye basiniz.\n");
         printf("Dosyaya yazmak icin 3'e basiniz.\n");
         scanf("%d",&a);


         if(a==0)
         {
             yazdirma();
         }
          if(a==1)
        {
            isim_sirasi();
            yazdirma();
        }
        if(a==2)
        {
            isim_sirasi();
            buyuk_harfe_cevirme();
            yazdirma();
        }
        if(a==3)
        {
            isim_sirasi();
            buyuk_harfe_cevirme();
            dosyaya_yazma();
        }


}
void puan () //Puan degerleri hesaplandi.
{
    int A=2;
    int B=1;
    int C=-1;

    for(int i=0;i<N;i++)
    {
        takim[i].p=takim[i].g*A+takim[i].b*B+takim[i].m*C+takim[i].p;
    }
}
int main() //Fonksiyonlar cagrildi ve islemler gerceklestirildi.
{

    takim_adi();
    takma_ad_ata();
    ozellikleri_sifirla();
    dosyaya_yazma();
    tablo_degerleri();
    puan();
    arayuz1();




}
