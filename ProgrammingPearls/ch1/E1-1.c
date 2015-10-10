#include <stdio.h>
#include <stdlib.h>

int intcmp(const void *x, const void *y);
int a[1000000];

int main()
{
	int i, n;
	n = 0;
	while (scanf("%d",&a[n]) != EOF)
		n++;
	qsort(a, n, sizeof(int), intcmp);

	for (i = 0; i < n; i++)
		printf("%d\n",a[i]);

	return 0;
}

int intcmp(const void *x, const void *y)
{
	return *(int *)x - *(int *)y;
}
