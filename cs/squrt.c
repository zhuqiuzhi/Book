#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	long int longx ;
	int x;

	printf("(signed)int max is %d\n",INT_MAX);
	for (x = 5; x <= 5000000; x*=10)
		printf("x = %d x^2 = %u\n", x, x*x);

	printf("\nlongx's type is long (signed)int \n");
	printf("long int max is %ld\n",LONG_MAX);
	for (longx = 5; longx <= 5000000; longx *= 10)
		printf("longx = %ld longx^2 = %ld\n", longx, longx*longx);
	return 0;
}
