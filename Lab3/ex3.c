#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]){
	char greet[30] = "hello";
	if(argc >1){
		strcat(greet, argv[1]);
		printf("%s\n", greet);
	}else
		printf("%s\n", greet);
return 0;

}
