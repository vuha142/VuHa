
#include <stdio.h>

int main() {
    printf(" nhap so pt cho mang: ");
    int n;
    scanf("%d",&n);
    int ary[n];
    for (int i=0; i<n; i++) {
        printf(" nhap pt  %d: ",i);
        scanf("%d",&ary[i]);
    }
    int currentLength=0,maxLength=0;
    for (int i=0; i<n; i++) {
        if (ary[i]>0) {
            currentLength++;
            if (currentLength>maxLength) {
                maxLength=currentLength;
            }
        } else {
            currentLength=0;
        }
    }
    if (maxLength==0) {
        printf(" k co pt duong nao .\n");
    } else {
        printf("\n pt duong dai nhât %d(s).\n",maxLength);
    }
    int currentSum=0,maxSum=0;
    for (int i=0; i<n; i++) {
        if (ary[i]>0) {
            currentSum+=ary[i];
            if (currentSum>maxSum) {
                maxSum=currentSum;
            }
        } else {
            currentSum=0;
        }
    }
    if (maxSum==0) {
        printf("\n k co pt duong tinh do dai chuoi.\n");
    } else {
        printf("\n chuoi ot duong dai nhat là %d.\n",maxSum);
    }
}
