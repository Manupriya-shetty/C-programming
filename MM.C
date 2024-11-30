#include<stdio.h>
#include<conio.h>
 int main(){
 int arr[5],i,sum=0;
	printf("ENTER THE NUMBER:\n");
	for(i=0; i<5 ; i++){
		scanf("%d",&arr[i]);
		sum +=arr[i];
	}
	printf("SUM OF ELEMENTS:%d\n",sum);
	getch();
	return 0;
	}
