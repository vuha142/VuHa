#include <stdio.h>

int main(){
	int n;
	printf("nhap pt n\n");
	scanf("%d",&n);
	int a[n];
	    for (int i=0; i<n; i++) {
        printf(" nhap pt  %d: ",i);
        scanf("%d",&a[i]);
   }
   int max = 0,count = 0;
    for (int i=0; i<n; i++){
    	if(a[i]>0){
    		count += a[i];
    		if(count>max) max = count;
		}else{
			count = 0;
			
		}
	}
	printf("tongi  so duong  lien tiep lon nhat %d",max);
}

