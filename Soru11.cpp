#include <stdio.h>
#include <stdlib.h>

/* kendisine parametre olarak gelen tam sayýnýn asal olup olmadýðýný bulan fonksiyonu yazýnýz 1.dönem 11.ödev*/
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
