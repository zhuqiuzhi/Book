#include<stdio.h>
#include<limits.h> 	/* Sizes of integer types */
#include<float.h>

int main()
{
	
	printf("The size of interger types.\n");
	printf("%10s %10s %10s\n","Data Type", "Maximum", "Minimun");
	/* char  */
	printf("%10s %u %u\n", "uchar", UCHAR_MAX, CHAR_MIN );
	printf("%10s %d %d\n", "schar", SCHAR_MAX, SCHAR_MIN );
	/* short */
	printf("%10s %u %u\n", "ushort", USHRT_MAX, 0);
	printf("%10s %d %d\n", "short", SHRT_MAX, SHRT_MIN);
	/* int   */
	printf("%10s %u %u\n", "uint", UINT_MAX, 0);
	printf("%10s %d %d\n", "int", INT_MAX, INT_MIN);
	/* long int */
	printf("%10s %lu %u\n", "ulong", ULONG_MAX, 0);
	printf("%10s %ld %ld\n", "long", LONG_MAX, LONG_MIN);

	return 0;	
}
