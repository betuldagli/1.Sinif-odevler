#include <stdio.h>
#include <stdlib.h>

/*2.  Sýralý ekleme örneðini çift yönlü baðlý listelerle gerçekleþtiriniz. 2.Dönem 17.Ödev*/

	struct node{
  	int sayi;
  	struct node* next;
  	struct node* previous;
  };

int main() {
	struct node *first='\0',*yeni='\0',*gecici='\0',*onceki='\0';
	
	int control=1;
	
	while(control==1){
		yeni=(struct node*) malloc(1*sizeof(struct node));
		printf("Eklenecek degeri giriniz:");
		scanf("%d",&yeni->sayi);
		yeni->next='\0'; 
		
		if(first=='\0'){
			first=yeni;
		}
		else if(first->sayi>yeni->sayi){
			yeni->next=first;
			first->previous=yeni;
			first=yeni;
			
		}
		else{
			onceki=first;
			gecici=first->next;
			first->previous=gecici;
			
			while(gecici!='\0'){
				if(gecici->sayi<yeni->sayi){
					onceki=onceki->next;
					gecici=gecici->next;
				}
				else{
					break;
				}
			}
			if(gecici=='\0'){
				onceki->next=yeni;
				yeni->previous=onceki;
			}
			else{
				onceki->next=yeni;
				yeni->previous=onceki;
				yeni->next=gecici;
				gecici->previous=yeni;
			}
		}
		printf("Devam etmek icin 1'e basiniz:");
		 scanf("%d",&control);
	}
	
	gecici=first;
	printf("\n");
	while(gecici!='\0'){
			printf("Adres:%x  ,degeri:%d  ,onceki adres:%x ,sonraki adres:%x\n",gecici,gecici->sayi,gecici->previous,gecici->next);
		gecici=gecici->next;
	}
	return 0;
}
