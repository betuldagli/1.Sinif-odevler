#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*0 ile 1000 aras�nda rasgele �retti�inin 100 adet tam say�y� sayilar.txt dosyas�na yaz�n�z.2.D�nem 1.�dev*/

int main() {
	srand(time(NULL));
	int i,sayi;
	
	 FILE *dosya;
   dosya=fopen("C:\\Users\\Bet�l DA�LI\\Desktop\\sayilar.txt","w");
     if (dosya == NULL) {
      printf("Dosya a�ma hatas�!");
      return 0;
  }

   for(i=1;i<=99;i++){
   	sayi=rand()%1000;
   	fprintf(dosya,"%d\n",sayi);
   }
     fclose (dosya);
	return 0;
}
