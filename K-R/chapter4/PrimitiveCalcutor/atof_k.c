/*
 * File Name: atof.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <ctype.h>  /* for isspace() , isdigit() */

int atof_k(char s[])
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;
	sign = (s[i] == '-') ? -1: 1; 
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i]-'0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i]-'0');
		power *= 10.0;
	}
	return sign * val / power;	
}
