#include <stdio.h>
#include <stdlib.h>

/*1.  Klavyeden kullanýcý istediði sürece girilen tam sayýlarý bir çift yönlü baðlý listeye aktarýnýz. 2.Dönem 16.Ödev*/


	struct node{
  	int sayi;
  	struct node* next;
  	struct node* previous;
  };

int main() {
	
	struct node *first='\0';
	struct node *ptr='\0';
	struct node *gecici='\0';
	
	int sayi,n=1,aranan,control=0,kontrol=1;
	
    printf("-1 girerek cikabilirsiniz.\n");
    
    while(kontrol==1){
	
	if(first=='\0'){
		first=(struct node*) malloc(1*sizeof(struct node));
		printf("sayi giriniz:");
	    scanf("%d",&sayi);
	   
		first->sayi=sayi;	
		first->next='\0'; 
		first->previous='\0';
        ptr=first;
			if(sayi==-1){
	    kontrol =0;
	    	break;
		}
	    
	}
	{ 
		ptr->next=(struct node*) malloc(1*sizeof(struct node));
		ptr->next->previous=ptr;
		ptr= ptr->next;
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		
		ptr->sayi=sayi;
		ptr->next='\0'; 
		if(sayi==-1){
		 	kontrol=0;
	    	break;
		}
		
	}
	
}
    printf("\n");
    gecici=first;
	while(gecici!='\0'){
	if(gecici->next=='\0'){
		break;
	}
		printf("Adres:%x  ,degeri:%d  ,onceki adres:%x ,sonraki adres:%x\n",gecici,gecici->sayi,gecici->previous,gecici->next);
		gecici=gecici->next;

	}
	printf("\n");
	return 0;
}
