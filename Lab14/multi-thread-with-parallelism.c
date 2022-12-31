
// Multiple threads with data parallelism
// Parallel summation of values in the array:
//	 Divide the data into threads, each threads does a partial sum, them sum the partial sums

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define NUM_THREADS 2
#define N 16384

int partialSums[NUM_THREADS] = {0};
int *myArray = NULL;

void* summer(void* id);

int main(){

	int i;
	myArray = (int *)malloc(sizeof(int) * N);

	int sumSequential = 0;
	int sumMultiThreaded = 0;

	unsigned int seed = 19;
	for(i = 0; i < N; i++){
		myArray[i] = rand_r(&seed) % 13; // numbers 0-12
		sumSequential += myArray[i];
	}

	printf("Sum (sequential): %d\n", sumSequential);



	pthread_t threads[NUM_THREADS];
	int threadArgs[NUM_THREADS];

	for(i = 0; i < NUM_THREADS; i++){
		threadArgs[i] = i;
		pthread_create(&threads[i], NULL, summer, &threadArgs[i]);
	}

	for(i = 0; i < NUM_THREADS; i++){
		pthread_join(threads[i], NULL);
	}

	for(i = 0; i < NUM_THREADS; i++){
		sumMultiThreaded += partialSums[i];
	}

	printf("Sum (multi threaded): %d\n", sumMultiThreaded);

return 0;
}

void* summer(void* id){

	int t = *((int *)id);

	int lower = t * (N / NUM_THREADS); // t will be 0 and 1
	int upper = (t+1) * (N / NUM_THREADS);

	int i;
	for(i = lower; i < upper; i++){
		partialSums[t] += myArray[i];
	}
	pthread_exit(0);
}
