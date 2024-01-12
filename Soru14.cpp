#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*0 ile 1000 arasýnda rasgele ürettiðinin 100 adet tam sayýyý sayilar.txt dosyasýna yazýnýz.2.Dönem 1.ödev*/

int main() {
	srand(time(NULL));
	int i,sayi;
	
	 FILE *dosya;
   dosya=fopen("C:\\Users\\Betül DAÐLI\\Desktop\\sayilar.txt","w");
     if (dosya == NULL) {
      printf("Dosya açma hatasý!");
      return 0;
  }

   for(i=1;i<=99;i++){
   	sayi=rand()%1000;
   	fprintf(dosya,"%d\n",sayi);
   }
     fclose (dosya);
	return 0;
}
