//nhap mang n tim so duong nho nhat
#include <stdio.h>
int main(){
	int i,n;
	int aray[n];
	printf("nhap so pt n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("nhap so thu %d:",i);
		scanf("%d",&aray[i]);
	}
	
	int min = aray[0];
	for(i=0;i<n;i++){
		if(aray[i]>0){
			min = aray[i];
		
		}
	}
	int n_min = min;
	for(i=0;i<n;i++){
		if(aray[i]>0){
			n_min = aray[i];
				break;
		}
	}
	for(i=0;i<n;i++){
		if(n_min>aray[i] && aray[i]>0){
			n_min = aray[i];
			}
	}printf("so duong be nhat la %d", n_min);
	
}
