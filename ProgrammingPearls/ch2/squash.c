#include <stdio.h>
#include <string.h>

#define WORDMAX 23 
int main()
{
	char sign[WORDMAX+1], word[WORDMAX+1]; 
	char oldsign[WORDMAX+1] = {0};
	int linenum;

	linenum = 0;
	while(scanf("%s %s", sign, word) != EOF) {
		if(strcmp(sign, oldsign) != 0 && linenum > 0)
			putchar('\n');
		strcpy(oldsign, sign);
		linenum++;
		printf("%s ", word);
	}

	putchar('\n');
	return 0;
}
