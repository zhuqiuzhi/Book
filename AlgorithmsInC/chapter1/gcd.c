#include <stdio.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int gcd(int u, int v)
{
	while (u > 0) {
		if (u < v)
			swap(&u,&v);
		u = u -v;
	}
	return v;
}

int main()
{
	int x, y;
	while (scanf("%d %d", &x, &y)!=EOF)
		if (x>0 && y>0)
			printf("%d, %d, %d\n", x, y, gcd(x, y));
	return 0;
}
