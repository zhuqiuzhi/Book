/*
 * File Name: scanning.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	double *v, maxsofar, maxendinghere;
	int i, n;
	
	scanf("%d", &n);
	v = (double *)calloc(n, sizeof(double));
	for (i = 0; i < n; i++)
		scanf("%lf", &v[i]);

	maxsofar = maxendinghere = 0;
	for (i = 0; i < n; i++) {
		maxendinghere = maxendinghere+v[i] > 0 ? maxendinghere+v[i]: 0;
		maxsofar = maxendinghere > maxsofar ? maxendinghere: maxsofar; 
	}
	printf("\t%g\n", maxsofar);
	return 0;
}
