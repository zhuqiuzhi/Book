/*
 * File Name: shellsort.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>

void shellsort(int v[], int n);

int main()
{
	int v[1000];
	int n; 
	while (scanf("%d", &n) != EOF) {
		int i;
		for (i = 0; i < n; i++) {
			v[i] = 10 * (n-i);
			printf("%d ", v[i]);
		}
		shellsort(v, n);
		putchar('\n');
		for (i = 0; i < n; i++)
			printf("%d ", v[i]);
		putchar('\n');
	}

}

void shellsort(int v[], int n)
{
	int gap, i, j, temp;

	for (gap = n/2; gap > 0; gap /= 2)
		for (i = gap; i < n; i++)
			for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
	
}
