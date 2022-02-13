#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fptr;
	fptr = fopen("sample4.txt", "w+");

	char s[30];

	if(fptr == NULL){
		printf("The file could not be opened!\n");
		exit(1);
	}
	printf("The file is opened\n");

	fprintf(fptr, "operating_systems");

	fseek(fptr, 0, SEEK_SET);
	fscanf(fptr, "%s", s);
	printf("The file's content is: %s\n", s);


	fseek(fptr, 0, SEEK_SET);
	printf("The size of data in the file %ld\n", ftell(fptr));

	fseek(fptr, 0, SEEK_END);
	printf("the size of data in the file is: %ld (excluding eof)\n", ftell(fptr));

	fseek(fptr, 0, SEEK_SET);
	printf("%c\n", fgetc(fptr));

	fseek(fptr, 3, SEEK_SET); // holds 4th element
	printf("%c\n", fgetc(fptr)); // prints 4th element but after that fptr incremented by fgetc and points 5th element

	fseek(fptr, 1, SEEK_CUR); // holds 6th element
	printf("%c\n", fgetc(fptr)); // prints 6th element but after that fptr points 7th element

	fclose(fptr);
	return 0;
}
