/* 
 *  第12章第一种解决方案的完整实现
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rselect(int, int);

main(int argc,char *argv[])
{
	int m, n;

	//printf("random select m numbers form 0 ... n-1\n");
	//scanf("%d %d", &m ,&n);
	m = atoi(argv[1]);
	n = atoi(argv[2]);
	srand((unsigned) time(NULL));
	rselect(m, n);
}

/* random select m numbers form 0 ... n-1,generate sorted list  */
void rselect(int m, int n)
{
	int select, remaining,i;

	select = m;
	remaining = n;
	
	int c; /* counter */
	c = 0;
	for (i = 0; i < n; i++) {
		if (rand() % remaining < select) {
			printf("%d\n",i);
			--select;
			c++;
			if (c == m)
				break;
		}
		--remaining;
	}
}
