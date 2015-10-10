#include <stdio.h>
#include <stdlib.h>
#define MAXN 1000000

int binsearch(int x[], int n, int t);

/* test function binsearch */
main(int argc, char *argv[])
{
	int a[MAXN];
	int i, t, p;

	i = 0;		    /* counter of input */
	t = atoi(argv[1]);  /* target of search */

	/* read array from input */
	while(scanf("%d", &a[i]) != EOF)
		i++;
	/* search t in array */
	p = binsearch(a, i, t);

	printf(" %d\n", p);
		
	return 0;
}
/* 
   precondition: x[0] <= x[1] <= ... <= x[n-1]
   postcondition:
           result == -1     =>  t not prsent in x
           0 <= result < n  =>  x[result] == t
 */
int binsearch(int x[], int n, int t)
{
	int l, u,  m, counter;
	l = 0;			/* lower */
	u = n - 1;		/* upper */
	counter = 0;		/* counter for compare */

	while (l <= u) {
		++counter;
		m = (l+u) / 2;		
		if (x[m] == t) { 
			++counter;
			return m;	/* find target */
		} else if (x[m] < t){
			++counter;
			l = m + 1;
		} else {		/* x[m] > t */
			counter += 2;
			u = m - 1;
		}
	}
	++counter;
	printf("%d\n", counter);
	return -1;	/* no find target  */
}
