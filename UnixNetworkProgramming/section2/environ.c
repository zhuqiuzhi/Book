#include <stdio.h>

int main()
{
	int i;
	extern char **environ;
	
	for (i = 0; environ[i] != NULL; i++)
		printf("%s\n", environ[i]);
	return 0;
}
