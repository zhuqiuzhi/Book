#include <stdio.h>

#define MAXHIST 15	/* max length of histogram */
#define MAXWORD 19	/* max lenght of word */
#define IN 1  		/* inside a word */
#define OUT 0 		/* outside a word */

/*
 *	Exercise 1-13  horizontal version
 *   Write a program to print a histogram 
 *   of the lengths of words in its input.
 */
main()
{
	int c, i, wl, state;
	int n;		/* length of each bar */
	int maxvalue;		/* maximum value for wl[] */
	int wlcount[MAXWORD];	/* counter word that lenght is */
	
	state = OUT;
	wl = 0;
	for (i = 0; i < MAXWORD; ++i)
		wlcount[i] = 0;
	
	while ((c=getchar()) != EOF)
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {    		/* out of word */
				if (wl < MAXWORD)
					++wlcount[wl];
				else
					++wlcount[0];  	/* overflow length*/
				wl = 0;
			}
			state = OUT;
		}
		else if (state == OUT) {		/* begin of word */
			state = IN;
			wl = 1;
		} else					/* inside word */
			++wl;

	/* find maxvalue of wlcount[1..MAXWORD] */
	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i)
		if ( wlcount[i] > maxvalue)
			maxvalue = wlcount[i];

	/* print horizontal histogram */
	for (i = 0; i < MAXWORD; ++i) {
		if(wlcount[i] > 0) {
			if (i == 0)
				printf("ol - %3d: ",wlcount[0]);
			else
				printf("%2d - %3d: ",i,wlcount[i]);
			/* */
			if ((n=wlcount[i]*MAXHIST/maxvalue) <= 0)
		 		n = 1;
			while (n > 0) {
				putchar('*');
				--n;
			}
			putchar('\n');
		}
	}
}
