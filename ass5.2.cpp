//nhap n dem chu so n
#include <stdio.h>
int main(){
	int n;
	int dem = 0;
	printf("nhap n\n");
	scanf("%d",&n);
	if(n<0){
		printf("nhap lai n>=0\n");
		
	}else{
		do{
			n=n/10;
			dem++;
		}while(n>0);
		
	}printf("kq la %d\n",dem);
}
