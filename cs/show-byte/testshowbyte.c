/*
 * File Name: testshowbyte.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2014/08
 */

#include <stdio.h>
#include "show_bytes.h"

void test_show_bytes(int val)
{
	int ival = val;
	float fval = (float)val;
	int *pval = &val;

	showb_int(ival);
	showb_float(fval);
	showb_pointer(pval);
}

int main()
{
	test_show_bytes(12345);
	test_show_bytes(-12345);
}
