#include<stdio.h>
#include<conio.h>
int main()
{
     int a;
	printf("ENTER A NUMBER:\n");
	scanf("%d",&a);
      if(a>0) {
	printf("THE NUMBER IS POSITIVE\n");
      }
      else if(a<0)
      {
	printf("THE NUMBER IS NEGATIVE\n");
      }
      else
      {
	printf("THE NUMBER IS 0\n");
     }
     getch();
	return 0;
     }
