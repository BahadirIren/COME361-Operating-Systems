/*
	Process communication example using pipe
		A time program which shows execution time of other programs

	we must give parameter to it
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/time.h>
#include<string.h>

#define READ_END 0
#define WRITE_END 1

int main(int argc, char* argv[]){

	pid_t pid;

	// create pipe
	int fd[2];
	if(pipe(fd) == -1) return -1;

	char cmd[100];
	strcpy(cmd, "/bin/");
	strcat(cmd, argv[1]);

	struct timeval time1, time2; // time library

	pid = fork();

	if(pid >0){ // parent
		close(fd[WRITE_END]);
		wait(NULL);
		gettimeofday(&time2, NULL);
		read(fd[READ_END], &time1, sizeof(struct timeval));
		// difference in sec, difference in milliseconds
		printf("Execution time: %lf\n", time2.tv_sec - time1.tv_sec + (time2.tv_usec - time1.tv_usec) / 1000000.);
		close(fd[READ_END]);
	}else if (pid == 0) { // child
		close(fd[READ_END]);
		gettimeofday(&time1, NULL);
		write(fd[WRITE_END], &time1, sizeof(struct timeval));
		execlp(cmd, "", argv[2], NULL);
	}
return 0;
}
