// Create a child process from a parent

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main(){

	pid_t pid;
	int x = 5;

	pid = fork();

	if(pid < 0){ // fork not successful
		printf("Fork failed!\n");
		return 1;
	}else if(pid == 0){ // child
		printf("x: %d\n", x);
		x = 7;
		printf("x: %d\n", x);
		execlp("/bin/ls", "ls","-al" ,NULL); // path, argv0, argv1
	}else{ // parent
		printf("PID: %d\n", pid); // prints the pid of the child
		wait(NULL); // parent waits child to terminate
		printf("Child completed!\n");
		printf("x: %d\n", x);
	}

return 0;
}
