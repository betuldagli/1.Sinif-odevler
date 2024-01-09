#include <stdio.h>
#include <stdlib.h>
/* Kullanýcý tarafýndan girilen sayýya kadar olan çift sayýlarýn toplamýný ve ortalamasýný 
ekrana yazdýran program kodunu yazýnýz.(for döngüsü kullanýnýz). 1.dönem 2.ödev*/
int main( ){
	
	int x, sayi, sayac=0,toplam=0;
	float ort;
	   printf("\nlutfen sayiyi giriniz:");
	     scanf("%d",&sayi);
    	for(x=0;x<=sayi;x++){
	    	if(x%2==0){
		 	toplam+=x;
			sayac++;
			}
		}
		printf("\nsayilarin toplami=%d\n",toplam);
			ort= toplam/(sayac);
		printf("\nsayilarin ortalamasi=%.2f\n",ort);
			return 0;
   }
   
