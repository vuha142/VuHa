// S = 1 + 1/2 + 1/3 + … + 1/n
#include <stdio.h>

int main(){
	int i,n;
	float s=0;
	printf("nhap n\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		s=s+1/(float)i;
		
	}
	printf("ketqua %.2f\n",s);
	
	
}
