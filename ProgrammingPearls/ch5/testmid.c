/*
 * File Name: testmid.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2014/07
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int low, up, mid1,mid2;

	low = 0x7FFFFFFE;	/* 2**31 - 2*/
	up = 0x7FFFFFFF;	/* 2**31 - 1*/
	mid1  = (low +up) / 2;	/* mid will be  -1 */
	mid2 = low + (up - low)/ 2; /* mid mid will be 2147483646 */
	printf("%d\n", mid1);
	printf("%d\n", mid2);
}
