#include<stdio.h>

void main()
{
	char str[100];
	int i=0;
	clrscr();

	printf("Enter a string:");
	gets(str);

	while(str[i] !='\0') {
		if(str[i] == ' ')  {
			str[i] = '^';
			}
			i++;
	}
		printf("modified string:%s\n",str);
   }