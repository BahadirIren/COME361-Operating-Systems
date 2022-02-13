#include<stdio.h>

void f(const int[], const int);
void f2(const int *, const int);

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

void f(const int a[], const int size){

	for(int i = 0; i < size; i++){
		printf("%d\n", a[i]);
	}
}

void f2(const int *a, const int size){

	for(int i = 0; i < size; i++){
		// printf("%d\n", *(a+i));
		printf("%d\n", a[i]);
	}
}
