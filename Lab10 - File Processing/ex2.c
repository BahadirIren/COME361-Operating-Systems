#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fptr;
	char s[30];
	int i;

	fptr = fopen("sample2.txt", "w");

	if(fptr == NULL){
		printf("The file could not be opened!\n");
		exit(1);
	}

	printf("The file is opened\n");

	for(i = 0; i < 4; i++){
		printf("The %d. string: ", i+1);
		scanf("%s", s);

		fprintf(fptr, "%s\n", s);
	}

	fclose(fptr);

return 0;
}
