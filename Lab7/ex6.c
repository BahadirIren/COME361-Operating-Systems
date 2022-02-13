#include<stdio.h>
#include<stdlib.h>

int main(){

	int *ptr;
	int n, i;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	ptr = (int *)malloc(n*sizeof(int));

	if(ptr == NULL){
		printf("Memory not allocated!");
		exit(0);
	}else{
		for(i = 0; i < n; i++){
			ptr[i] = i+1;
		}

		for(i = 0; i < n; i++){
			printf("%d\n", ptr[i]);
		}

	}

	ptr = (int *)realloc(ptr, 2*n*sizeof(int));
	ptr[n+1] = n+2;
	printf("the n+1'th value of the array is: %d\n", ptr[n+1]);
	free(ptr);

return 0;
}
