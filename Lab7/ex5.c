#include<stdio.h>
#include "ex5_functions.h"

int main(){

	const int size = 3;
	int array[size];

	array[0] = 5;
	array[1] = 6;
	array[2] = 9;

	f(array, size);

	f2(array, size);

return 0;
}
