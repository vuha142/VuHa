//1.2.3.4…n

#include <stdio.h>

int main(){
	int i,n;
	int s=1;
	printf("nhap n\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		s = s*i;
	}
	printf("ketqua %d\n",s);
	
	
}
