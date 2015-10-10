/*
 * File Name: timebin.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2014/07
 */

#include <stdio.h>
#include <time.h>
#include <assert.h>
#include "binarysearch.h"

int main()
{
	int algnum, n, ntests;
	int x[MAXN];
	clock_t starttime, clicks;

	while (scanf("%d %d %d", &algnum, &n, &ntests) != EOF) {
		assert (n <= MAXN);
		int i, j;
		for (i = 0; i < n; i++)
			x[i] = i;
		starttime = clock();
		for (j = 0; j < ntests; j++) {
			for(i = 0; i < n; i++)
				switch(algnum){
				case 1:assert(binarysearch(x,n,i)==i);break;
				case 2:assert(2);break;
				}
		}
		clicks = clock() - starttime;
		printf(" %d %d %d %ld %g\n", 
	algnum, n, ntests, clicks, clicks/(1e-9*CLOCKS_PER_SEC*n*ntests));
	}
	return 0;
}
