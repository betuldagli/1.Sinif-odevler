#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/*  struct ders {
    int ders_kod;
	int vize;
	int final;
	double gecmenotu;
	 };
    struct sahis_bilgileri {
    char ad[40];
	char soyad[40];
	int No;
	struct ders dersler[5];
    };
Yukarýdaki yapýlarý kullanarak 5 öðrencinin bilgilerinin giriþini yapan, geçme notlarýný hesaplayan ve bilgileri 
ekrana yazdýran program kodunu yazýnýz.
1.Dönem 13.Ödev
*/
struct ders {
    int ders_kod;
	int vize;
	int final;
	double gecmenotu;
	 };
struct sahis_bilgileri {
    char ad[40];
	char soyad[40];
	int No;
	struct ders dersler[5];
    };

int main() {
	struct sahis_bilgileri sb;
	struct ders ders;
	srand(time(NULL));
	int i,j,k,numara,v,f,gm,dk;	
	
	for(j=0;j<5;j++){
		printf("%d. ogrencinin adini soyadini giriniz:",j+1);
		 scanf("%s %s",sb.ad,sb.soyad);
   
		};
      printf("\n\n");
	
	for(j=0;j<5;j++){
	sb.No=rand()%100;
	numara=sb.No;	
	printf("%d.ogrencinin numarasi: %d",j+1,numara);
	printf("\n");

		
 }	 
 	printf("\n");
 	for(j=0;j<5;j++){
		printf("%d.ogrencinin\n",j+1);
		 for(i=0;i<5;i++){
	 	ders.ders_kod=rand()%10;
	    dk=ders.ders_kod;
		
	      printf("%d.ders kodu:%d\n",i+1,dk);
	  }
}
	printf("\n\n");
	
	for(k=0;k<5;k++){
	  for(i=0;i<5;i++){

	ders.vize=rand()%100;
	v=ders.vize;
	
	ders.final=rand()%100;
	f=ders.final;
		printf("%d.ogrencinin %d.vize notu: %d\n",i+1,k+1,v);
		printf("%d.ogrencinin %d.final notu: %d\n",i+1,k+1,f);



	ders.gecmenotu=v*0.4+f*0.6;
	gm=ders.gecmenotu;
	if(gm<60){
		printf("%d.ogrenci %d ortalamayla %d.dersten bute kaldi.",i+1,gm,k+1);
	}
	else {
		printf("%d.ogrenci %d ortalamayla %d. dersi gecti.",i+1,gm,k+1);
	}	
	
	printf("\n");
	};
	printf("\n\n\n");
};
return 0;
}
