#include<stdio.h>
#include "ex5_functions.h"

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
