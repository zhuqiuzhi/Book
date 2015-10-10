/*
 * File Name: E3-2.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */

#include <stdio.h>
#define MAXCHAR 10  /* length of character array */

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main()
{
	
	char s[MAXCHAR];
	char t[MAXCHAR] = "\n\\\t";
	char t1[MAXCHAR];

	escape(s, t);
	printf("s:%s   t:%s\n", s, t);

	unescape(t1, s);
	printf("s:%s   t1:%s\n", s, t1);

}

/*  escape: expand newline an tab into visible sequences */
/*          while copying the string t to s */
void escape(char s[], char t[])
{
	int i, j;

	for (i = j = 0; t[i] != '\0'; i++) {
		switch (t[i]) {
		case '\n' :
			s[j++] = '\\';
			s[j++] = 'n';
			break;
		case '\t' :
			s[j++] = '\\';
			s[j++] = 't';
			break;
		default :
			s[j++] = t[i];
			break;
		}
	}
	s[j] = '\0';
}

/* unescape: convert escape int real characters */
/*           while copying the string t to s */
void unescape(char s[], char t[])
{
	int i, j;
	
	for (i = j = 0; t[i] != '\0'; i++, j++) {
		if (t[i] == '\\') {
			i++;
			switch (t[i]) {
			case 'n' :
				s[j] = '\n';
				break;
			case 't' :
				s[j] = '\t';
				break;
			default:
				i--;        /*  back a step */
				s[j] = '\\';
				break;
			}
		}
		else 
			s[j] = t[i];
	}
	s[j] = '\0';
}
