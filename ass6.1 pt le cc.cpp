// tim so le cuoi cung day n
#include <stdio.h>

int main(){
	int i,n;
	printf("nhap so pt n:");
	scanf("%d",&n);
	int aray[n],L;
	for(i=0;i<n;i++){
		printf("nhap so thu %d:",i);
		scanf("%d",&aray[i]);
	}
	for(i=0;i<n;i++){
		if(aray[i] %2 !=0){
			L = aray[i];
		continue;
		}else
	}	printf("so le cuoi cung: %d",L);
	
}
