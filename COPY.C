#include<stdio.h>
#include<string.h>
void main(){
	char str1[100],str2[100];

	printf("enter the 1st string :");
	gets(str1);

	printf("enter the 2nd string :");
	gets(str2);
	strcpy(str2,str1);
	printf("copied string: %s\n",str1);
	}