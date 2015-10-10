/*
 * File Name: itoa.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>
#include <string.h>

int main()
{
	int n; 
	char s[100];
	void itoa(int n, char s[]);

	scanf("%d", &n);
	itoa(n, s);
	printf("%s\n", s);
	return 0;	
}

void itoa(int n, char s[])
{
	int i, sign;
	void reverse(char []);

	if ((sign = n) < 0) /* record sign */
		n = -n;	    /* make n positive */
	i = 0;
	do {	/* generate digits in reverse order */
		s[i++] = n % 10 + '0';	/* get next digit */
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

void reverse(char s[])
{
	int c, i, j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
