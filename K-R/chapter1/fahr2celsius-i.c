#include<stdio.h>

/* print Fahrenheit-Celsius table
     for fahr = 0,20,...,300 */

int main()
{
	int fachr, celsius;
	int lower, upper, step;

	lower = 0;	/*  lower limit of temperature scale */
	upper = 300;	/*  upper limit */
	step = 20;	/*  step size */

	printf("");
	
	fachr = lower;
	while(fachr <= upper){
		celsius = 5 * (fachr-32) / 9;
		printf("%6d\t%6d\n", fachr, celsius);
		fachr += step;
	}	
	return 0;
} 
