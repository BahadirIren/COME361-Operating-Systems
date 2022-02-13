/*
	hello threads example
*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

// global variables
int x = 5;
int *xPtr;

void* worker();

int main(){

	int xLocal = 2;

	xPtr = (int *)malloc(sizeof(int));
	*xPtr = 5;

	pthread_t tid;
	pthread_create(&tid, NULL, worker, NULL); // 4th argument means function is not taking any parameter
	pthread_join(tid, NULL); // main thread waits until seperate thread is joined

	printf("%d %d %d\n", x, xLocal, *xPtr);
return 0;
}

void* worker(){
	x++;
	(*xPtr)++;
	pthread_exit(0);
}
