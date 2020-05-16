//nhap n tong chu so n
#include <stdio.h>
int main(){
	int n,mod;
	int s=0;
	printf("nhap n>0\n");
	scanf("%d",&n);
	while(n!=0){
		mod = n%10;  //chia lay du
		s=s+mod;/// tong = tong + du
		n=n/10; // conf lai phan nguyen tiep tuc lap 
		
	}
	printf(" tong la:%d\n",s);
}
