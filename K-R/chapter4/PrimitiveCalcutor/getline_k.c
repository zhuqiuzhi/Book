/*
 * File Name: getline_k.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */
/* getline: get line into s, return length */
#include <stdio.h>

int getline_k(char s[], int lim)
{
	int c, i;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}
