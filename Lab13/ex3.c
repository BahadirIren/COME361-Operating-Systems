
// Multiple threads example

#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h> // for sleep

void* worker(void *t);
void* worker2();

char *message = "hello thread";

int main(int argc, char* argv[]){

	int nThreads = atoi(argv[1]); // atoi for casting to int

	pthread_t threads[nThreads];

	int threadArgs[nThreads], i;

	for(i = 0; i < nThreads; i++){
		threadArgs[i] = i;
		pthread_create(&threads[i], NULL, worker, &threadArgs[i]);
	}

	pthread_t tid;
	pthread_create(&tid, NULL, worker2, NULL);


	for(i = 0; i < nThreads; i++){
		pthread_join(threads[i], NULL);
	}

	pthread_join(tid, NULL);

return 0;
}

void* worker(void *t){
	printf("%s, %d\n", message,*(int *)t); // void to integer
	sleep(100);
	pthread_exit(0);
}

void* worker2(){
	printf("Hello, I do the second work\n");
	pthread_exit(0);
}
