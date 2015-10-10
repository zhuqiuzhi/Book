/*
 * File Name: E2-4.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/02
 */

/*
 *             Exercise2-5
 *   Write the function any(s1,s2),which returns the first location in
 *  the string s1 where any character from the string s2 occurs,or -1 
 *  if s1 contains no characters from s2.
 */

#include <stdio.h>
#include <string.h>

int any(const char s1[], const char s2[]);

int main()
{
	char s1[1000];
	char s2[1000];

	printf("Usage: string1 string2\n");
	while (scanf("%s %s", s1, s2) != EOF) {
		printf(" location: %d\n", any(s1, s2));
		printf(" first occurrence: %c\n", *strpbrk(s1, s2));
	}
	return 0;
}

int any(const char s1[], const char s2[])
{
	int  i, j;

	for (i = 0; s2[i] != '\0'; i++) {
		for (j = 0; s1[j] != '\0' && s1[j] != s2[i]; j++)
			;
		if (s1[j] != '\0')
			return j;
	}
	if (s2[i] == '\0')
		return -1;
}
