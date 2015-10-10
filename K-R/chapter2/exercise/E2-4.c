/*
 * File Name: E2-4.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/02
 */
/*
 * 		Exercise 2-4.
 *     Write a alternate version of squeeze(s1,s2) that deletes each  
 *  character in s1 that matchs any character in the string s2.
 */


#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
	char s1[1000];
	char s2[1000];

	printf("Usage: string1 string2\n");
	while (scanf("%s %s", s1, s2) != EOF) {
		squeeze(s1, s2);
		printf(" s1: %s\n", s1);
	}
	return 0;
}

void squeeze(char s1[], char s2[])
{
	int c;
	int i;

	for (i = 0; (c=s2[i]) != '\0'; i++) {
		/* printf(" i = %d, c = %c\n", i, c); */
		int j, k;
		for (j = k = 0; s1[j] != '\0'; j++) {
			/* printf("j = %d, s1[j] = %c\n", j, s1[j]); */
			if (s1[j] != c)
				s1[k++] = s1[j];	
		}
		s1[k] = '\0';
	}
}
