#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXN 10000000	/* 可能生成的最大随机整数，也是随机数的最大数目 */
int x[MAXN];

int randint(int l, int u);

/*
 *  从0~n-1中随机选择出k个整数，并且输出的顺序是随机的 
 *  gen $1 distinct integers from U[0,$2)
 */

main(int argc, char *argv[])
{
	int i, k, n, t, p;
	 	
	k = atoi(argv[1]);
	n = atoi(argv[2]);
	for (i = 0; i < n; i++)
		x[i] = i;

	srand((unsigned)time(NULL));
	for (i= 0; i < k; i++) {
		p = randint(i, n-1)
		t = x[p];  x[p] = x[i]; x[i] = t; 
		printf("%d\n",x[i]);
	}
}

/* return random interger in [l,u]*/
int randint(int l, int u)
{
	return l + rand() % (u-l+1);
}
