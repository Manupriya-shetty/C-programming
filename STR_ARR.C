#include<stdio.h>
int main()
	{
	int i;
	char arr[3][20]={"Hi","hello","Namaste"};
	printf("string array Element are :\n");
	       clrscr();
	for(i=0;i<3;i++) {
		printf("%s ",arr[i]);
		}
	      return 0;
	}