/*
 * File Name: E3-1.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/02
 */

/*
 *		Exercise 3-1
 *	Write a version with only one test inside the loop of binarysearch
 *	and measure the difference in run-time
 */
#include <stdio.h>

/* x is search target, n is numnber of elements of the sorted array v */
int binsearch(int x, int v[], int n);

int main()
{

	int v[10000];
	int n, t;

	while (scanf("%d %d", &n, &t) != EOF) {
		int i;
		for (i = 0; i < n; i++)
			v[i] = 10 * i;
		printf(" %d\n", binsearch(t, v, n));
	}
	
	return 0;
}
int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n-1;
	mid = (low+high) / 2;	
	while (low <= high && v[mid] != x) {
		if (x > v[mid])
			low = mid + 1;
		else
			high = mid - 1; 
		mid = (low+high) / 2;	
	}
	if (v[mid] == x)
		return mid;
	else
		return -1;
}
