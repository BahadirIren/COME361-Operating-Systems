
/*

	Call 2 forks in a program and do some observations

	parent
	  |	\
      child1	child2
	  |
     grandchild

	first fork we have parent and child1
	second fork we created grandchild and child2

		pid	  pid2
	parent   >0	   >0
	child1	 =0        >0  (child1's pid2 value is >0 because it is directly inherited from parent)
	child2   >0        =0  (child2's pid value is >0 because it is directly inherited from parent)
	gchild   =0        =0  (gchild's pid value is =0 because it is inherited from pid of child1)
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main(){

	pid_t pid, pid2;
	pid = fork();
	pid2 = fork();

	if(pid < 0 || pid2 < 0){ // fork not successful
		printf("Fork failed!\n");
		return 1;
	}

	if(pid > 0 && pid2 >0){ // parent
		wait(NULL); // wait for one of it's child
		wait(NULL); // wait for one of it's child
		printf("Parent says bye\n");
	}else if (pid == 0 && pid2 >0){ // child1
		wait(NULL); // wait for grandchild
		printf("Child1 says bye\n");
	}else if (pid >0 && pid2 == 0){ // child2
		printf("Child2 says hello\n");
	}else { // grandchild
		printf("Grandchild says hello\n");
	}

return 0;
}
