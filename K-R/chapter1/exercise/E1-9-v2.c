#include <stdio.h>

/* 	Exercise 1-9
 *  Write a program to copy its input to its output, replacing each 
 *  string of one or more blanks by a single blank.
 */
main()
{
	int c, lastc;

	lastc = 'a';
	while ((c=getchar()) != EOF){
		if (c != ' ' || lastc != ' ')
			putchar(c);
		else
			;
		lastc = c;
	}
}
