// timm uoc chung lon nhat a va b
#include <stdio.h>

int main(){
	int a,b, min;
	printf("nhap so a\n");
	scanf("%d",&a);
	printf("nhap so b\n");
	scanf("%d",&b);
	
	if(a==0 && b==0){
		printf("k co uoc chung lon nhat\n");
	}else if(a==0 && b!=0){
		printf("uoc chung lon nhat\n",b);
	}else if( a!=0 && b ==0 ){
		printf("uoc chung lon nhat\n",a);
	}else if(a > b){
		min = b;
	}else{
		min = a;
	}
	int i;
	int ucln;
	for(i=1; i <=min;i++){
		if(a%i==0 && b%i==0){
			ucln=i;
		}
	}
	printf("ucln la:%d",ucln);

}
	

