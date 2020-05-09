//bai 4 nhap 3 so chung minh laf mot tam giac vaf tinh chu vi dien tich.
#include <stdio.h>
#include <math.h>
int main (){
	float a,b,c;
	float p,p2,s;
	printf("nhap 3 so: a,b,c\n");
	printf("nhap so a \n");
	scanf("%f",&a);
	printf("nhap so b \n");
	scanf("%f",&b);
	printf("nhap so c \n");
	scanf("%f",&c);
	if(a + b > c){
		if(b + c > a){
			if(a + c > b){
				printf("abc la 1 tam giac");
				
	p = a + b + c;
	p2 = p/2;
	printf("chu vi tam giac = %f\n",p);
	s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	printf("dien tic tam giac = %f\n",s);
			}else{
				printf("abc khong phai tam giac");
			}
		}else{
			printf("abc khong phai tam giac");
		}
	}else{
		printf("abc khong phai tam giac");
	}

}
