/*
 * File Name: E3-3.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void expand(char s1[], char s2[]);

int main()
{

	char s1[] = "a-z0-9";
	char s2[100];
	expand(s1, s2);
	printf("%s\n %s\n", s1, s2);
}

void expand(char s1[], char s2[])
{
	char c;
	int i, j;
	
	i = j = 0;
	while ((c=s1[i++]) != '\0') {
		if (s1[i] == '-' && s1[i+1] >= c) {
			i++;
			while (c <= s1[i]) /* expand shorthand */
				s2[j++] = c++;
			//i++;
		} else
			s2[j++] = c;
	}
	s2[j] = '\0';
}
