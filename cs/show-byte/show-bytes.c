/*
 * File Name: show-bytes.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2014/08
 */

#include "show_bytes.h"
#include <stdio.h>

void show_bytes(Byte_pointer start, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf(" %.2x", start[i]);
}

void showb_int(int x)
{
	printf("%d", x);
	show_bytes((Byte_pointer)&x, sizeof(int));
	putchar('\n');
}

void showb_float(float x)
{
	printf("%f", x);
	show_bytes((Byte_pointer)&x, sizeof(float));
	putchar('\n');
}

void showb_pointer(void *x)
{
	printf("%p", x);
	show_bytes((Byte_pointer)x, sizeof(void *));
	putchar('\n');
}
