/*
 * File Name: 3xplu1.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2014/07
 */

#include <stdio.h>
#include <assert.h>

int main()
{
	int x;

	while (scanf("%d", &m) != EOF) {
		printf("%d\n", counter);
	}
	return 0;
}

int thrxplu1(int x) 
{
	int counter;

	counter = 0;
	while (x != 1)
		if ((x&1) == 0) {
			x = x >> 1;
			++counter;
		}
		else
			x = 3 * x + 1;
	return counter;
}
