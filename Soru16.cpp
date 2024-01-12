#include <stdio.h>
#include <stdlib.h>

/*Kendisine parametre olarak gelen tamsayýyý bitsel operatörler kullanarak yine kendisine parametre olarak gelen sayý 
kadar left rotated shift yapan fonksiyon kodunu yazýnýz. Yazýlan fonksiyonu program içeresinde kullanýnýz. 2.Dönem 3.Ödev*/
 
 int bitsel(int sayi,int k){
   unsigned short sayac = 0,sonuc,sonuc1,gecici;  

   gecici=sayi;
   while (sayi!=0)
   {
        sayac++;
        sayi >>= 1;
        
   }
    sayi=gecici;
    sonuc=sayi<<k;
    sonuc1=sayi>>(sayac-k);

    return (sonuc|sonuc1);
}

int main(){
  int sayi,k;
   printf("bir sayi giriniz: ");
   scanf("%d",&sayi);
   
   printf("ne kadar kaydirmak istediginizi giriniz: ");
   scanf("%d",&k);
   
   printf("sonuc: %d ",bitsel(sayi,k));

}
