/*
 * File Name: E1-18.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/01
 */

/*
 *          Exercise 1-18
 *   Write a program to remove trailing blanks and tabs from each 
 *   line of input, and to delete entirely blank lines.
 */
#include <stdio.h>
#define MAXLINE 1000

int getline_k(char s[], int lim); /* get a newline from input */
int remove_k(char s[]);    /* remove trailing blanks and tabs in line */

int main()
{
	char line[MAXLINE];

	while (getline_k(line, MAXLINE) > 0)
		if (remove_k(line) > 0)
			printf("%s", line);
	return 0;
}

int getline_k (char s[], int lim)
{
	int c, i;
	
	for (i = 0; i < lim-1 && (c=getchar())!= EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return i;
}
/*
 * precondition: s is array of character.
 * 
 * return location of '\0', if s is not entirely blank line. 
 * rerurn -1 , if s is entirely blank line.
 */
int remove_k(char s[])
{
	int i;
	
	i = 0;
	while (s[i] != '\n')  /* find a null charater */
		i++;
 	--i;                  /* bach off  from '\0' */
	while (i >= 0 && (s[i]==' '||s[i]=='\t'))
		--i;
	/* now,location of i  is't  blank charater or i equals -1 */
	if (i >= 0) {
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	return i;
}
