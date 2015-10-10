#include <stdio.h>
#include "binarysearch.h"

main()
{
	int n;
	Datatype t;
	Datatype x[MAXN];

	printf("Usage: number target");
	while (scanf("%d %d", &n, &t) != EOF) {
		int i, p;
		for (i = 0; i < n; i++)
			x[i] = 10 * i;
		p = binarysearch(x, n, t);
		printf(" %d\n", p);
	}
}
