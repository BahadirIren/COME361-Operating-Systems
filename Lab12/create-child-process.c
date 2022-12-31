// Create a child process from a parent + experiment with orphans, zombies, ...

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main(){

	pid_t pid = fork();

	if(pid < 0){ // fork not successful
		printf("Fork failed!\n");
		return 1;
	}else if(pid == 0){ // child
		printf("My pid: %d my parent pid: %d .... sleeping for some time ...\n", getpid(),getppid());
		sleep(5);
		printf("child finished!\n");
	}else{ // parent
		printf("child pid: %d\n", pid);
		// sleep(20); // if we uncomment this line, child process finishes but parent process is not called wait so child process becomes zombie
		wait(NULL); // if we comment this line, child process becomes orphan
		// kill(pid, SIGTERM); // we can kill child process if we don't have wait
		printf("Parent finished!\n");
	}

return 0;
}
