#include<stdio.h>

double power(double, int);
void f(int *);
void f2(int);

int a = 5;

int main(){

	printf("%lf\n",power(2,6));
	
	f(&a);

	printf("%d\n", a);

	f2(a);
	printf("The value of variable a in main: %d\n", a);

return 0;
}

double power(double base, int n){

	int result = 1.0;
	for(int i = 0; i < n; i++){
		result *= base;
	}
return result;
}

void f(int *x){
	(*x)++;
	printf("a: %d\n", *x);
	printf("The address of varible a: %p\n", x);
}

void f2(int a){
	a++;
	printf("The value of variable a inside f2: %d\n", a);
}
