#include<stdio.h>

/*  
	 	    练习1-4
	打印当  celsius = -20,0,...,180,200
    	时，分别打印摄氏温度和华氏温度的对照表
*/
int main()
{
	float celsius,fahr;
	int lower,upper,step;

	lower = -20;	/*  温度表的下限  */
	upper = 300;	/*  温度表的上限  */
	step =  20;     /*  步长  */

	printf("celsius  fahr\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0*celsius) / 5.0 + 32.0;
		printf("%6.0f %6.1f\n",celsius,fahr);
		celsius += step;
	}
	return 0;
}
