// tim so nghich dao
#include <stdio.h>

int main (){
	int a,b,c,d,e;
	int n1,n2,n3,n4;
	printf("nhap so can tim so nghich dao\n");
	scanf("%d",&a);
	
	if(a>0 && a<=9999){
		if(a<10){
			n1 = a*10;
			printf("so nghich dao can tim la %d\n",n1);
			
		}else if (a>=10 && a<= 99){
			b = a/10;
			c = a-b*10;
			n2 = c*10+b;
			printf("so nghich dao can tim la %d\n",n2);
			
		}else if(a>=100 && a<=999){
			b = a/100;
			c = (a-(b*100+d))/10;
			d = a%100-c*10;
			n3 = d*100+c*10+b;
			printf(" so nghic dao can tim la %d \n",n3);
			
		}else if(a>=1000 && a<=9999){
			b = a/1000;
			c = (a%1000-(d*10+e))/100;
			d = (a%1000-(c*100+e))/10;
			e = a-(b*1000+c*100+d*10);
			n4 = e*1000+d*100+c*10+b;
			printf("so nghic dao can tim la %d \n",n4);
		}
		
	}else {
		printf("k hop le, nhap lai so nguyen duong toi da 4 chu so\n");
	}
}
