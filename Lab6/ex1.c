#include<stdio.h>

#define MASK 0x7F // hexadecimal number in decimal 127, in binary 1111111
#define SET_ON 0b1111 // binary number, in decimal 15, in hexadecimal

int main(){
	int x = 510; // in binary 111111110
	x = x & MASK;
	printf("%d\n" , x); // prints decimal
	
	int y = 0b10000; // in decimal 16
	y = y | SET_ON;  // 10000 | 01111
	printf("%d\n", y);

	printf("%d\n" , x^x);

	unsigned int z = 2; // in binary 10
	printf("%d\n", z<<1 ); // in binary 100, in decimal 4, 1 basamak sola kaydirmak sayiyi 2 ile carpmak anlamina geliyor
	printf("%d\n", z>>1); // in binary 01, in decimal 1, 1 basamak saga kaydarmak sayiyi 2 ye bolmek anlamana geliyor

	int num = 212;
	printf("%d\n", num<<2);
	printf("%d\n", num>>2);

return 0;
}

