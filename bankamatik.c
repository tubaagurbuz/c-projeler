#include<stdio.h>
 int main()
  
  {
  

 int islem;
 int bakiye =1000;
 int tutar;
 
 
 
 printf("1-bakiye sorgula\n2-para çekme\n3-para yatırma\nkart iptali");
 printf("\nLütfen bir işlem seçiniz:");
 scanf("%d",&islem);
 
switch(islem){
	case 1:
		printf("\nbakiyeniz: %d",bakiye ) ;
	
		break;
		
	case 2 :
	printf("çekilecek tutar:");
	scanf("%d",&tutar);
	
	if(tutar>bakiye){
		
		printf("\nyetersiz bakiye");
		break;
	
	}
	else {
	
     printf("kalan bakiye: %d",bakiye-tutar);


	break;
	}
	
	case 3:
		printf("yatırılacak tutar:");
		scanf("%d",&tutar);
		
		if(tutar<=bakiye)
		{
			printf("kalan bakiye: %d",bakiye-tutar);
			
			break;
		}
		else{
			printf("yetersiz bakiye");
		break;
		}
		
		case 4:
			printf("kartınız iptal edildi");
			break;
	

	default:
		printf("hata");
    }
}
 

	


