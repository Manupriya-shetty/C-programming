#include<stdio.h>
void main()
{
	int i;
	int *arr = (int *)calloc(5, sizeof(int));
	if(arr==NULL) {
		printf("memory allocation failed\n");
		return;
	}
	printf("Array elements after calloc :\n");
	for(i=0;i<5;i++) {
		printf("%d",arr[i]);
		}
		free(arr);
		}