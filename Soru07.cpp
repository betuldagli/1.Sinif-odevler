#include <stdio.h>
#include <stdlib.h>

/* kullan�c�n�n klavyeden girdi�i metin i�erisinde,yine kullan�c�n�n girdi�i kelimenin olup olmad���n� bulan,varsa hangi pozisyonda oldu�unu
d�nd�ren program kodunu yaz�n�z.yar�s� do�ru yar�s� yanl�� �al���yor. 1.d�nem 7.�dev */

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
