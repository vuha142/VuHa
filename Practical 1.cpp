#include <stdio.h>
#include <string.h>

void concat(char s1[],char s2[]){

	printf("nhap vao chuoi thu 1: \n");
	scanf("%s",s1);
	printf("nhap vao chuoi thu 2: \n");
	scanf("%s",s2);
	strcat(s1," ");
	strcat(s1,s2);	
}

int main(){
	char s1[50],s2[50];
	concat(s1,s2);
	printf("chuoi co duoc sau khi noi: %s\n",s1);
	
	return 0;
	
}

