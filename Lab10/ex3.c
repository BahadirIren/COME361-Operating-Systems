// fopen --> open a new file
// fseek(fptr, n, SEEK_SET) --> pointer moves n units from begining of the file
// fseek(fptr, n, SEEK_CUR) --> the pointer moves n units from its current position.
// fseek(fptr, n, SEEK_END) --> the pointer moves n units from end of the file.

// ftell --> gives the size of the file.
// feof  --> checks the file pointer. If the pointer is at the end of the file, it returns 1
// fclose --> closes the file.

// ----------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fptr;
	char s[30];
	int i;

	fptr = fopen("sample3.txt", "a+");

	if(fptr == NULL){
		printf("The file could not be opened!\n");
		exit(1);
	}

	printf("The file is opened\n");

	fprintf(fptr, "Dogus University");

	fseek(fptr, 0, SEEK_SET); // pointer moves to first element of the file

	fscanf(fptr, "%s\n", s);

	while(!feof(fptr)){
		printf("%s\n", s);
		fscanf(fptr, "%s", s);
	}

	fclose(fptr);
	return 0;
}
