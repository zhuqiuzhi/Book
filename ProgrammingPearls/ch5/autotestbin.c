/*
 * File Name: autotestbin.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2014/07
 */

#include <stdio.h>
#include <assert.h>
#include "binarysearch.h"

#define s binarysearch

int main()
{
	int i, n, maxn;
	int x[MAXN];

	while (scanf("%d", &maxn) != EOF) {
		assert(maxn <= MAXN);
		for(n = 0; n <= maxn; n++) {
			printf("n = %d\n", n);
			/* test distinct elements (plus one at the end)*/
			for (i = 0; i < n; i++)
				x[i] = 10 * i;
			for (i = 0; i < n; i++) {
				assert(s(x, n, 10*i) == i);
				assert(s(x, n, 10*i -5) == -1);
			}
			assert(s(x, n, 10*n-5) == -1);
			assert(s(x, n, 10*n) == -1);
			/* test equal elements */	
			for (i = 0; i < n; i++)
				x[i] = 10;
			if (n == 0)
				assert(s(x, n, 10) == -1);
			else
				assert(0 <= s(x,n,10) && s(x,n,10) < n);
			printf(" sucess\n");
		}
	}
	return 0;
}
