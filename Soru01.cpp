#include <stdio.h>
#include <stdlib.h>
/*Kullanýcý tarafýndan vize ve final notunu girilecek geçme notu hesaplanacak geçme notu 60 ve üstünde ise ekrana “geçtiniz” yazacak 
altýnda ise kullanýcýdan bütünleme notu istenecek ve geçme notu tekrar hesaplanacak hesaplanan geçme notu 60’ýn altýnda ise “kaldýnýz” 
deðilse “geçtiniz” yazacak. (Geçme Notu=0,6*Final+0,4*Vize) 1.dönem 1.ödev*/
int main( )
{

   int vize,final,butunleme;
   float ort;
    printf("vize notunuzu giriniz:");
       scanf("%d",&vize );
    printf("\nfinal notunuzu giriniz:");
       scanf("%d",&final );
   ort=( vize*0.4 + final*0.6);
     if (ort>=60){
	 	printf("\nortalamaniz:%.2f \ngectiniz",ort);}
   else {
	   printf("\nkaldiniz lutfen butunleme notunuzu giriniz:");
	   scanf("%d",&butunleme );
    ort=( vize*0.4 + butunleme*0.6); 
          if (ort>=60){
        printf("\ngectiniz");}
		else{
			printf("\nkaldiniz:%.2f",ort);}
		}
       return 0;
   }
