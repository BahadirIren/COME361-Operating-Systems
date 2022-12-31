// FILE PROCESSING IN C

// TEXT FILES --> .txt, c editor (dec c++), .bas etc..
// BINARY FILES --> .pdf, jpg, png, gif etc..

// writing functions for text files
// 1) fprintf
// 2) fputs
// 3) fputc

// writing function for binary files
// 1) fwrite

// reading functions for text files
// 1) fscanf
// 2) fgets
// 3) fgetc

// reading functions for binary files
// 1) fread


// file open modes
// 1) r --> open an existing file for reading.
// 2) w --> creates a file for writing. If the file exist, discards the current contents.
// 3) a --> (append) open or create a file for writing at the end of the file.
// 4) r+ --> open an existing file for update (reading and writing functions).
// 5) w+ --> create a file for update. Deletes the contents of the file while opening. (reading and writing)
// 6) a+ --> open or create a file for writing and reading. Does not delete the informations while file is opening. 
// + means it supports both reading and writing

// ---------------------------------------------------

#include<stdio.h>
#include<stdlib.h> // for exit command

int main(){

	FILE *fptr;
	fptr = fopen("sample.txt", "w");

	if(fptr == NULL){
		printf("The file could not be opened!\n");
		exit(1);
	}

	printf("The file has been opened\n");
	fprintf(fptr, "first program");

	fclose(fptr);

return 0;
}
