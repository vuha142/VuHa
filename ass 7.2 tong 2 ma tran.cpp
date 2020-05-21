#include <stdio.h>

int main(){
	int i,j,m,n;
	int a[4][3],b[4][3],c[4][3];
	printf("nhap ma tran a\n");
	printf("nhap so hang n:");
	scanf("%d",&n);
	printf("nhap so hang m :");
	scanf("%d",&m);
	printf("\n");
	printf("nhap ma tran b\n");
	printf("nhap so hang n:");
	scanf("%d",&n);
	printf("nhap so hang m :");
	scanf("%d",&m);
	printf("\n");
	
	//nhap so pt trong ma tran
	printf("nhap so pt:\n");
	for(i = 0;i < n;i ++){
		for(j = 0;j < m;j ++){
		printf("nhap pt a[i][j]:",i,j);
		scanf("%d",&a[i][j]);
		}
	}for(i = 0;i < n;i ++){
		for(j = 0;j < m;j ++){
		printf("nhap pt b[i][j]:",i,j);
		scanf("%d",&b[i][j]);
	}
}
	for(i = 0;i < n;i ++){
		for(j = 0;j < m;j ++){
			c[i][j] = a[i][j] + b[i][j];
			printf("%d", c[i][j]);
		}
	}printf("\n");

	
}
	
