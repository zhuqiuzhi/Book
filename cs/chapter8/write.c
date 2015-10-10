/*
 * File Name: write.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>
#include <stdlib.h>
#include "syscall.h"

int main()
{
	write(1, "hello, world\n", 13);
	exit(0);
}
