#include<stdio.h>
#include<stdint.h>

#define PORT 8000
#define PI 3.14
#define ch ‘c’

int main(){
	const int size=5;
	int myInt[size];
	int a=10, b=20;
	printf("a=%d, b=%d\n", a,b);
	printf("%lu\n", sizeof(int));

	unsigned int u = 100;
	uint32_t as = 10000;
	float f=25.0/3.0;
	double d= 25.0/3.0;
	char c;
	
	int i;
	for (i=0; i<size; i++){
		myInt[i] = i;
	}

	for (i=0; i<size;i++){
		printf("%d\n",myInt[i]);
	}
        
	int multi = a*b;
	printf("%d\n", multi);
	printf("%u\n", u);
	printf("%d\n", as);
	printf("%f\n", f);
	printf("%lf\n", d);
	printf("%d\n",PORT);

	typedef int tamsayi;
	tamsayi x = 20;
	printf("%d\n", x);

	// Enumaration
	enum days {Monday, Tuesday, Wednesday, Thursday, Friday};
	
	enum days today;
	today = Thursday;

	printf("Today is %d\n", today);

	enum state {SUSPENDED = 1, READY, RUNNING};

	enum state myState = READY;
	if(myState == READY)
		printf("State is ready\n");
	printf("my state: %d\n", myState);

return 0;
}
