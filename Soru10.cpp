#include <stdio.h>
#include <stdlib.h>

/*kendisine parametre olarak gelen tam say�n�n basamak de�erlerini toplayan fonksiyonu yaz�n�z. 1.d�nem 10.�dev */

 int bastop(int x) {
  int toplam=0,gecici,bas,i;
   while(x/10!=0) {
    x/10;
    bas++;
	break;} 
     for(i=0;i<=bas;i++){
    gecici=x;
    gecici%=10;
    toplam+=gecici;
    x/=10;}
    return toplam;
   } 
int main()
{
     int sayi,cevap;
    

    printf("sayiyi giriniz:") ;
     scanf("%d", & sayi);
    
    cevap=bastop(sayi) ;
    
    printf("sayilarin basamaklari toplami : %d", cevap) ;
    
    return 0;
}
