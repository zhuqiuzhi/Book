/*
 * File Name: PrimitiveCalcutor.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 100 
int main()
{
	double sum; 
	double atof_k(char *s); 
	char line[MAXLINE];
	int getline_k(char line[], int max);

	sum = 0;
	while (getline_k(line, MAXLINE) > 0)
		printf("\t%g\n", sum += atof_k(line));
	return 0;
}
