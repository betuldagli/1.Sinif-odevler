#include<stdio.h>
#include<stdlib.h>
#include <math.h>
/*  Kullanýcýdan 4 adet sayý istenilecek ve bu sayýlardan tek olanlarýn aritmetik ortalamasýný, 
çift olanlarýn geometrik ortalamasýný hesaplayarak ekrana yazýnýz. 1.dönem 3.ödev*/
int main () {
	int x,y,z,q,ciftsayaci=0;
	float ciftlericarp=1,tekleritopla=0;
	float aritmetikort,geometrikort;
	  printf("\n4 adet sayi giriniz:\n");
	  scanf("%d" "%d" "%d" "%d",&x,&y,&z,&q);
	  
	if(x%2==0){
	  	ciftsayaci++;
	  	ciftlericarp*=x;}
	else {
	   tekleritopla+=x;}
	
	if(y%2==0){
	  	ciftsayaci++;
	  	ciftlericarp*=y;}
	else{
	   tekleritopla+=y;}
	
	if(z%2==0){
	  	ciftsayaci++;
	  	ciftlericarp*=z;}
	else {
		tekleritopla+=z;}
	
	if(q%2==0){
	  	ciftsayaci++;
	  	ciftlericarp*=q;}
	else{
		tekleritopla+=q;}

	aritmetikort=(tekleritopla/(4-ciftsayaci));
	geometrikort=pow(ciftlericarp,(float)1/ciftsayaci);
	 printf("\naritmetik ortalama=%f",aritmetikort);
	 printf("\ngeometrik ortalama=%f",geometrikort);
	 
	return 0;
}
