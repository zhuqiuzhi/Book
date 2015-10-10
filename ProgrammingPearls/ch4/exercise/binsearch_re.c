#include <stdio.h>
#define  MAXN 100000

int binsearch(int x[], int l, int u, int t);

main()
{
	int n, t;
	int x[MAXN];
	while (scanf("%d %d", &n, &t) != EOF) {
		if (n > MAXN) {
			printf("n assume less than %d\n", MAXN);
			continue;
		}
		int i;
		for (i = 0; i < n; i++)
			x[i] = 10 * i;
		printf(" %d\n", binsearch(x, 0,  n-1, t));
	}
	
	return 0;
}

int binsearch(int x[], int l, int u, int t)
{
	if ( l <= u) {
		int mid;
		mid = l + (u-l) / 2; 
	//printf(" %d %d %d\n", l, mid , u);
		if (x[mid] == t)
			return mid;
		else if (t > x[mid])
			return binsearch(x, mid+1, u, t);
		else 	/* t < x[mid] */
			return binsearch(x, l, mid-1, t);
	}else
		return -1;
}
