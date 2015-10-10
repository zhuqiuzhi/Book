/*
 * File Name: E2-3.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/02
 */

/*
 *         Exercise 2-3
 *   Write the function htoi(s),which convert a string of hexadecimal digits
 *   into its equicalent integer value.
 */
#include <stdio.h>
#include <string.h>   /* include information of function strlen */
#include <ctype.h>    /* include information of function isdight */

long htoi(const char *s);

int main()
{
	char s[100];

	while (scanf("%s", s) != EOF)
		printf(" its equivalent integer value = %ld\n", htoi(s));
	return 0;
}

/* 
 *   convert a string of hexadecimal digits
 *   into its equicalent integer value.
 */
long htoi(const char *s)
{
	int i = strlen(s) - 1 ; /* location of last character of string s*/
	int c;
	long int equival = 0;
	long int weight = 1;
	
 	while (i >= 0) {
		//printf("  i= %d equival = %ld\n", i, equival);
		c = s[i];
		//printf("  c = %c\n", c);
		if (c != '0' || c != 'x' || c != 'X') {
			if (isdigit(c))
				equival += (c-'0') * weight;
			else 
				switch (c) { 
					case 'a': case 'A':
					equival += 10 * weight;  break;
					case 'b': case 'B':
					equival += 11 * weight;  break;
					case 'c': case 'C': 
					equival += 12 * weight;  break;
					case 'd': case 'D': 
					equival += 13 * weight;  break;
					case 'e': case 'E': 
					equival += 14 * weight;  break;
					case 'f': case 'F': 
					equival += 15 * weight;  break;
				}
			--i;
			weight *= 16;
		}
	}
	return equival;
}
