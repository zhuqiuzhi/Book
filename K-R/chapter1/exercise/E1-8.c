#include <stdio.h>

/*	Exercise 1-8.
 * Write a program to count blanks, tabs, and newlines.
 */
main()
{
	int c,ns,nt,nl;
	
	ns = 0;  /* number of blanks */
	nt = 0;  /* number of tabs */
	nl = 0;  /* number of newlines */
	while ((c=getchar()) !=EOF)
		if (c == ' ')
			++ns;
		else if (c == '\t')
			++nt;
		else if (c == '\n')
			++nl;
		else
			;
	printf("num of space = %d\n",ns);
	printf("num of tab   = %d\n",nt);
	printf("num of line  = %d\n",nl);
}
