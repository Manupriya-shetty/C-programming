#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
		printf("\nenter the alphabet:\n");
		scanf("%c",&c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='U') {
		printf("%c is vowel");
 }
	 else {
		printf("%c is consonent");
 }
   getch();
	       return 0;
 }