#include <stdio.h>
#include <stdlib.h>
/* Kullan�c� taraf�ndan girilen say�ya kadar olan �ift say�lar�n toplam�n� ve ortalamas�n� 
ekrana yazd�ran program kodunu yaz�n�z.(for d�ng�s� kullan�n�z). 1.d�nem 2.�dev*/
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
   
