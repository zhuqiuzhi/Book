#include <stdio.h>
#include <limits.h>

int main()
{
	int num = 0;

	while (num < INT_MAX && getchar() != EOF)
		num++;

	printf("%d\n", num);
	return 0;
}
