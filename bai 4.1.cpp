// nhap dung 3 canh tam giac
#include <stdio.h>

int main(){
	int a,b,c,a1,b1,c1,m,n,k;
	a1 = 0;
	b1 = 0;
	c1 = 0;
	m = 0;
	n = 0;
	k = 0;
	printf("nhap so a\n");
	scanf("%d",&a);
	printf("nhap so b\n");
	scanf("%d",&b);
	printf("nhap so c\n");
	scanf("%d",&c);
	for(a;a<=0;){
		printf("nhap lai so a\n");
		scanf("%d",&a);
		a1=a;
	}
	
	for(b;b<=0;){
		printf("nhap lai so b\n");
		scanf("%d",&b);
		b1=b;
	}
	
	for(c;c<=0;){
		printf("nhap lai c\n");
		scanf("%d",&c);
		c1=c;
	}
	if(a+c>b && a+b>c && b+c>a){
		printf ("abc la tam giac\n");
	}else{
		for(a;a>=b+c;){
			printf("nhap lai a\n");
			scanf("%d",&a);
		n=a;
		}
		for(b;b>=c+a;){
			printf("nhap lai b\n");
			scanf("%d",&b);
			m=b;
		}
		for(c;c>=a+b;){
			printf("nhap lai c\n");
			scanf("%d",&c);
		k=c;
		printf("abc la tam giac\n");
	
		}
	}
}
