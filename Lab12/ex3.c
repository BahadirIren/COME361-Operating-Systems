/*
	Creating a simple command line

*/


#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>

int main(){

	pid_t pid;
	char dir[100];
	char command[100];

	while (1){
		strcpy(dir, "/bin/");
		printf("come361> ");
		scanf("%s", command);

		pid = fork();

		if (pid < 0){
			return 1;
		}else if (pid == 0){ // child

			strcat(dir, command);
			execlp(dir, "", NULL);
		}else { // parent
			wait(NULL);
		}
	}


return 0;
}
