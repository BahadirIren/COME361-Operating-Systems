#include<stdio.h>

int main(){

	double a[] = {3.9, 2.4, 7.7, 1.1};
	double *p;
	p = a;

	printf("*a= %lf\n", *a);
	printf("*p= %lf\n", *p);

	printf("a[0]= %lf\n", a[0]);
	printf("p[0]= %lf\n", p[0]);

	printf("a[1]= %lf\n", a[1]);
	printf("p[1]= %lf\n", p[1]);

	printf("*(a+1)= %lf\n", *(a+1));
	printf("*(p+1)= %lf\n", *(p+1));

	printf("the address of 3.9 is: %p\n", a);
	printf("the address of 3.9 is: %p\n", p);
	printf("the address of 2.4 is: %p\n", (a+1));

return 0;
}
