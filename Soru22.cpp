#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*0 ile 100 aras�nda rastgele de�erlerden olu�turaca��n�z 100 adet tam say�y� sayi.txt dosyas�na kaydediniz.sayi.txt dosyas�ndaki
 tam say�lardan 5. biti 0 olanlar� olu�turaca��n�z bir dizi i�erisine pointer i�lemleri kullanarak aktart�n�z.2.D�nem 9.�dev*/

int main() {
	srand(time(NULL));
 	 
	  FILE *dosya;
 	  int dizi[100];
	  unsigned int  x=32;
	  int sayi,k=0,sayac=0;
      int *p;
   dosya=fopen("sayi.txt","w");
	
	 if (dosya == NULL) {
      printf("Dosya a�ma hatas�!");
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
