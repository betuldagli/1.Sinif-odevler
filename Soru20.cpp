#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 0 ile 100 aras�nda rastgele de�erlerden olu�turaca��n�z 20 elemanl� bir dizi i�erisindeki elemanlar� pointer i�lemlerini kullanarak
selection short algoritmas� ile b�y�kten k����e s�ralay�n�z. 2.D�nem 7.�dev*/

int main(){
	int n=20;
    int arr[n];
    int i;
    int *p = arr;
    srand(time(NULL));

    for (i = 0; i < n; i++) {
        *(p+i)= rand() % 101;
    }

    printf("Dizi:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p+i));
    }
    printf("\n");
   
    int j, temp, maxIndex;

    for (i = 0; i < n - 1; i++) {
        maxIndex = i;
        for (j = i + 1; j < n; j++) {
            if (*(p+j) > *(p+ maxIndex)) {
                maxIndex = j; 
            }
        }
        temp = *(p+i);
        *(p+i)  = *(p+maxIndex);
        *(p+maxIndex)= temp;
    }

  
    printf("Siralanmis Dizi:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p+i));
    }
    printf("\n");

    return 0;
}
