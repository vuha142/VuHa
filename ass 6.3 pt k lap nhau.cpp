//

#include <stdio.h>

int main()
{
    int n;
    printf("nhap so pt n: ");
    scanf("%d",&n);
    int ary[n];
    for (int i=0; i<n; i++) {
        printf(" nhap so pt  %d: ",i);
        scanf("%d",&ary[i]);
        for (int k=0; k<i; k++) {
            while (ary[i]==ary[k]) {
                printf(" gia tri %d ton tai,nhap lai ", ary[i]);
                scanf("%d",&ary[i]);
            }
        }
    }
}
