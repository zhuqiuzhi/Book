#include <stdio.h>

#define IN 1
#define OUT 0

/*	Exercise 1-12 
 *   Write program that print its input one word per line. 
 *   note: not output space characters
 */
main()
{
	int c,state;

	state = OUT;
	while ((c=getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')	{
			if (state == IN) {
				putchar('\n');  /* end of word */
				state = OUT;
			}
		} else if (state == OUT) {
			state = IN;	/* begin of word */
			putchar(c);
		} else
			putchar(c);	/* inside a word */	
	}
}
