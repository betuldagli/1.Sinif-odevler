#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*0 ile 100 arasýnda rastgele deðerlerden oluþturacaðýnýz 100 adet tam sayýyý sayi.txt dosyasýna kaydediniz.sayi.txt dosyasýndaki
 tam sayýlardan 5. biti 0 olanlarý oluþturacaðýnýz bir dizi içerisine pointer iþlemleri kullanarak aktartýnýz.2.Dönem 9.Ödev*/

int main() {
	srand(time(NULL));
 	 
	  FILE *dosya;
 	  int dizi[100];
	  unsigned int  x=32;
	  int sayi,k=0,sayac=0;
      int *p;
   dosya=fopen("sayi.txt","w");
	
	 if (dosya == NULL) {
      printf("Dosya açma hatasý!");
      return 0;
  }
  
   for(int i=1;i<=100;i++){
   	sayi=rand()%100;
	   fprintf(dosya,"%d\n",sayi);
	   
   	if((sayi|x)!=sayi){
   		dizi[k]=sayi;
   		k++;
	   sayac++;
	}
}
	p=(int*) malloc(sayac*sizeof(int));
	for(k=0;k<sayac;k++){	
	*(p+k)=dizi[k];
	  printf("%d\n",*(p+k));
	}
	fclose(dosya);	
	return 0;
}
