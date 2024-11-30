#include<stdio.h>
int multiply(int x,int y);
int main() {
	int result = multiply(3,8);
	printf("multiplication result :-%d\n",result);
	return 0;
	}
int multiply(int x,int y) {
    return x*y;
    }
