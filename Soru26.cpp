#include <stdio.h>
#include <stdlib.h>

/*3.Baðlý liste düðüm yapýsýný aþaðýdaki gibi oluþturunuz, kullanýcý istediði sürece öðrencilere ait vize ve final notlarýný giriniz. 
Tüm liste oluþturulduktan sonra öðrencilerin ortalama notlarýný hesaplayarak ekrana yazdýrýnýz. 2.Dönem 13.Ödev
struct OGRENCI{
    int id;
    float vize;
    float final;
    float ortalama;
    struct OGRENCI *sonraki}; */
    
    struct OGRENCI{
    int id;
    float vize;
    float final;
    float ortalama;
    struct OGRENCI* next;
	}; 

int main() {
	struct OGRENCI *first='\0';
	struct OGRENCI *ptr='\0';
	struct OGRENCI *gecici='\0';
	int sayi,control=1,vize,final,id;
	float ort=0;
printf("vize ya da finali negatif girerek cikabilirsiniz.\n\n");
    while(control==1){
	
	if(first=='\0'){
		first=(struct OGRENCI*) malloc(1*sizeof(struct OGRENCI));
		printf("ogrenci id giriniz:");
		scanf("%d",&id);
		
		printf("vize notunu giriniz:");
	    scanf("%d",&vize);
	    if(vize<0){
	    	control =0;
	    	break;
		}
		printf("final notunu giriniz:");
	    scanf("%d",&final);
	    if(final<0){
	    	control =0;
	    	break;
		}
		ort=vize*0.4+final*0.6;
		first->vize=vize;
		first->final=final;
		first->ortalama=ort;
		first->id=id;
		first->next='\0';
		ptr=first;
	}
	printf("\n");
	{ 
		ptr->next=(struct OGRENCI*) malloc(1*sizeof(struct OGRENCI));
		ptr= ptr->next;
		
		printf("ogrenci id giriniz:");
		scanf("%d",&id);
		
		printf("vize notunu giriniz:");
	    scanf("%d",&vize);
	    if(vize<0){
	    	control =0;
	    	break;
		}
		printf("final notunu giriniz:");
	    scanf("%d",&final);
	    if(final<0){
	    	control =0;
	    	break;
		}
		ort=vize*0.4+final*0.6;
		ptr->vize=vize;
		ptr->final=final;
		ptr->id=id;
		ptr->ortalama=ort;
		ptr->next='\0';
	}
	printf("\n");
}
   printf("\n");
    gecici=first;
	while(gecici!='\0'){
	if(gecici->next=='\0'){
			break;
		}
		printf("%d idli ogrencinin vize notu:%.2f  final notu:%.2f'dir. Ortalamasi:%.2f\n",gecici->id,gecici->vize,gecici->final,gecici->ortalama);
		gecici=gecici->next;
	}
	return 0;
}
