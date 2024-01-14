#include <stdio.h>
#include <stdlib.h>

/*Kendisine parametre olarak gönderilen iki tam sayýnýn OBEB (Ortak Bölenlerin En Büyüðü) ini bulan öz yinelemeli fonksiyonlarý yazýnýz. 
2.Dönem 5.Ödev*/
 
 int ebob(int x,int y){
    if (x == y){  
	   return x;
	}
    if (x > y){
        return ebob(x-y, y);
    }
	else{
        return ebob(y,y-x);
	}
}

int main() {
	int x,y;
	
	printf("ilk sayiyi giriniz:");
     scanf("%d",&x);
	 
	printf("ikinci sayiyi giriniz:");
     scanf("%d",&y);
     
     printf("Ebob:%d",ebob(x,y));
	 	
	return 0;
}
