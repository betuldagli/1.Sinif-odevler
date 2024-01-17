#include <stdio.h>
#include <stdlib.h>

/* Stack ve Queue yapýlarýnda, tüm iþlemleri kullanýcýya sorarak bu yapýlarý gerçekleþtiren program kodunu fonksiyon bazlý gerçekleþtiriniz. 
Kullanýcýya sunulacak menüler aþaðýdaki gibidir. Tüm iþlemler fonksiyon bazlý gerçekleþtirilmelidir.  2.Dönem 15.Ödev
1-Ekle
2-Bul ve Sil
3-Bul ve Göster
4-Tümünü Listele
 */
	struct ekle{
   	int sayi;
   	struct ekle *next;
   };

  struct ekle *Push(struct ekle *ust,int sayi);
  struct ekle *PopDequeue(struct ekle *ust,int *sayi);
  struct ekle *Enqueue(struct ekle *first,int sayi);
  struct ekle *BulGoster(struct ekle *ust,int sayi,int aranan);
  struct ekle *BulVeSil(struct ekle *ust,int sayi,int aranan);
  int main() {
	
	struct ekle *ust='\0',*first='\0';
	
	int sayi,secim,secim1,aranan;
	
	printf("hangi yapiyi kullanmak istediginizi seciniz\n1-Stack\n2-Queue\n");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:	
	printf("(-1 girerek cikabilirsiniz.)\n\n");
	  while(sayi!=-1){
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		  if(sayi==-1){
			break;
		}
		ust=Push(ust,sayi);	
	}
	
	printf("\nYapmak istediginiz islemi seciniz:\n1-Ekle\n2-Bul ve sil\n3-Bul ve goster\n4-tumunu listele\n\n");
	scanf("%d",&secim1);
	
	switch(secim1){
		case 1:
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		ust=Push(ust,sayi);	
		printf("\nYeni liste:\n");
	    	while(ust!='\0'){
		  ust=PopDequeue(ust,&sayi);
	    	printf("%d\t",sayi);
		}
		break;
		
		case 2:
			printf("Bulunacak sayiyi giriniz:");
			scanf("%d",&aranan);
			ust=BulVeSil(ust,sayi,aranan);
			printf("\nYeni liste:\n");
	    	while(ust!='\0'){
		    ust=PopDequeue(ust,&sayi);
		    if(sayi=='\0'){
		    	continue;
			}
			else{
			printf("%d\t",sayi);
			}
	    	
		}
			break;
			
		case 3:
			printf("Bulunacak sayiyi giriniz:");
			scanf("%d",&aranan);
		    ust=BulGoster(ust,sayi,aranan);
			break;
		case  4:	
		  printf("Listeniz:\n");
	       while(ust!='\0'){
		    ust=PopDequeue(ust,&sayi);
		    printf("%d\t",sayi);
	    }	
			break;
		default:
			printf("Gecerli islem giriniz.");
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
	printf("\nYapmak istediginiz islemi seciniz:\n1-Ekle\n2-Bul ve sil\n3-Bul ve goster\n4-tumunu listele\n\n");
	scanf("%d",&secim1);
	
	switch(secim1){
		case 1:
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		first=Enqueue(first,sayi);	
		printf("\nYeni liste:\n");
	    	while(first!='\0'){
		  first=PopDequeue(first,&sayi);
	    	printf("%d\t",sayi);
		}
		break;
		
		case 2:
			printf("Bulunacak sayiyi giriniz:");
			scanf("%d",&aranan);
			first=BulVeSil(first,sayi,aranan);
			printf("\nYeni liste:\n");
	    	while(first!='\0'){
		    first=PopDequeue(first,&sayi);
		    if(sayi=='\0'){
		    	continue;
			}
			else{
			printf("%d\t",sayi);
			}
	    
		}
			break;
			
		case 3:
			printf("Bulunacak sayiyi giriniz:");
			scanf("%d",&aranan);
		    first=BulGoster(first,sayi,aranan);
			break;
		case  4:	
		  printf("Listeniz:\n");
	       while(first!='\0'){
		    first=PopDequeue(first,&sayi);
		    printf("%d\t",sayi);
	    }	
			break;
		default:
			printf("Gecerli islem giriniz.");
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

	struct ekle *BulGoster(struct ekle *ust,int sayi,int aranan){
			struct ekle *gecici=ust;
			struct ekle *bul= (struct ekle *)malloc(1*sizeof(struct ekle *));
			int sayac=0;
		
	    bul->sayi=aranan;
  	    bul->next='\0';
			
			while(gecici!='\0'){
			  if(gecici->sayi==bul->sayi){
			 printf("aradiginiz deger:%d -->adresi:%x\n",aranan,*gecici);
			 sayac++;
			}
			gecici=gecici->next;
		}
		if(sayac==0){
			printf("Aranan deger bulunamadi.");
		}

			return ust;
	}
	
	struct ekle *BulVeSil(struct ekle *ust,int sayi,int aranan){
			struct ekle *gecici=ust,*gecici1;
            struct ekle *bul= (struct ekle *)malloc(1*sizeof(struct ekle *));
			int sayac=0;
		
	    bul->sayi=aranan;
  	    bul->next='\0';
			
			while(gecici!='\0'){
			  if(gecici->sayi==bul->sayi){
			  gecici->sayi='\0';
			  sayac++;
			}	
		gecici=gecici->next;
		}
		if(sayac==0){
			printf("Aranan deger bulunamadi.");
		}
		return ust;
	}	
