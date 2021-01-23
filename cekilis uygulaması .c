#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	char isim[10],soyisim[10];
	int secim;
	int sayi;
	 printf("Cekilis uygulamasina hosgeldiniz \nLutfen kullanici adinizi giriniz:");
	 scanf("%s",&isim);
	 printf("\nLutfen soyadinizi giriniz:");
	 scanf("%s",&soyisim);
	 printf("\nAsagidaki islemlerden birini seciniz:\n[1]-Kullanici bilgilerini kontrol et\n[2]-Cekilise katil");
	 printf("\nLutfen bir secim yapiniz:");
	 scanf("%d",&secim);
	 
	 if(secim==1){
	 	
	 	printf("\nKullanici adiniz:%s\nSoyadiniz:%s",isim,soyisim);
	 	scanf("%d %d",isim,soyisim);
	 }
	 
	 else if(secim==2){
	 	printf("\nCekilise katilmak icin 1 ile 5 arasinda bir sayi giriniz:");
	 	scanf("%d",&sayi);
	 	srand(time(NULL));
	 	int randomsayi=1+rand()%5;
	 
	 
	 	
	 	if (sayi==randomsayi){
	 		printf("sectiginiz sayi:%d\nsansli sayi:%d",sayi,randomsayi);
	 		printf("\ntebrikler kazandiniz!");
	 		
		 }
		 
	 	else {
	 		printf("girdiginiz sayi=%d\nsansli sayi=%d",sayi,randomsayi);
	 		printf("\nkaybettiniz!");
	 	}
	 	
	 		
		 }
	 }
	

	
	
	
	
	
	
	
	
