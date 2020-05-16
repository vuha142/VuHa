// nhap a b 
#include <stdio.h>
int main(){
	int a,b,i;
	int s =0;
	printf("nhap so a\n");
	scanf("%d",&a);
	printf("nhap so b\n");
	scanf("%d",&b);
	
	if(a>=b){
		printf("nhap lai a <b\n");
		
	}else{
		for(i=a; i <=b;i++){
			s=s+i;
		}
	}printf("tong la %d:\n",s);
}
