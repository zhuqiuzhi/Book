/*
 * File Name: 2-8squeeze.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/02
 */

#include <stdio.h>

void squeeze(char s[], int c);

int main()
{
	char s[100];
	int c;
	while (scanf("%s %c", s, &c) != EOF) {
		squeeze(s, c);
		printf(" %s\n", s);
	}
	return 0;
}

void squeeze(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}
