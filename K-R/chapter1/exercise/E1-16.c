#include <stdio.h>
#define MAXLINE 1000

int getline_k(char line[], int maxline);/*conflict with getline in stdio.h*/
void copy(char to[], char from[]);

/*	Exercise 1-16
 *   Revise the main routine of the longest-line program 
 *   so it will correctly print the length of arbitrary 
 *   long input lines, and as much as possible of the text.
 */
main()
{
	int len;		/* current line length */
	int max;		/* Maximum length seen so far*/
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while ((len = getline_k(line,MAXLINE)) > 0) {
		printf("%d %s", len, line);
		if (len > max) {
			max = len;
			copy(longest,line);
		}
	}
	if (max > 0)		/* there was a line */
		printf("%d %s", max, longest);
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

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
