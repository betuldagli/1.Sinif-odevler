#include <stdio.h>
#include <stdlib.h>
/*Kullan�c� taraf�ndan vize ve final notunu girilecek ge�me notu hesaplanacak ge�me notu 60 ve �st�nde ise ekrana �ge�tiniz� yazacak 
alt�nda ise kullan�c�dan b�t�nleme notu istenecek ve ge�me notu tekrar hesaplanacak hesaplanan ge�me notu 60��n alt�nda ise �kald�n�z� 
de�ilse �ge�tiniz� yazacak. (Ge�me Notu=0,6*Final+0,4*Vize) 1.d�nem 1.�dev*/
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
