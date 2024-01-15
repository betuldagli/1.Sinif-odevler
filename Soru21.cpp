#include <stdio.h>
#include <stdlib.h>

/*kendisine parametre olarak gelen metni yine kendisine parametre olarak gelen deðer kadar right rotated shift yapan fonksiyon kodunu
pointer aritmetiði kullanarak gerçekleþtiren fonksiyon kodunu yazýnýz.2.Dönem 8.Ödev*/

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
