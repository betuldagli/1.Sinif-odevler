#include <stdio.h>
#include <stdlib.h>

/*C(n,r)=n!/r!*(n-r)!.kullanýcý tarafýndan girilen n ve r deðerlerine göre kombinasyon deðerini
hesaplayan fonksiyonu yazýn 1.dönem 9.ödev*/

   int kombinasyon(int x,int y){
    int i,z=0;
	 float faktx=1,fakty=1,faktz=1,sonuc=0;
     for(i=1;i<=x;i++){
     	faktx*=i;
	 }
	  for(i=1;i<=y;i++){
     	fakty*=i;
	 }
	 z=x-y;
	 for(i=1;i<=z;i++){
     	faktz*=i;
	 }
     sonuc=faktx/(fakty*faktz);
    return sonuc;
   }
   
   
int main() {
	 int a,b;
	 float cevap;
	printf("1.sayiyi giriniz: ");
	 scanf("%d",&a);
	 
	printf("2.sayiyi giriniz: ");
	 scanf("%d",&b);
	
	cevap=kombinasyon(a,b);
	
	printf("cevap: %.2f",cevap);
	return 0;
}
