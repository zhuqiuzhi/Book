#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
	if(fork() == 0)
		execl("copy", "copy", argv[1], argv[2], 0);
	wait((int*) 0);
	printf("copy done\n");
	return 0;
}
