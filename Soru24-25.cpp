#include <stdio.h>
#include <stdlib.h>

/*1.Klavyeden kullanýcý istediði sürece girilen tam sayýlarý bir baðlý listeye aktarýnýz. 2.Dönem 11-12.Ödev*/

  struct node{
  	int sayi;
  	struct node* next;
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
        ptr=first;
			if(sayi==-1){
	    kontrol =0;
	    	break;
		}
	    
	}
	{ 
		ptr->next=(struct node*) malloc(1*sizeof(struct node));
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
		printf("Adres:%x  ,degeri:%d  ,sonraki adres:%x\n",gecici,gecici->sayi,gecici->next);
		gecici=gecici->next;

	}
	printf("\n");
	/*2.Kullanýcý tarafýndan girilen bir tam sayý deðerini oluþturduðunuz baðlý listede arayýnýz. Mevcut ise siliniz.*/
	
	printf("Aradiginiz sayiyi giriniz:");
	 scanf("%d",&aranan);
	 
	 struct node *search='\0';
	 
	 gecici=first;
	 
		while(gecici!='\0'){
			if(gecici->sayi==aranan){
				control=1;
				search=gecici;
				break;
			}
			gecici=gecici->next;
		}
		
		if(control!=0){
			printf("\nAradiginiz %d sayisi bulundu.\n",search->sayi);
			
			if(search==first){
				first=first->next;
				free(search);
			}
			else{
				gecici=first;
				
				while(gecici->next!=search)
				gecici=gecici->next;
			
				gecici->next=gecici->next->next;
				free(search);
			}
		}
		else{
			printf("Aradiginiz sayi bulunamadi.");
		}
			
    gecici=first;
    
	printf("\nYeni liste:\n");
	
	while(gecici!='\0'){
		if(gecici->next=='\0'){
		break;
	}
		printf("Adres:%x  ,degeri:%d  ,sonraki adres:%x\n",gecici,gecici->sayi,gecici->next);
		gecici=gecici->next;
	}
	return 0;
}
