#include<stdio.h>
 int main()
  
  {
  

 int islem;
 int bakiye =1000;
 int tutar;
 
 
 
 printf("1-bakiye sorgula\n2-para �ekme\n3-para yat�rma\nkart iptali");
 printf("\nL�tfen bir i�lem se�iniz:");
 scanf("%d",&islem);
 
switch(islem){
	case 1:
		printf("\nbakiyeniz: %d",bakiye ) ;
	
		break;
		
	case 2 :
	printf("�ekilecek tutar:");
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
		printf("yat�r�lacak tutar:");
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
			printf("kart�n�z iptal edildi");
			break;
	

	default:
		printf("hata");
    }
}
 

	


