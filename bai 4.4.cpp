//S = 1+2+3+4+5+...+1000

#include <stdio.h>

int main(){
	printf("s= 1+2+3+4+...+1000 =");
	int i,s;
	i = 0;
	for(i; i<=1000;i++){
		s=s+i;
	}
	printf("%d",s);
	
}
