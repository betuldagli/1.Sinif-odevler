#include <stdio.h>
#include <stdlib.h>

/*kullan�c�n�n klavyeden girdi�i metnin i�erisinde ka� kelime oldu�unu bulan program kodunu yaz�n�z. 1.d�nem 6.�dev */

int main() {
	char metin[100],dizi[18]={' ','.',',','?','!',';',':','[',']','(',')','+','%','&','/','{','}','*'};
	int i,j,sayac=0;
	printf ("metin giriniz:\n");
	gets(metin);
	 for(i=0;metin[i]!='\0';i++){
	 	for(j=0;j<18;j++){
	 		if(metin[i]==dizi[j]){
			sayac++;
	
		}	
    }
}
	printf("\nkelime sayisi: %d",sayac);
	
	return 0;
}
