#include <stdio.h>
#include <stdlib.h>

/*Kendisine parametre olarak g�nderilen iki tam say�n�n OBEB (Ortak B�lenlerin En B�y���) ini bulan �z yinelemeli fonksiyonlar� yaz�n�z. 
2.D�nem 5.�dev*/
 
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
