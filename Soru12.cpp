#include <stdio.h>
#include <stdlib.h>

/* 1-   struct isci{
           char adi[30];
           char soyadi[];
           int yas;
           double aylikucret;
        };


�isci� yap�s�n� kendine parametre olarak alan bir fonksiyon i�erisinde i��iye ait bilgileri kullan�c�dan alacak 
ve fonksiyon i�inde kullan�c�dan girilen verileri olan yap�y� d�nd�recek program kodunu yaz�n�z.
1.D�nem 12.�dev
 */

struct isci{
           char adi[30];
           char soyadi[30];
           int yas;
           double aylikucret;
        };



    int iscibil(isci){
    struct isci isci;
	
		printf("adinizi soyadinizi giriniz:");
    	 scanf("%s %s",isci.adi,isci.soyadi);
    	 
    	printf("yasinizi giriniz:");
    	 scanf("%d",&isci.yas);
    	 
    	printf("aylik ucretinizi giriniz: ");
    	 scanf("%lf",&isci.aylikucret);
    	 	
		printf("adiniz soyadiniz:%s %s\n",isci.adi,isci.soyadi);
    	printf("yasiniz:%d\n",isci.yas);
    	printf("aylik ucretiniz:%lf",isci.aylikucret);
    	 
    	 return 0;
	};

int main() {
	 
	 struct isci isci;
	
	iscibil(isci);

	return 0;
}
