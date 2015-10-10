/*
 * File Name: E1-10.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/01
 */
/*
	Execise-1-10
    Write  a program to copy its input to its output,replacing each
    tab by \t,each backspace by \b,each backslash by \\.
*/
#include <stdio.h>

main()
{
	int c;
	
	while ((c=getchar()) != EOF)
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		} else if (c == '\b') {
			putchar('\\');
			putchar('b');
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		} else
			putchar(c);
}
