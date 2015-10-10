#include <stdio.h>
#include <assert.h>
#define MAXN 1000000

typedef int Datatype;
int binarysearch(Datatype x[], int n, Datatype t);
int sorted(Datatype x[], int n);

main()
{
	int n;
	Datatype t;
	Datatype x[MAXN];

	while (scanf("%d %d", &n, &t) != EOF) {
		int i, p;
		assert(n <= MAXN);
		for (i = 0; i < n; i++)
			x[i] = 10 * i;
		assert(sorted(x, n));
		p = binarysearch(x, n, t);
		printf(" %d\n", p);
	}
}

int binarysearch(Datatype x[], int n, Datatype t)
{
        int l, u,  m;
        l = 0;
        u = n - 1;
	
	/* prove loop can stop*/
	int oldsize, size;
	size = n + 1;

        while (l <= u) {
		oldsize = size;
		size = u - l + 1;
		assert(size < oldsize);

                //m = (l+u) / 2;          
		m = l + (u-l) / 2
                if (x[m] < t) 
                        l = m + 1;
                else if (x[m] == t) { 	
			assert(0 <= m && m < n && x[m] ==t);
                        return m;       /* find target */
                } else 			/* x[m] > t */
                        u = m - 1;
        }
	assert((u<0||x[u] < t) && (u+1 >=n||x[u+1]>t));
        return -1;      		/* no find target  */
}

/* badsearch will lead to dead loop */
int badsearch(Datatype x[], int n, Datatype t)
{
        int l, u,  m;
        l = 0;
        u = n - 1;

        while (l <= u) {
                m = (l+u) / 2;          
printf(" %d %d %d\n", l, m, u);
                if (x[m] == t) 
                        l = m;
                else if (x[m] < t)
                        return m;       /* find target */
                else 			/* x[m] > t */
                        u = m;
        }
        return -1;      		/* no find target  */
}

int sorted(Datatype x[], int n)
{
	int i;
	for (i = 0; i < n-1; i++)
		if (x[i] > x[i+1])
			return 0;
	return 1;  	/* array x is sorted */
}
