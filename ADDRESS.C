#include<stdio.h>

void main() {
	int num=10,*ptr;
	clrscr();
	ptr = &num;
	printf("Address of num:%u\n",ptr);
	}