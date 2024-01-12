#include <stdio.h>
#include <stdlib.h>

/*Kendisine parametre olarak gelen tamsay�y� bitsel operat�rler kullanarak yine kendisine parametre olarak gelen say� 
kadar left rotated shift yapan fonksiyon kodunu yaz�n�z. Yaz�lan fonksiyonu program i�eresinde kullan�n�z. 2.D�nem 3.�dev*/
 
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
