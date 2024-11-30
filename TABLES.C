#include<stdio.h>
#include<conio.h>
int main()
{
int i,num;
clrscr();
printf("ENTER THE NUMBER:\n");
scanf("%d",&num);
for(i=1;i<=10;i++){
printf("%d+%d=%d\n",num,i,num+i);
}
getch();
return 0;
}