#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*kullan�c� taraf�ndan negatif tam say� girilene kadar tam say� girmesini isteyiniz. girilen say�lardan 3'e ve 5'e tam b�l�nenleri dinamik 
olarak olu�turaca��n�z bir diziye pointer aritmeti�i kullanarak aktar�n�z.2.D�nem 10.�dev*/

int main() {
	int sayi,sayac=0,k=0;
	int dizi[sayac];
    int *p; 
	 
	  do{
	  printf("sayi giriniz:");
	 scanf("%d",&sayi);	
	 	if(sayi%15==0){
	 		dizi[k]=sayi;
	 		k++;
			sayac++;
	 	 }
	}
	 while(sayi>0);{
	 }
	 
	p=(int*) malloc(sayac*sizeof(int));
	if(sayac!=0){
	printf("--------------------------\n3 ve 5'e bolunen sayilar:\n");
	 for(k=0;k<sayac;k++){
	 	*(p+k)=dizi[k];
	 	printf("%d\n",*(p+k));
	  }
	}
	else{
		printf("3 ve 5'e bolunen sayi yok.");
	}
	 free(p);
	return 0;
}
