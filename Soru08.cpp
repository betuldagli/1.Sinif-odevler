#include <stdio.h>
#include <stdlib.h>

/*  kullanýcýnýn klavyeden girdiði metin içerisindeki büyük harfleri küçüðe,küçük harfleri büyüðe çeviren program kodunu yazýn 1.dönem 8.ödev*/

int main() {
	char metin[100];
	int i;
	
	printf("metin giriniz:\n");
	gets(metin);
	 
	for(i=0;metin[i]!='\0';i++){
		if(metin[i]>='A'&&metin[i]<='Z'){
			metin[i]=metin[i]+32;	
			}
		else if(metin[i]>='a'&&metin[i]<='z'){
			metin[i]=metin[i]-32;
		}
			}
	
		printf("yeni metniniz:");
	
	for(i=0;metin[i]!='\0';i++){	
		printf("%c",metin[i]);
		}

	
	return 0;
}
