//nhap 3 so tim so nho nhat
#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap gia tri 3 so\n");
	printf("nhap so thu 1:\n");
	scanf("%d",&a);
	printf("nhap so thu 2:\n");
	scanf("%d",&b);
	printf("nhap so thu 3:\n");
	scanf("%d",&c);
	if(a < b){
		if(a < c){
			printf("min = %d\n",a);
		}else if(a > c){
			printf("min = %d\n",c);
		}
	}else if(b < c){
		printf("min = %d\n",b);
	}else {
		printf("min = %d\n",c);
	}
}
