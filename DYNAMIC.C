#include<stdio.h>
void main()  {
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = 10;
	printf("value %d\n",*ptr);
	free(ptr);
	}