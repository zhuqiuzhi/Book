#include <stdio.h>

int main()
{
	printf("pid = %d, ppid = %d\n", getpid(), getppid());
	
	return 0;
}
