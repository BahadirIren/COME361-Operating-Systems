#include<stdio.h>

void function(int *a);

int main(){

	int s = 1;
	printf("before the function is called, the value is: %d\n", s);

	function(&s);
	printf("after the function is called, the value is: %d\n", s);

return 0;
}

void function(int *a){
	*a = 8;
	printf("in the function, the value is: %d\n", *a);
}
