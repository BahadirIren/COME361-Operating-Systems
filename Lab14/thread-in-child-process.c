
// Fork a process and create a thread in it

#include <stdio.h>
#include <unistd.h> // fork
#include <pthread.h>
#include <sys/wait.h>

int value = 0;

void* runner();

int main(){

	pid_t pid = fork();
	pthread_t tid;

	if(pid < 0){ // fork failed
		return -1;
	}else if (pid == 0){ // child

		pthread_create(&tid, NULL, runner, NULL);
		pthread_join(tid, NULL);

		printf("Child: %d\n", value);

	}else{ // parent

		wait(NULL); // wait for child to finish
		printf("Parent: %d\n", value);
	}

return 0;
}


void* runner(){
	value = 5;
	pthread_exit(0);
}
