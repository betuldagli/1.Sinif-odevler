#include <stdio.h>
#include <stdlib.h>

/* kullanýcýnýn klavyeden girdiði metin içerisinde,yine kullanýcýnýn girdiði kelimenin olup olmadýðýný bulan,varsa hangi pozisyonda olduðunu
döndüren program kodunu yazýnýz.yarýsý doðru yarýsý yanlýþ çalýþýyor. 1.dönem 7.ödev */

int main() {
	char metin[100],kelime[100];
	int i,j,k=0,sayac=0,aranankelime[100];
	
	printf("metin giriniz:");
	gets(metin);
	
	printf("aradiginiz kelimeyi girin:");
	gets(kelime);
	
	for(i=0;metin[i]!='\0';i++){
		for(j=0;kelime[j]!='\0';j++){
			if(metin[i]!=kelime[j]){
			break;
			}
        else{
		k++;
		aranankelime[k]=i;
	    sayac++;
		  }
	   }
    }
	     if(sayac!=0){
	    printf("aradiginiz kelimeden %d adet bulundu:\n",sayac);	
	for(i=0;i<sayac;i++){
		printf("kelimenin bulundugu indis: %d\n",aranankelime[i]);	
	}
	
		 }
	
		if (sayac==0){
		printf("aradiginiz kelime metinde yok");
       	}

	
	return 0;
}
