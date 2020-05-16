//nhap n tim so n-1 trong fibonaci
#include <stdio.h>
int main(){
	int n,i;

	printf("nhap n>0\n");
	scanf("%d",&n);
	
	if(n<0){
		printf("nhap lai n>0\n");
	}else if(n==0){
		printf(" kq %d",0);
	}if(n==1){
		printf(" kq %d",0);	
	}if (n>=2){
		int fn;
		int f1=0;
		int f2=1;
		for(i=2;f1+f2<n;i++){
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
		}
	printf("kq la %d",f2);
	}
}
