/*
 * File Name: maxword.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2014/07
 */

#include <stdio.h>
#include <string.h>

int main()
{
	int maxword, len;
	char word[1000];

	maxword = 0;
 	while (scanf("%s", word) != EOF)
		if ((len =strlen(word)) > maxword)
			maxword = len; 

	printf("%d\n", maxword);
	return 0;
}
