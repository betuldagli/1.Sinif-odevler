#include <stdio.h>
#include <stdlib.h>

/*kendisine parametre olarak gelen metni yine kendisine parametre olarak gelen de�er kadar right rotated shift yapan fonksiyon kodunu
pointer aritmeti�i kullanarak ger�ekle�tiren fonksiyon kodunu yaz�n�z.2.D�nem 8.�dev*/

void rightrotated(char metin[],int k){
	char *p= metin;
	int sayac=0,i,j;
	for(sayac=0;*(p+sayac)!='\0';sayac++);
	char gecici[1];
	char *p1=gecici;

	for( i=0;i<k;i++){
		*(p1+0)=*(p+sayac-1);
		for( j=sayac-2;j>=0;j--){
			*(p+j+1)=*(p+j);
		}
			*(p+0)=*(p1+0);
	}
	printf("%s",p);
}

int main(){
	char metin[50];
	int k;
	printf("metni giriniz:");
	gets(metin);
	printf("ne kadar kaydirmak istediginizi giriniz:");
	scanf("%d",&k);
	rightrotated(metin,k);
	
	
	return 0;
}
