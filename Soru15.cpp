#include <stdio.h>
#include <stdlib.h>
/*  Olu�turdu�unuz sayilar.txt dosyas�ndaki say�lar� okuyunuz.Okudu�unuz say�lardan asal say� olanlar� sayilar2.txt 
dosyas�na kaydediniz.2.D�nem 2.�dev*/

int main() {
	FILE *dosya,*dosya1;
   dosya=fopen("C:\\Users\\Bet�l DA�LI\\Desktop\\sayilar.txt","r");
   dosya1=fopen("C:\\Users\\Bet�l DA�LI\\Desktop\\sayilar2.txt","w");
   
   int sayi[100],i,sayac=0,k=-1;
   do{
   	k++;
   	fscanf(dosya,"%d",&sayi[k]);
	    printf("%d\t",sayi[k]); 
	  	for(i=2;i<sayi[k];i++){
   		if(sayi[k]%i==0){
   			sayac++;
		   }
	   }
	   if(sayac==0){
	   	fprintf(dosya1,"%d\t",sayi[k]);
	   }
	  sayac=0; 
	  }
   while (!feof(dosya));
   fclose(dosya);
   fclose(dosya1);
	return 0;
}
