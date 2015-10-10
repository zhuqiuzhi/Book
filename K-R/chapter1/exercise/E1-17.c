#include <stdio.h>
#define MAXLINE 1000
#define LONGLINE 80
int getline_k(char line[], int maxline);
void copy(char to[], char from[]);

/*
 *	Exercise 1-17 
 *   Write a program to print all input lines that 
 *   are longer than 80 characters. 
 */

main()
{
	int len;		/* current line length */
	char line[MAXLINE];	/* current input line  */

	while ((len = getline_k(line, MAXLINE)) > 0)
		if(len > LONGLINE)
			printf("%s",line);
	return 0;
}

/* getline_k: read a line into s ,return length */
int getline_k(char s[], int lim)
{
	int c, i;

	for(i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; i++ )
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0'; 
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
