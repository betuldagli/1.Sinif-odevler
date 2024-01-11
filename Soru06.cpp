#include <stdio.h>
#include <stdlib.h>

/*kullanýcýnýn klavyeden girdiði metnin içerisinde kaç kelime olduðunu bulan program kodunu yazýnýz. 1.dönem 6.ödev */

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
