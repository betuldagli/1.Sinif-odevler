#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*3.  Rastgele say�da elemandan ve rastgele de�erlerden olu�an bir tek y�nl� ba�l� liste olu�turun. Olu�turdu�unuz ba�l� listenin 
ilk eleman�n�n adresini parametre alan bir Terscevir fonksiyonu yazal�m. Tesrcevir fonksiyonu recursive bir fonksiyon olacakt�r ve 
kendisine parametre olarak gelen tek y�nl� ba�l� listeyi tersine �evirecektir.
(Not: ters �evirme i�lemi de�erleri ta��yarak de�il ba�lant�lar� de�i�tirerek yap�lacakt�r.)
2.D�enm 18.�dev*/


struct node{
  	int sayi;
  	struct node* next;
  };
 struct node *Terscevir(struct node *first);
 int koruma,a=0;
int main() {
		srand(time(NULL));
		int eleman;
		struct node *deger='\0',*first='\0',*gecici='\0',*ptr='\0';
		eleman=rand()%10+1;
		koruma=eleman;
		for(int i=0;i<eleman;i++){
		if(first=='\0'){
		first=(struct node*) malloc(1*sizeof(struct node));
		deger=(struct node*) malloc(1*sizeof(struct node));
		deger->sayi=rand()%101;
		deger->next='\0';
		first->sayi=deger->sayi;	
		first->next='\0'; 
        ptr=first;
     }
	{ 
		ptr->next=(struct node*) malloc(1*sizeof(struct node));
		deger=(struct node*) malloc(1*sizeof(struct node));
		ptr= ptr->next;
		deger->sayi=rand()%101;
		deger->next='\0';
		ptr->sayi=deger->sayi;
		ptr->next='\0'; 
	}
}
 printf("\n");
    
    gecici=first;
	while(gecici!='\0'){
	if(gecici->next=='\0'){
		break;
	}
		printf("Adres:%x  ,degeri:%d ,sonraki adres:%x\n",gecici,gecici->sayi,gecici->next);
		gecici=gecici->next;

	}
	Terscevir(first);
	printf("\n");
	printf("yeni liste:\n");
	 gecici=first;
	while(gecici!='\0'){
	if(gecici->next=='\0'){
		break;
	}
		printf("Adres:%x  ,degeri:%d ,sonraki adres:%x\n",gecici,gecici->sayi,gecici->next);
		gecici=gecici->next;

	}
	return 0;
}

struct node *Terscevir(struct node *first){
		struct node *gecici='\0',*last='\0';
		gecici=(struct node*) malloc(1*sizeof(struct node));	
		last=(struct node*) malloc(1*sizeof(struct node));
		int sayac=0;
	if(a==koruma/2){
		return first;
	}
	last=first;
	while(last->next->next!='\0'){
		last=last->next;
		sayac++;
	}
	last=first;
	for(int i=0;i<sayac-a;i++){
		last=last->next;	
	}
	a++;
	gecici=first;
	//Adreslerin de�i�imi
	struct node *temp=gecici;
	gecici=last;
	last=temp;
	//Adresler de�i�irken de�i�en say�lar�n yer de�i�imi
	temp=(struct node*) malloc(1*sizeof(struct node));
	temp->sayi=gecici->sayi;
	gecici->sayi=last->sayi;
	last->sayi=temp->sayi;
	return Terscevir(first->next);
}
