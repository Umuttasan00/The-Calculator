#include<stdio.h>
#include<math.h>

int main(){
	int islem;
	int x,y;
	int toplam, fark, carpim, bolum ;
	printf("Yapmak istediginiz islemi seciniz:\n");
	printf("1)\tToplama Islemi\n2)\tCikartma Islemi\n3)\tCarpma Islemi\n4)\tBolme Islemi\n");
	scanf("%d",&islem);

	
    switch(islem){
    	case 1:
    	    printf("Birinci sayiyi giriniz.");
	        scanf("%d",&x);
	      	printf("Ikinci sayiyi giriniz.");
	        scanf("%d",&y);
         	toplam=x+y;
            printf("Girdiginiz sayilatin toplami %d dir.",toplam);
    	break;
    	
    	case 2:
    		printf("Birinci sayiyi giriniz.");
	        scanf("%d",&x);
	        printf("Ikinci sayiyi giriniz.");
	        scanf("%d",&y);
    	      if(x>y){
    	      	 fark=x-y;
    	         printf("Girdiginiz sayilarin farki %d dir.",fark);
			  } 
			  else {
			  	 fark=y-x;
    	         printf("Girdiginiz sayilarin farki %d dir.",fark);
			  }
    	    break;
    	    
    	case 3:
	        printf("Birinci sayiyi giriniz.");
	        scanf("%d",&x);
	       	printf("Ikinci sayiyi giriniz.");
	        scanf("%d",&y);
			carpim=x*y;
			printf("Girdiginiz sayilarin carpimi %d dir.",carpim);
			break;
			
		case 4:
	        printf("Birinci sayiyi giriniz.");
	        scanf("%d",&x);
	        printf("Ikinci sayiyi giriniz.");
	        scanf("%d",&y);
			bolum=x/y;
			printf("Girdiginiz sayilarin bolumu %d dir.",bolum);
			break;
			
		default:
		printf("Lutfrn gecerli bir islem seciniz.");	  
	}
	
	
	
	
	
return 0;	
}
