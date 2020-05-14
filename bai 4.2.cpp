//nhap so tu nhien n tim so nho hon nchia het cho 3
#include <stdio.h>

int main(){
	int n,i;
	printf("nhap n:\n");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		if(i%3==0){
		printf("%d chia het cho 3\n",i);
		}

	}
}
