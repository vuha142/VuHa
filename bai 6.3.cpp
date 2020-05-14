//nhap n kiem tra so nto
#include <stdio.h>
#include <math.h>
int main(){
	int n,i,s=0;
	do{
		printf("nhap710 n\n");
		scanf("%d",&n);
		if( n<0){
			printf("nhap lai n>0\n");
		}
	}while(n<0);
	if(n<2){
		printf("%d k phai so nguyen to \n",n);
		
	}else {
		for(i=2; i<=sqrt(n); i++){
			if(n%i==0)
			s++;
		}
		if(s==0){
			printf("%d la SNT \n",n);
		}else{
			printf("%d k phai SNT\n",n);
		}
	}

}
