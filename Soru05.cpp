#include <stdio.h>
#include <stdlib.h>

/*klavyeden 10 elemanl� 2 tam say� dizisi girildikten sonra ilk dizinin �ift indisleri ile ikinci dizinin
 tek indislerini yer de�i�tiren kodu yaz�n�z. 1d�nem 5.�dev*/

  
int main() {

	int i,j,gecicidegisken,dizi1[20],dizi2[20];
	printf("birinci dizi elemanlari \n");
	for(i=0;i<10;i++){
		printf("%d.sayiyi giriniz:",i+1);
		 scanf("%d",&dizi1[i]);
	}
	
	printf("\nikinci dizi elemanlari \n");
	for(j=0;j<10;j++){
		printf("%d.sayiyi giriniz:",j+1);
		 scanf("%d",&dizi2[j]);
		 
	}
	for(i=0;i<10;i++){
		if (i%2==0){
		gecicidegisken=dizi1[i];
		dizi2[i]=gecicidegisken;
		}
	}
 	for(j=0;j<10;j++){
		if(j%2==1){
		gecicidegisken=dizi2[j];
		dizi1[j]=gecicidegisken;
		}
	}
	printf("yeni birinci dizi elemanlari \n");
   for(i=0;i<10;i++){
   	printf("%d \n",dizi1[i]);
   }
   printf("yeni ikinci dizi elemanlari \n");
   for(j=0;j<10;j++){
   	printf("%d \n",dizi2[j]);
   }

	return 0;
}
