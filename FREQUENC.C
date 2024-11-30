#include<stdio.h>

void main()
{
	char str[100],ch;
	int i=0,count=0;

	printf("Enter the string:");
	gets(str);

	printf("Enter a charater : ");
	scanf("%c",&ch);

	while(str[i] !='\0'){
		if(str[i]==ch)  {
		count++;
		}
		i++;
	}
	printf("the frequency of %c: %d\n",ch,count);
}