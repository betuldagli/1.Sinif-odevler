#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 0 ile 100 arasýnda rastgele deðerlerden oluþturacaðýnýz 20 elemanlý bir dizi içerisindeki elemanlarý pointer iþlemlerini kullanarak
selection short algoritmasý ile büyükten küçüðe sýralayýnýz. 2.Dönem 7.Ödev*/

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
