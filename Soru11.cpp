#include <stdio.h>
#include <stdlib.h>

/* kendisine parametre olarak gelen tam say�n�n asal olup olmad���n� bulan fonksiyonu yaz�n�z 1.d�nem 11.�dev*/
   int sayac=0;
  int asalbul(int x){
  	int i;
  	for(i=2;i<x;i++){
	  	if(x%i==0){
  			sayac++;
		  }
	}
	return x;  
 }


int main() {
	int sayi,sonuc;
	printf("sayi giriniz:");
	 scanf("%d",&sayi);
	 
	 sonuc=asalbul(sayi);
	 
	if(sayac==0){
			printf("%d sayisi asaldir.",sayi);
		}
	else{
			printf("%d sayisi asal degildir.",sayi);
		}
	
	
	return 0;
}
