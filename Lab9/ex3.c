#include<stdio.h>

typedef struct{
	float real, imag;
}Complex;


int main(){

	Complex z1, z2, sum;

	printf("Enter the real part of the 1st number: \n");
	scanf("%f", &z1.real);

	printf("Enter the imaginary part of the 1st number: \n");
	scanf("%f", &z1.imag);

	printf("Enter the real part of the 2nd number: \n");
	scanf("%f", &z2.real);

	printf("Enter the imaginary part of the 2nd number: \n");
	scanf("%f", &z2.imag);

	sum.real = z1.real + z2.real;
	sum.imag = z1.imag + z2.imag;

	printf("The sum is: %f + %fi\n", sum.real, sum.imag);

return 0;
}
