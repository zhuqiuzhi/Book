/*
 * File Name: divide-conquer.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
double maxsum3(double v[], int l, int u);

int main()
{
	int n, i;
	double *x;  
	
	scanf("%d", &n); /* get number of elements */
	x = (double *)calloc(n, sizeof(double));
	for (i = 0; i < n; i++)
		scanf("%lf", &x[i]);
	printf("\t%g\n",maxsum3(x, 0, n-1));
	return 0;
}

double maxsum3(double v[], int l, int u)
{
	double max(double, double);
	double lmax, rmax, sum;
	int i, m;
	/* handle small vector */
	if (l > u)
		return 0.0;
	if (l == u)
		return max(0.0, v[l]);
	
	/* compute mc*/
	m = (l + u) / 2;
	  /* find max crossing to left */
	lmax = sum = 0.0;
	for (i = m; i >= l; i--) {
		sum += v[i];
		lmax = max(lmax, sum);
	}
	  /* find max crossing to right */
	rmax = sum = 0.0;
	for (i = m+1; i <= u; i++) {
		sum += v[i];
		rmax = max(rmax, sum);
	}
	return max(lmax+rmax, max(maxsum3(v, l, m), maxsum3(v, m+1, u)) );	
}

double max(double f, double k)
{
	return f > k ? f: k;
}
