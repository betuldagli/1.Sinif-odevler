#include <stdio.h>
#include <stdlib.h>

/*klavyeden girilen 20 adet tam say� bir diziye aktar�ld�ktan sonra , bu dizi elemanlar�n�n ortamalas�n� ve dizideki ka� eleman�n
 ortalaman�n alt�nda, ka� eleman�n ortalaman�n �st�nde oldu�unu yazd�ran program� yaz�n. 1.d�nem 4.�dev*/
int main() {
    int i,j,dizi[20],sayac1,sayac2;
	float ort,toplam;	
	sayac1=0;
	sayac2=0;
    for (i=0;i<20;i++){
	  printf("%d.sayiyi giriniz: ",i+1);
	   scanf("%d",&dizi[i]);
	   toplam+=dizi[i];
	}
   ort=toplam/20;
   printf("ortalama:%.2f \n",ort);
  
   for(j=0;j<20;j++){
   	if(ort<=dizi[j]){
   		sayac1++;}
   		
   	else{ 
	    sayac2++;
		   }
    }
   
    printf("%d sayi ortalamanin ustunde \n",sayac1);
    printf("%d sayi ortalamanin altinda",sayac2);
	return 0;
}
