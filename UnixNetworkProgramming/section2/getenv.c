#include <stdio.h>

int main()
{
	char *ptr, *getenv();

	if ((ptr=getenv("HOME")) == NULL)
		printf("HOME is not defined");
	else
		printf("HOME=%s\n", ptr);
	
	return 0;
}
