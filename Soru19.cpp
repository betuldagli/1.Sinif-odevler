#include <stdio.h>
#include <stdlib.h>

/* Girilen say�ya kadar olan pozitif tamsay�lar�n toplam�n� bulan �z yinelemeli fonksiyonu yaz�n�z.2.D�nem 6.�dev*/

 int sum(int x){
     int  top=0;
     //girilen say� dahil ise x-1 yerine x olacak.
     top+=x-1;
 	if(x==1){
 		return top;
	 }
	 else{
	 	return top+(sum(x-1));
	 }
 }

  int main() {
	int x;
	
	printf("Sayiyi giriniz:");
	scanf("%d",&x);
	
	printf("\nSayiya kadar olan sayilarin toplami:%d",sum(x));
	
	return 0;
}
