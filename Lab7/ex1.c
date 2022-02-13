#include<stdio.h>

int main(){

	int x = 4;
	int *xptr = &x;
	printf("the value in the pointer: %d\n", *xptr);
	printf("the address of the x: %p\n", xptr);

	scanf("%d", xptr);
	printf("the value of x: %d\n", x);

return 0;
}
