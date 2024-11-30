#include<stdio.h>
#include<conio.h>
//with parameter
//fnc declaration
void addnumber(int a, int b,int c);
int main()
{
clrscr();
	addnumber(10,20,50);
getch();
return 0;
}
//function defintion with parameter
void addnumber(int a, int b,int c){
	int sum=a+b+c;
	printf("addition of the %d and %d and %d is:- %d\n",a,b,c,sum);
}