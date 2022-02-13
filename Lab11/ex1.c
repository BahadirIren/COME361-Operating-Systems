// low level file i/o
// implement cp command in linux using low level functions: cp file1 file2


#include<unistd.h>
#include<fcntl.h>

#define BUFSIZ 1024

int main(int argc, char * argv[]){

	char buf[BUFSIZ];
	int n;

	if(argc < 3){
		return 0;
	}

	int fd = open(argv[1], O_RDONLY); // first argument
	int fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH); // man 2 open

	while( (n = read(fd, buf, BUFSIZ)) > 0 ){
		write(fd2, buf, n); // n is how many bytes are read
	}

return 0;
}
