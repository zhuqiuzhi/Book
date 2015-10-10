#include <stdio.h>

/*	Exercise 1-9
 * Write a program to copy its input to its output, replacing each string 
 * of one or more blanks by a single blank.
 */
main()
{
	int c,ns;
	
	ns = 0;  /* number of blanks  */	
	while ((c=getchar()) != EOF) {
		if ( c == ' ')
			++ns;
		else
			ns = 0;
		if ( ns < 2)  /* only a single blank or else character */
			putchar(c);
		else
			;
	}
}
