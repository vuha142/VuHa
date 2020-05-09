// bai 5
#include <stdio.h>
int main(){
	int a,b;
	float x,y;
	printf("nhap a,b:\n");
	printf("nhap a\n");
	scanf("%d",&a);
	printf("nhap b:\n");
	scanf("%d",&b);
	if(a >= b){
		x = a/b;
		x = (float)a/b;
		printf("thuong=%f\n",x);
	}else{
		y = a*b;
		printf("tich=%f\n",y);
	}
}
