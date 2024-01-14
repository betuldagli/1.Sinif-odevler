#include <stdio.h>
#include <stdlib.h>

/* Girilen sayýya kadar olan pozitif tamsayýlarýn toplamýný bulan öz yinelemeli fonksiyonu yazýnýz.2.Dönem 6.Ödev*/

 int sum(int x){
     int  top=0;
     //girilen sayý dahil ise x-1 yerine x olacak.
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
