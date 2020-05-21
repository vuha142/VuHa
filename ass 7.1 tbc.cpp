#include <stdio.h>

int main(){
	int i,j;
	int arr[4][4],m,n;
	int s = 0;
	printf("nhap so hang m :");
	scanf("%d",&m);
	printf("nhap so hang n :");
	scanf("%d",&n);
	
	//nhap so pt trong ma tran
	printf("nhap so pt:\n");
	for(i = 0;i < n;i ++){
		for(j = 0;j < m;j ++){
		printf("nhap pt arr[i][j]:",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
   float s1;
	
	for(i = 0;i < n;i ++){
		for(j = 0;j < m;j ++){
			if(i = j);
			s = s + arr[i][j];
		    float s1 = (float)s/4;
		}
	}
	printf("tbc la %f:\n",s1);
}
// k hieu sao sai

