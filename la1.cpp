#include <stdio.h>

int main(){
	int a;
	printf("nhap a\n");
	scanf("%d",&a);
	if(a >=2 && a<=7){
		printf("thu %d:\n",a);
	}else if(a == 8){
		printf("a la chu nhat\n");
	}else {
		printf("vo nghia");
	}
}
