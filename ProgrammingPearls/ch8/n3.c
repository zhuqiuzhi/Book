/*
 * File Name: n3.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	double *v, maxsofar, sum;
	int n, i, j, k, left, right;

	scanf("%d", &n);
	v = (double *)calloc(n, sizeof(double));
	for (i = 0; i < n; i++)
		scanf("%lf", &v[i]);
	
	maxsofar = 0;
	left = 0;
	right = 0;
	for (i = 0; i < n; i++)
		for (j = i; j < n; j++) {
			sum = 0;
			/* sum up v[i..j] */
			for (k = i; k <= j; k++)
				sum += v[k];
			if (maxsofar < sum) {
				left = i;
				right = j;
				maxsofar = sum;
			}
		}
	printf("\t%g\n", maxsofar);
	if (maxsofar > 0) {
		for (i = left; i <= right; i++)
			printf(" %g", v[i]);
		putchar('\n');
	}

	return 0;
}
