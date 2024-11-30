#include<stdio.h>
#include<conio.h>
int main()
{     int i,n,rev=0;
printf("ENTER THE NUMBER:\n");
scanf("%d",&n);
for(; n!=0 ; n/=10) {
  rev = rev*10 + n%10;
  }
printf("reversed number =%d",rev);
getch();
return 0;
}