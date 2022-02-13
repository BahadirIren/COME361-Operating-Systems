#include<stdio.h>
int main(){
	int lineCount = 0;
	int c;
	while((c=getchar()) != EOF){
		putchar(c);
		if(c == '\n'){
			lineCount++;
		}
	}
	printf("Total line: %d\n", lineCount);
	printf("Terminating...\n");
return 0;
}
