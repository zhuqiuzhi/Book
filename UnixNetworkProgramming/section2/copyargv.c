#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int debug = 1;
char *progname;

int main(int argc,char *argv[])
{
	int i;
	char *ptr;

	progname = argv[0];
	printf("%i\n", argc);
	for (i = 1; i < argc; i++) {
		ptr = (char *)malloc(strlen(argv[i]) + 1);
		strcpy(ptr, argv[i]);
		if (debug)
			printf("%s\n", ptr);
	}
	return 0;
}
