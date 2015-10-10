#include <stdio.h>

float fahr2cel(int fahr);

/*	Exercise 1.15. 
 * Rewrite the temperature conversion program of 
 * Section 1.2 to use a function for conversion.
 */
main()
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr +20)
		printf("%3d %6.1f\n", fahr, fahr2cel(fahr));
	return 0;
}

float fahr2cel(int fahr)
{
	return (5.0/9.0) * (fahr-32);
	
}
