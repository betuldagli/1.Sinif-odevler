#include <stdio.h>
#include <stdlib.h>

/* Stack ve Queue yapýlarýnýn her birini kullanýcýnýn deðer gireceði þekilde gerçekleþtiriniz.2.Dönem 14.Ödev */

   struct ekle{
   	int sayi;
   	struct ekle *next;
   };

  struct ekle *Push(struct ekle *ust,int sayi);
  struct ekle *PopDequeue(struct ekle *ust,int *sayi);
  struct ekle *Enqueue(struct ekle *first,int sayi);
  
int main() {
	
	struct ekle *ust='\0',*first='\0';
	
	int sayi,i,secim;
	
	printf("hangi yapiyi kullanmak istediginizi seciniz\n1-Stack\n2-Queue\n");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:	
	printf("(-1 girerek cikabilirsiniz.)\n");
	while(sayi!=-1){
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
		}
		ust=Push(ust,sayi);	
	}
	printf("\n");
	printf("Listeniz:\n");
	while(ust!='\0'){
		ust=PopDequeue(ust,&sayi);
		printf("%d\t",sayi);
	}	
	break;
	case 2:
		printf("(-1 girerek cikabilirsiniz.)\n");
	while(sayi!=-1){
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi==-1){
			break;
		}
		first=Enqueue(first,sayi);	
	}
	printf("\n");
	printf("Listeniz:\n");
	while(first!='\0'){
		first=PopDequeue(first,&sayi);
		printf("%d\t",sayi);
	}	
	break;
		
		break;
	default:
		printf("gecerli islem giriniz.");
   }	
	return 0;
}

 struct ekle *Push(struct ekle *ust,int sayi){
  	struct ekle *yeni= (struct ekle *)malloc(1*sizeof(struct ekle *));
  	
  	yeni->sayi=sayi;
  	yeni->next='\0';
  	
  	if(ust=='\0'){
  		ust=yeni;
  		return ust;
	  }
	else{
		yeni->next=ust;
		return yeni;
	}
}
  
  struct ekle *PopDequeue(struct ekle *ust,int *sayi){
  	if(ust=='\0'){
  		sayi='\0';
  		return ust;
	  }
	else{
		struct ekle *gecici;
		gecici=ust;
		
		*sayi=gecici->sayi;
		
		ust=ust->next;
		free(gecici);
		
		return ust;
	}
}

struct ekle *Enqueue(struct ekle *first,int sayi){
  	struct ekle *yeni= (struct ekle *)malloc(1*sizeof(struct ekle *));
  	
  	yeni->sayi=sayi;
  	yeni->next='\0';
  		
	if(first=='\0'){
  		first=yeni;
  		return first;
	  }
	  else{
	  	struct ekle *gecici;
		gecici=first;
		
		while(gecici->next!='\0'){
			gecici=gecici->next;
		}
		gecici->next=yeni;
		return first;
		
	}
} 
