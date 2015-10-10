/*
 * File Name: main.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/04
 */

#include <stdio.h>
#define SYSTEM BSD
#if SYSTEM == SYSV
	#define HDR "sysv.h"
#elif SYSTEM == BSD
	#define HDR "bsd.h"
#elif SYSTEM == MSDOS
	#define HDR "msdos.h"
#else
	#define HDR "default.h"
#endif

#include HDR

int main()
{
	printf("%d\n", N);
}
