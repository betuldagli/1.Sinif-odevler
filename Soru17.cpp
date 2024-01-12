#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*0 ile 100 arasýnda rasgele oluþturduðunuz 100 sayýdan 5. bitleri 0 olan sayýlarýn 4. bitini 1 yaparak sayilar0.txt dosyasýna 5. bitleri
 1 olan sayýlarýn 3. bitini 0 yaparak sayilar1.txt dosyasýna yazan program kodunu yazýnýz. 2.Dönem 4.Ödev*/

 int main(){
 	srand(time(NULL));
 	FILE *dosya,*dosya1,*dosya2;
 	unsigned int  x=16,y=8,q=4;
	int sayi;
   dosya=fopen("sayilar.txt","w");
   dosya1=fopen("sayilar0.txt","w");
   dosya2=fopen("sayilar1.txt","w");
	 if (dosya == NULL) {
      printf("Dosya açma hatasý!");
      return 0;
  }
   for(int i=1;i<=100;i++){
   	sayi=rand()%100;
	   fprintf(dosya,"%d\n",sayi);
   	if((sayi|x)==sayi){
   		if(sayi|q==sayi){
		   	sayi=sayi&~q;
			 }
   	fprintf(dosya2,"%d\n",sayi);
	   }
	   else{
	   	sayi=sayi|y;
	   	fprintf(dosya1,"%d\n",sayi);
	   }
   	
   }
    fclose (dosya);
    fclose (dosya1); 
	fclose (dosya2);
 	return 0;
 }
