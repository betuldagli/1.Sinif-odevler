#include <stdio.h>
#include <stdlib.h>

/*  kullan�c�n�n klavyeden girdi�i metin i�erisindeki b�y�k harfleri k����e,k���k harfleri b�y��e �eviren program kodunu yaz�n 1.d�nem 8.�dev*/

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
