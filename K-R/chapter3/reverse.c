/*
 * File Name: reverse.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>
#include <string.h>


void reverse(char s[]);
int main()
{
	char s[] = "reversel";

	printf("%s\n", s);
	reverse(s);
	printf("%s\n", s);
}

/* reverse: reverse string s in place */
void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j-- ) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
