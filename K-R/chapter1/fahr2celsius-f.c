#include<stdio.h>

/* print Fachrenheit-Celsius table 
    for fahr = 0, 20 , ..., 300; floating-point version*/

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/*  lower limit of temperatuire scale */
	upper = 300;	/*  up limit of temperatuire scale */
	step = 20;	/*  step size */

	
	fahr = lower;
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0); 
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}	
	return 0;
} 
