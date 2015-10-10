/*
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	double *v, *cumarr, maxsofar, sum;
	int n, i, j, left, right;

	scanf("%d", &n);
	v = (double *)calloc(n, sizeof(double));
	cumarr = (double *)calloc(n+1, sizeof(double)) + 1;

	for (i = 0; i < n; i++)
		scanf("%lf", &v[i]);

	cumarr[-1] = 0;
	for(i = 0; i < n; i++)
		cumarr[i] = cumarr[i-1] + v[i]; /* i=0,will access cumarr[-1]*/
	
	maxsofar = 0;
	left = 0;
	right = 0;
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			/* sum up v[i..j] */
			sum = cumarr[j] - cumarr[i-1];
			if (maxsofar < sum) {
				left = i;
				right = j;
				maxsofar = sum;
			}
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
