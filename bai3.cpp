//nhap 3 so a,b,c giai pt bac 2
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,delta;
	float x,x1,x2;
	printf("nhap gia tri 3 so:\n");
	printf("nhap so a: \n");
	scanf("%f",&a);
	printf("nhap so b\n");
	scanf("%f",&b);
	printf("nhap so c\n");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("pt vo so nghiem\n");
			} else{
				printf("pt vo nghiem\n");
			}
		}else{
			x = (-c/b);
			printf("pt co nghiem = %f\n",x);
		}
	}else{
		delta = b*b - 4*a*c;
		if(delta < 0){
			printf(" pt vo nghiem\n");
		}else if(delta == 0){
			x1 =-b/(2*a);
			printf("pt co nghiem kep x=%f\n",x1);
		}else{
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("x1=%f:\n",x1);
			printf("x2=%f:\n",x2);
		
		}
	}
	
	
}
