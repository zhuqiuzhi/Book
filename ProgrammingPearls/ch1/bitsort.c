/* 
 *   bitsort.c -- bitmap sort from Column 1
 *   Sort distinct integers in the range [0..N-1]
 *   int is 32-bit long
 */

#include <stdio.h>

#define BITSPERWORD 32
#define SHIFT 5   	/* 2**5 = 32*/
#define MASK 0x1F	/* i & MASK is to mask higher (32-5)-bit of i */
#define N 10000000	/*  there is max N numbers */
int a[1+N/BITSPERWORD];

void set(int i);   /* set bit[i] = 1 */
void clr(int i);   /* set bit[i] = 0 */
int test(int i);   /* return bit[i]==1 */


int main()
{
	int i;

	for (i = 0; i < N; i++)
		clr(i);
	while (scanf("%d", &i) != EOF)
		set(i);
	for (i = 0; i < N; i++)
		if (test(i))
			printf("%d\n",i);
	return 0;
}
/* set bit[i] = 1 */
void set(int i) {  	 a[i>>SHIFT] |=  (1<<(i & MASK)); }   
/* set bit[i] = 0 */
void clr(int i) {        a[i>>SHIFT] &= ~(1<<(i & MASK)); }  
/*return bit[i]==1*/
int test(int i) { return a[i>>SHIFT] &   (1<<(i &MASK)); }
