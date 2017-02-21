
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>


#define _MORSE_PATH_ "/dev/morse"

int main(int argc, char *argv[])
{
    int fd = 0;

	if ((fd = open(_MORSE_PATH_, O_RDWR | O_NONBLOCK)) < 0) {
		perror("open()\n");
		exit(1);
	}
	
	printf("open device morse\n");
	sleep(2);
	close(fd);
	
    return 0;
}
